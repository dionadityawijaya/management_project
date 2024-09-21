#include "user.h"
#include <fstream>
#include <sstream>
#include <iostream>

bool authenticateUser(const std::string &username, const std::string &password) {
    std::ifstream file ("users.csv");
    std::string line;

    if (file.is_open()) {
        while (std::getline(file, line)) {
            std::istringstream ss(line);
            std::string id, user, pass;
            std::getline(ss, id, ',');
            std::getline(ss, user, ',');
            std::getline(ss, pass, ',');

            if (user == username && pass == password) {
                return true;
            }
        }
        file.close();
    } else {
        std::cerr << "Unable to open file users.csv\n";
    }

    return false;
}