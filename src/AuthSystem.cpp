#include "AuthSystem.hpp"


AuthSystem::AuthSystem() : password("devynn") {}

bool AuthSystem::login(std::string essai) const{
    if (essai == password)
        return true;

    return false;
}