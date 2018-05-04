#include <iostream>
#include <fstream>

int main()
{
	//ECRITURE
	//On ouvre un fichier  et l'ecrase(s'il existe, autremenet cela le créer et l'ouvre)
	ofstream fichier("score.txt");

	//Si le nom du fichier est contenu dans un string :
	ofstream fichier2(nomFichier.c_str());

	//Si nous voulons ecrire à la fin du fichier (s'il existe) :
	ofstream fichier3(nomFichier.c_str(), ios::app);

	//Comme beaucoup de raisons peuvent empêcher un fichier d'être ouvert,
	//On test généralement si l'ouverture c'et bien passée


	//LECTURE
	ifstream(nomFichier.c_str());

	if(fichier) // si tout est ok
	{

		//Ecrire dans un fichier
		fichier << "lsdeez" << endl;
		fichier << 43 << endl;

		//Lire dans un fichier
		//ligne par ligne
		string ligne;
		getline(fichier, ligne);
		//getline renvoi un boolean, true si elle a lue quelque chose
		//False si non, dans quel cas nous somme à la fin du fichier

		//mot par mot
		string mot;
		fichier >> mot;

		//char par chat
		char a;
		fichier.get(a);

		//Lorsqu'on passe de lecture mot par mot à ligne par ligne :
		fichier.ignore();

		//fermeture du fichier automatique à la fin du bloc
		//Pour fermetrue manuelle
		fichier.close();

		//On peut également ouvrir un fichier après sa déclaration
		ofstream fic;

		fic.open("fichier.txt");


		//Savoir ou est le curseur dans le fichier (en octets)
		//ifstream
		fichier.tellg();
		//ofstream
		fichier.tellp();

		//idem pour se déplacer :
		fichier.seekg/*p*/(nombreCaracteres, position);
		//Trois positions possibles : ios::beg;
		//ios::end;
		//ios:cur; (pos actuelle)
		//Pour aller 20 char plus loin que le curseur :
		fichier.seekp(20,ios::cur);

	}
	else
	{
		cout << "ERREUR : Impossible d'ouvrir le fichier" << endl;
	}


	return 0;
}