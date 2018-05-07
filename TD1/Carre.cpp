//
// Created by Jobbins Morgan on 07/05/2018.
//

#include "Carre.h"

using namespace std;

Carre::Carre(int cote) :
m_longueur(cote),
m_largeur(cote),
m_sommet(0,0)
{
    delete m_largeur;
}

Carre::~Carre()
{

}

void Carre::operator=(Carre const &c)
{
    Figure::operator=( (Figure)c );
    m_longueur = c.getLongueur();
}

void Carre::afficher() const
{
    Figure::afficher();
    cout << "Cote : " << m_longueur << endl;
}

void Carre::operator=(Rectangle const &r)
{
    Rectangle::operator=(r);
}

void Carre::translate(Vector2d const &vect)
{
    Rectangle::translate(vect);
}

void Carre::scale(int k, Point2d const &O)
{
    Rectangle::scale(k, O);
}

void Carre::rotate(Point2d const &centre, int degres)
{
    Rectangle::rotate(centre, degres);
}

void Carre::getCenter() const
{
    Rectangle::getCenter();
}



int Carre::getCote()
{
    return 0;
}

void Carre::setCote()
{

}
