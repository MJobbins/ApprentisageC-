#include "Personnage.h"
#include <iostream>

using namespace std;

	/* DEUX MANIERES DE FAIRE LES CONSTRUCTEURS*/
	//1
	Personnage::Personnage()
	{
		m_vie = 100;
		m_mana = 100;
		m_arme = "Sword";
		m_degatsArme = 10;
	}

	//2
	Personnage::Personnage : m_vie(100), m_mana(100), m_arme("Sword"),
	m_arme(10)
	{
		//Rien dans le corps du constructeur
	}

	//Destructeur
	Personnage::~Personnage()
	{
		//On ne met rien ici comme nous n'allouons rien dans la classe
	}

	void Personnage::recevoirDegats(int nbDegats)
	{
		if(m_vie > nbDegats)
			m_vie -= nbDegats;
		else
			m_vie = 0;
	}

	//Comparaison
	bool Personnage::estEgal(Personnage const& a)
	{
		if (a.m_vie == m_vie &&
		 a.m_arme == m_arme && 
		 a.m_mana == m_mana && 
		 a.m_degatsArme == m_degatsArme)
			return true;
		else
			return false;
	}

	//fonction d'operateur ==. (n'est pas une methode de la classe)
	bool operator==(Personnage const& a, Personnage const& b)
	{
		return a.estEgal(b);
	}

	//Affichage
	ostream& operator<<(ostream &flux, Personnage const& pers)
	{
		//...
		return flux;
	}

	//Si l'operateur modifie l'objet qui l'appel, celui ci est une
	//Methode de la classe