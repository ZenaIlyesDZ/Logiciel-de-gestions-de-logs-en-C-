/*
 * @file : Gestion_logs.cpp
 * @brief summary of the role : Gestionnaire de logs en C++
 * @author : Ilyes
 * @date : 17/01/2026
 * @details :
 * This app allows you to manage logs efficiently, to store, retrieve, and analyze log data.
 */
#include <iostream>

int main() {
    std::cout << "CNED-Gestion de logs" << std::endl;
    std::cout << "Menu" << std::endl;
    std::cout << " Choisir une option" << std::endl;
    std::cout << "1 - Afficher log sudo" << std::endl;
    std::cout << "2 - Afficher et enregistrer log ssh" << std::endl;
    std::cout << "0 - Sortir du programme" << std::endl;
    int nombreEntré; // Variable pour stocker le choix de l'utilisateur
    if (!(std::cin >> nombreEntré)) { // On vérifie si l'entrée est un entier et non une lettre ou autre caractère
        std::cout << "Entrée non valide. Veuillez entrer un chiffre." << std::endl; }
    else if (nombreEntré != 0 && nombreEntré != 1 && nombreEntré != 2) { // On vérifie si l'entrée est parmi les options valides a savoir 0, 1 ou 2
        std::cout << "Option non valide. Veuillez réessayer avec une option existante" << std::endl;
    }
    else { // Affiche le choix de l'utilisateur si la saisie est correcte
        std::cout << "Vous avez choisi l'option : " << nombreEntré << std::endl; 
    }
    if (nombreEntré == 1) {
        std::cout << "Affichage des logs sudo" << std::endl;
    }
    else if (nombreEntré == 2){
        std::cout << "Affichage et enregistrement des logs ssh" << std::endl;
    }
    else if (nombreEntré == 0 || nombreEntré >= 3) {
        std::cout << "Sortie du programme" << std::endl;
    }
    }
