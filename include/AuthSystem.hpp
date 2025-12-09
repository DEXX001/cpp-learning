#pragma once
#include <string>

class AuthSystem {
    private:
        std::string password;
    public:
    AuthSystem();
    bool login (std::string essai) const;

};