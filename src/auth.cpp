#include "auth.h"

bool validatePassword(const std::string &password) {
    return password.length() >= 8;
}