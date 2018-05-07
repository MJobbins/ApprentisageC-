#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

#include <string>
#include <iostream>
#include "Point2d.h"
#include "Vector2d.h"


    class Figure
{

	/*******************
	**METHODES
	********************/
	public :

	//Constructeurs
	Figure(std::string nom);
	Figure(Figure const& f);

	//Destructeur
	virtual ~Figure() = 0;

	//getter & setter (on ne peut passer une chaine vide)
	void setNom(std::string nom);
	std::string getNom() const;

	//Methode abstraite pour afficher la figure
	virtual void afficher() const;

	//Affectation d'une figure à partir d'une autre
	virtual void operator=(Figure const& f);

	//On sait que chaque figure aura besoin d'une methode de translation
	//Mais comme nous ne savons rien sur ça position, on la rend virtuelle pure
	virtual void translate(Vector2d const& vect) = 0;

	//On ne connais pas de taille ni le point distant O donc on ne peut
	//Que l'avoir en virtuelle pure
	virtual void scale(int k, Point2d const& O) = 0;

	//Permet de faire une rotation de l'objet autour d'un point
	virtual void rotate(Point2d const& centre, int degres) = 0;

	//Permet de trouver le centre de la figure
	virtual void getCenter() const = 0;

	/*******************
	**ATTRIBUTS
	********************/
	private :	

	std::string m_nom;
	const std::string DEFAULT_NOM;

};


#endif