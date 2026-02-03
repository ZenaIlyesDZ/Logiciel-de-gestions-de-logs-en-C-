/*
 * @file : Gestion_logs.cpp
 * @brief summary of the role : Gestionnaire de logs en C++
 * @author : Ilyes
 * @date : 17/01/2026
 * @details :
 * Ce logiciel permet de gestionner des logs, les trier, les visualiser et les enregistrer.
 */
#include <iostream>
#include "Menu/Menu.h"

int nombreEntré;    // Variable pour stocker le choix de l'utilisateur

int main() {
    do
    {
        afficherMenu(); // On apelle la fonction afin d'afficher le menu
        std::cout << "Entrez votre choix : ";
    
    if (!(std::cin >> nombreEntré)) { // On vérifie si l'entrée est un entier et non une lettre ou autre caractère
        std::cout << "Entrée non valide. Veuillez entrer un chiffre." << std::endl; }
    
    else { // Si l'entrée est un entier, on traite le choix de l'utilisateur
        choixLog(nombreEntré);
    }
    } while (nombreEntré != 0); // On affiche le menu jusqu'à ce que l'utilisateur choisisse de sortir en appuyant sur 0
    
    return 0;
}
