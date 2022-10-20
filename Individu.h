/**
 * @file Individu.h
 * @author P.Lopisteguy
 * @brief Spécifie une classe individu en relation réciproque avec sa voiture
 * @version 0.1
 * @date 2022-10-20
 * @details ce fichier écrit une classe Individu
 * 
 * un Individu est défini par un nom, un prénom et une Voiture
 * @copyright Copyright (c) 2022
 * 
 */



#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief représente un Individu à partir de son nom prénom et voiture
 * @warning un Individu ne peut conduire qu'une Voiture
 */

class Individu
{
    // ATTRIBUTS
    
  public:
    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom;     
    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;      

    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture; 

    // MÉTHODES
  public:
  /**
   * @brief Ca construit un individu a pertir de son nom prenom;Construct a new Individu object
   * 
   */
    // Constructeur
    Individu(string = "", string = "");
    // destructeur
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief retourne l'identité de l'Individu
     * @bug un espace en trop entre le nom et le prénom
     * @return chaine sous la forme nom, prenom
     */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Défini la Voiture conduite par l'Individu
     * 
     * @param [in] voiture un pointeur vers l'objet Voiture conduit par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H