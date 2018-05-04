#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

class Personnage
{
	/************
	** METHODES
	*************/
	public :

	//Constructeur sans paramètre.
	Personnage();

	//Destructeur, il ne peut en n'avoir qu'un
	~Personnage();

	//C++ génère automatiquement un constructeur par copie.
	void recevoirDegats(int nbDegats);

	//Mettre le mot clé "const" signife qu'il n'y auras pas de modification de l'objet.
	//On l'utilise lorsque la methode ne sert que de lecture
	void maMethode(int paramètre) const;

	//pour utiliser les operateurs
	bool estEgal(Personnage const& a);

	//Permet d'appeler les redéfinitions des classes filles.
	//le mot clé virtual n'est que dans le .h
	//ATTENTION ON NE PEUT PAS APPELER DE METHODE VIRTUAL DANS LES
	//			CONSTRUCTEURS !!!
	virtual void afficher(Personnage const& a);


	//UN DESTRUCTEURS DOIT TOUJOURS ÊTRE VIRTUEL SI ON UTILISE LE
	//POLYMORPHIMSE



	//Methode virtual pure (methode abstraite java)
	//On ajoute = 0 à la fin
	//Si une classe contient une methode comme celle ci, on ne peut
	//Pas l'instancier.
	virtual void fonction() = 0;


	/************
	** ATTRIBUTS
	*************/
	private :

	//On prècède les attributs de la classe d 'm_' pour "membre"
	//Cela permet de les différencier avec les variables locales
	int m_vie;
	int m_mana;
	std::string m_arme;
	int m_degatsArme;

};

#endif