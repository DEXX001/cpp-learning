#include "logger.hpp"
#include <fstream>
#include <iostream> // Pour cerr en cas d'erreur

void Logger::Write(std::string message)
{
    std::ofstream fichier("logs.txt", std::ios::app);

    if (fichier.is_open())
    {
        fichier << "[DEXXPACK-SYSTEM]" << message << std::endl;
    }
    else
    {
        std::cerr << "Erreur: Impossible d'écrire dans les logs." << std::endl;
    }

}