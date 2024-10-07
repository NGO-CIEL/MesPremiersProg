//declaration des bibliotheque
//creation de l'interface
//creation de la selection des programmes (choix)
//ajout des programmes externe
#include "FonctionProg.h"
int main()
{
	std::locale::global(std::locale("fr-FR"));
	using namespace std;
	cout << "programmes de manipulation de nombres binaires";
	cout << "\n1- Estimation du cout d’un abonnement téléphonique ";
	cout << "\n2- Calcul de caisse";
	cout << "\n3- Affichage d'un caractère et de son code ASCII";
	cout << "\n4- Table des codes ASCII ";
	cout << "\n5- Taille des variables  ";
	cout << "\n6- Jeu de devinette ";
	cout << "\n7- Triangle d’étoiles";
	cout << "\nTaper votre choix: ";
	int choix = 0;
	cin >> choix;
	while (choix < 1 || choix>4);
	{

	}
	switch (choix)
	{
	case 1:
	{
		telephone();
		break;
	}
	case 2:
	{
		caisse();
		break;
	}
	case 3:
	{
		caraASCII();
		break;
	}
	case 4:
	{
		tableASCII();
		break;
	}

	}
}