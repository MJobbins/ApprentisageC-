//affichage et lecture sur console
#include <iostream>
//String
#include <string>
//Tableaux dynamiques (taille non constante)
#include <vector>

using namespace std;

//Passage des arguments par référence (evite la recopie mais arguments modifiable)
void echange(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

//Pour arguments non modifiables on rajoute const :
void fonction(int& const a){}

//On peut passer un tableau dynamique facilement en argument.
//Attention, il passe ici en copie. S'il est grand, le faire passer par réference
void fonction2(vector<int> a){}
void fonction3(vector<int> const& a){}

int main()
{
	//Ecrire sur le terminal
	cout << "Hello World !" << endl;
	//Declaration et initialisation d'un int à 2
	int number(8);
	cout << number << endl;

	//Pour faire une référence
	int& testAlias(number);
	cout << testAlias << endl;

	//Demander une entrée à l'utilisateur
	/**
	**ATTENTION : S'ARRETE A UN ESPACE OU ENTREE POUR UN STRING
	**/
	cin >> testAlias;
	cout << "vous avez entré : " << number << endl;

	//Ignore tout les caracteres dans le buffer (reviens a vider le buffer)
	cin.ignore();

	//Recuperer un string avec un espace dedans
	string nomPrenom;
	getline(cin, nomPrenom);
	cout << "nom et prenom :" << nomPrenom << endl; 

	//a Prend la même valeur que number, mais a et number sont 
	//deux variables différentes (PAS COMME JAVA)
	int a(1);
	a = number;

	//Constante, variable non modifiable (final en java)
	int const B(2);

	//DIFFERENCE ENTRE i++ ET ++i :
	/*
	** ++i incrémente toute suite
	** i++ incrémente après (après quoi ???) (créer des copies temporaire de l'incrémentation)
	*/
	int i(0);
	for(i = 0; i < 5; ++i)
	{
		cout << i << endl;
	}
	cout << i << endl;

	//Fonction avec en parametre des reference
	cout << "echange" << endl;
	int bb(5);
	echange(number, bb);
	cout << "nombre" << number << "bb" << bb << endl;

	//Declarer un tableau statique
	//TYPE NOM[TAILLE]
	int tableauStat[2];
	//IL FAUT UTIILISER UNE CONSTANTE COMME TAILLE DE TABLEAU
	//Dans une fonction, un tableau est passé par référence, mais pas besoin du '&'

	//Declarer un tableau dynamique
	//vector<TYPE> NOM(TAILLE)
	//On peut ne pa mettre de taille :
	////vector<TYPE> NOM
	vector<int> tableauDyna(5);

	//Initialiser tout le tableau avec une certaine valeur :
	//vector<TYPE> NOM(TAILLE, VALEUR)

	//Ajouter une case au tableau, avec une valeur :
	tableauDyna.push_back(8);

	//Supprimer la dernière case du tableau :
	tableauDyna.pop_back();

	//Recupérer la taille du tableau :
	tableauDyna.size();

	//Tableau multidimensionel dynamiques :
	vector<vector<int> > grille;

	grille.push_back(vector<int>(5));   //On ajoute une ligne de 5 cases à notre grille
	grille.push_back(vector<int>(3,4)); //On ajoute une ligne de 3 cases contenant chacune le nombre 4 à notre grille

	grille[0].push_back(8);     //Ajoute une case contenant 8 à la première ligne du tableau
	
	//Faire une liste d'élément fille d'un classe mère :
	vector<Vehicule*> listeVehicules;

	//Ajouter un element:
	listeVehicules.push_back(new Voiture());
	listeVehicules.push_back(new Moto());	

	// NE PAS OUBLIER DE LES SUPPRIMER
	for(int i(0), i<listeVehicules.size(), i++)
	{
		delete listeVehicules[i];
		listeVehicules[i] = 0
	}

	return 0;
}