//
// Created by Jobbins Morgan on 07/05/2018.
//

#ifndef TD1_CARRE_H
#define TD1_CARRE_H


#include "Rectangle.h"

class Carre : public Rectangle
{

    /*******************
	**METHODES
	********************/
    public :

    //Constructeurs et destructeurs
    Carre(int cote = 1);
    ~Carre();

    //Getter et Setter
    int getCote();
    void setCote();

    //Methodes
    void operator=(Carre const &c);

    void afficher() const;

    void operator=(Rectangle const &r);

    void translate(Vector2d const &vect);

    void scale(int k, Point2d const &O);

    void rotate(Point2d const &centre, int degres);

    void getCenter() const;


};


#endif //TD1_CARRE_H
