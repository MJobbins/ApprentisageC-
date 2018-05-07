#include "Figure.h"
/*#include <string>
#include <iostream>
#include "Point2d.h"
#include "Vector2d.h"
*/
using namespace std;

Figure::Figure(string nom = DEFAULT_NOM) : DEFAULT_NOM("Default")
{
	if(nom.size() == 0)
		m_nom = DEFAULT_NOM;
	else
		m_nom = nom;
}

Figure::Figure(Figure const& f) : m_nom(f.m_nom), DEFAULT_NOM("Default")
{
	m_nom = f.m_nom;
}

void Figure::setNom(string nom)
{
	if(nom.size() > 0)
		m_nom = nom;
	else
		cout << "ERREUR : Chaine de characteres vide" << endl;
}

string Figure::getNom() const
{
	return m_nom;
}

void Figure::afficher() const
{
	cout << "Nom de la figure : " << m_nom << endl;
}

void Figure::operator=(Figure const& f)
{
	m_nom = f.m_nom;
}