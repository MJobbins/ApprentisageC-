//Cela sert à eviter d'inclure plusieur fois ce fichier

//Toute les lignes de code devront être entre le define et le endif.

//Dans le main on inclura uniquement le fichier .h
#ifndef MATH_H_INCLUDED
#define MATH_H_INCLUDED

//Si on veut importer des bibliothèques, le faire ici, dans le /h
#include <string>
#include <vector>

/**
**DESCRIPTION FONCTION
**/
int ajouteDeux(int nombreRecu);

/**
**DESCRIPTION FONCTION
**/
void afficherMessage(std::string message);

/**
**DESCRIPTION FONCTION
**On a ici rendu les argumengs minutes et secondes facultatifs.
**Si on ne les fournits pas, ils auront la valeur par defaut choisi
**ATTENTION
**On doit fournire les arguments de gauche a droite. On ne peut donc pas fournir que les minutes,
**ou les Heures et Secondes.
**Les paramètres par defaut doivent être à droite.
**
**Les valeurs par defaut ne sont spécifié que dans le fichier.h
**/
void nombreDeSecondes(int heures, int minutes = 0, int secondes = 0);

/**
**DESCRIPTION FONCTION
**/
void fonctionAvecTableau(std::vector<int>& tableau);


#endif //MATH_H_INCLUDED