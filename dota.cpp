#include <iostream>
#include <string>
#include <curl/curl.h>
#include "json.hpp"

using json = nlohmann::json;

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
    output->append((char*)contents, size * nmemb);
    return size * nmemb;
}

std::string getRequest(const std::string& url) {
    CURL* curl = curl_easy_init();
    std::string response;

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }

    return response;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: ./dota <player_id>\n";
        return 1;
    }
   
    std::string player_id = argv[1];

    std::string url = "https://api.opendota.com/api/players/" + player_id + "/wl";

    std::string data = getRequest(url);

    if (data.empty()) {
        std::cout << "Error: no data received\n";
        return 1;
}

    auto parsed = json::parse(data);
    
    if (!parsed.contains("win") || !parsed.contains("lose")) {
        std::cout << "Profile is private or unavailable\n";
        return 1;
}

    int wins = parsed["win"];
    int losses = parsed["lose"];
    int total = wins + losses;
    double winrate = (double)wins / total * 100;

    std::cout << "Total matches: " << total << "\n";
    std::cout << "Wins: " << wins << "\n";
    std::cout << "Losses: " << losses << "\n";
    std::cout << "Winrate: " << winrate << "%\n";
    
    return 0;
}
