//
// Created by Jobbins Morgan on 07/05/2018.
//

#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() :
m_longueur(1),
m_largeur(1),
m_sommet(0, 0)
{
    Figure::Figure("Rectangle");
}

Rectangle::Rectangle(const Rectangle &rect) :
m_largeur(rect.getLargeur()),
m_longueur(rect.getLongueur()),
m_sommet(rect.getSommet())
{
    Figure::Figure("Rectangle");
}

Rectangle::~Rectangle()
{
}

void Rectangle::setSommet(Point2d const &sommet)
{
    m_sommet = sommet;
}

void Rectangle::setLargeur(int largeur)
{
    m_largeur = largeur;
}

void Rectangle::setLongueur(int longueur)
{
    m_longueur = longueur;
}

Point2d Rectangle::getSommet() const
{
    return m_sommet;
}

int Rectangle::getLargeur() const
{
    return m_largeur;
}

int Rectangle::getLongueur() const
{
    return m_longueur;
}

void Rectangle::afficher() const
{
    Figure::afficher();
    cout << "Longueur : " << m_longueur << endl;
    cout << "Largeur : " << m_largeur << endl;
    cout << "Point d'origine : (" << m_sommet.getX() << ", " << m_sommet.getY() << ")" << endl;
}

void Rectangle::operator=(Rectangle const &r)
{
    Figure::operator=( (Figure)r );
    m_longueur = r.getLongueur();
    m_largeur = r.getLargeur();
    m_sommet = r.getSommet();
}

void Rectangle::translate(Vector2d const &vect)
{
    Point2d tmp(m_sommet);
    tmp.setX( tmp.getX() + vect.)
}

void Rectangle::scale(int k, Point2d const &O)
{

}

void Rectangle::rotate(Point2d const &centre, int degres)
{

}

void Rectangle::getCenter() const
{

}
