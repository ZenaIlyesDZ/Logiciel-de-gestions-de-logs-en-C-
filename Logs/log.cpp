/*
@file : log.cpp
@brief summary of the role : Fichier avec les fonctions pour afficher les logs
@author : Ilyes
@date : 05/02/2026
@details :
Ce fichier contient les fonctions pour afficher les logs, comme les logs sudo, logs ssh.
*/

#include <iostream>
#include <fstream>
#include <string> 
#include "/home/vboxuser/CNED/logiciel_gestions_logs/Menu/Menu.h"
#include "log.h"


int sudoLog() { // Variable pour stocker le choix de l'utilisateur pour les logs sudo
    if (nombreEntré == 1) { // Si l'utilisateur choisit 1, on affiche les logs sudo
    std::ifstream file("/var/log/auth.log"); // Ouvre le fichier de tests
    std::string line; // Variable pour stocker chaque ligne lue du fichier
    
    if (file.is_open()) { // Vérifie si le fichier est ouvert correctement
        while (std::getline(file, line)) { // Lit chaque ligne du fichier
            if (line.find("sudo") != std::string::npos) { // Si la ligne contient "sudo", on l'affiche
                std::cout << line << std::endl;
            } 
        }
    file.close();
    } else {
        std::cout << "Impossible d'ouvrir le fichier." << std::endl;
    }
    }
    return 0;
}

