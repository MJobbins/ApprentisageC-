#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Figure.h"

class Rectangle : public Figure
{

	/*******************
	**METHODES
	********************/
	public :

	//Constructeurs ET Destructeurs
	Rectangle();
	Rectangle(Rectangle const& rect);

	~Rectangle();

	//Getter et Setters
	void setSommet(Point2d const& sommet);
	void setLargeur(int largeur);
	void setLongueur(int longueur);

	Point2d getSommet() const;
	int getLargeur() const;
	int getLongueur() const;

	//Methodes abstraites de la mère
	virtual void afficher() const;

	virtual void operator=(Figure const& f);

	virtual void translate(Vector2d const& vect);

	virtual void scale(int k, Point2d const& O);
	
	virtual void rotate(Point2d const& centre, int degres);

	virtual void getCenter() const;


	/*******************
	**ATTRIBUTS
	********************/
	private	:

	point2d m_sommet;
	int m_longueur;
	int m_largeur;

};


#endif