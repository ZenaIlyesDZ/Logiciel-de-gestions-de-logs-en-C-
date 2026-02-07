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

struct sshDateTime // Structure pour stocker les dates concernant les log de connexion SSH
{ 
    std::string day;
    std::string hour; 
    std::string minute; 
    std::string second; 
};


int sudoLog() { // Filtre les entrées de log contenant des requêtes sudo depuis le fichier /var/log/auth.log
    if (nombreEntré == 1) { // Si l'utilisateur choisit 1, on affiche les logs sudo
    std::ifstream file("/var/log/auth.log"); // Ouvre le fichier auth.log
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

int sshLog() { // Structure pour stocker les éléments concernant les log de connexion SSH
    std::string line; // Variable pour stocker chaque ligne lue du fichier
    sshDateTime sshDateTime;
    if (nombreEntré == 2) { // Si l'utilisateur choisit 2, on affiche les logs ssh
        std::ifstream file("/var/log/syslog"); // Ouvre le fichier syslog
        
        if (file.is_open()) { // Vérifie si le fichier est ouvert correctement
            while (std::getline(file, line)) { // Lit chaque ligne du fichier
                if (line.find("ssh") != std::string::npos) { // Si la ligne contient "ssh", on l'affiche
                    std::cout << line << std::endl;
                    
                    sshDateTime.day = line.substr(0, 10); // Extrait la date de la ligne
                    sshDateTime.hour = line.substr(11, 2); // Extrait l'heure de la ligne
                    sshDateTime.minute = line.substr(14, 2); // Extrait les minutes de la ligne
                    sshDateTime.second = line.substr(17, 2); // Extrait les secondes de la ligne
                    stoi(sshDateTime.hour); // Convertit l'heure en entier
                    stoi(sshDateTime.minute); // Convertit les minutes en entier
                    stoi(sshDateTime.second); // Convertit les secondes en entier
                    std::cout << "Une connexion SSH a été faite le  : " << sshDateTime.day << " à " << sshDateTime.hour << " Heure, " << sshDateTime.minute << " min et " << sshDateTime.second << " secondes" << std::endl; 
                } 
            }
            file.close();
        } else {
            std::cout << "Impossible d'ouvrir le fichier." << std::endl;
        }

    }
    return 0; 
}