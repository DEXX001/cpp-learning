#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "AuthSystem.hpp"
#include "logger.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Erreur : Login manquant." << std::endl;
        std::cout << "Usage  : " << av[0] << " <votre pseduo> " << std::endl;
        return EXIT_FAILURE;
    }

    AuthSystem session;

    std::string user_input = av[1]; 

    std::cout << "Bienvenue dans DxPack\n" << std::endl;
    
    for (int i = 0; i < ac; i++)
    {
        std::cout << " Arg numero " << i << " contient : " << av[i] << std::endl;   
    }
    

    if (session.login(user_input))
    {
        std::cout << "[+] AUTORISER " << std::endl;
        Logger::Write("[SUCCESS] connexion de " + user_input);
    }
    else
    {    
        std::cout << "[-] REFUSER" << std::endl;
        Logger::Write("[ALERT] Tentative d'intrusion avec pseudo : " + user_input);
    }
    return EXIT_SUCCESS;
    
}