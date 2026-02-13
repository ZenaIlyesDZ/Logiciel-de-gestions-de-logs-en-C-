/*
 * @file : Documentation_fonction.h
 * @brief summary of the role : Fichier avec documentation des fonctions
 * @author : Ilyes
 * @details :
 * Ce fichier contient la documentation des fonctions du projet de gestionnaire de logs en C++
 */
#include "../Logs/log.h"


 /** @brief Documentation de la fonction main() */
 /**
 * @fn int main();
 * @brief Fonction principale du programme de gestion des logs, c'est au sein d'elle que tout le programme s'exécute.
 * @author Ilyes
 * @date Début Janvier 2026
 * @return int Retourne 0 si le programme s'est exécuté correctement.
 * @details
 * Cette fonction affiche un menu permettant à l'utilisateur de choisir entre différentes options de gestion des logs, c'est cette fonction qui est le coeur du programme.
 */

 int main();

 
 /** @brief Documentation de la fonction afficherMenu */
 /**
 * @fn void afficherMenu();
 * @brief Affiche le menu principal du programme de gestion des logs.
 * @author Ilyes
 * @date 1 Février 2026
 * @details
 * Cette fonction affiche un menu avec les différentes options disponibles pour la gestion des logs.
 */

 void afficherMenu();


/** @brief Documentation de la fonction choixLog */
 /**
 * @fn int choixLog(int nombreEntré);
 * @brief Traite le choix de l'utilisateur dans le menu principal du programme de gestion des logs.
 * @author Ilyes
 * @date 1 Février 2026
 * @param int nombreEntré Le choix de l'utilisateur (1, 2 ou 0).
 * @return int Retourne le nombre entré par l'utilisateur.
 * @details
 * Cette fonction permet à l'utilisateur de choisir une option et affiche les messages correspondants à chaque option du menu.
 */

 int choixLog(int nombreEntré);


/** @brief Documentation de la fonction sudoLog */
    /**
    * @fn int sudoLog();
    * @brief Affiche les logs sudo du système.
    * @author Ilyes
    * @date 5 Février 2026
    * @return int Retourne 0 si les logs ont été affichés correctement.
    * @details
    * Cette fonction lit le fichier /var/log/auth.log et affiche les lignes contenant "sudo" à l'utilisateur.
    */
    
    int sudoLog();

/** @brief Documentation de la fonction sshLog */
    /**
    * @fn int sshLog();
    * @brief Gère les logs SSH du système.
    * @author Ilyes
    * @date 6 Février 2026
    * @return int Retourne 0 si les logs ont été affichés correctement.
    * @details
    * Filtre les entrées de log correspondant à des connexions ssh et affiche les demandes de connexion au 
      format de la structure SshLogging
    */
    int sshLog();
  
/** @brief Documentation de la fonction enregistrerSSHLog */
    /**
    * @fn int enregistrerSSHLog(SSHLogging sshlog);
    * @brief Enregistre les logs SSH dans un fichier.
    * @author Ilyes
    * @date 10 Février 2026
    * @param SSHLogging sshlog La structure contenant les informations de connexion SSH à enregistrer.
    * @return int Retourne 1 si les logs ont été enregistrés correctement, -1 en cas d'erreur.
    * @details
    * Cette fonction ouvre le fichier /home/vboxuser/CNED/logiciel_gestions_logs/Logs/ssh_logs.txt en mode ajout et écrit les informations de connexion SSH dans ce fichier.
    */
    int enregistrerSSHLog(SSHLogging sshlog);