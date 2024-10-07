#include "FonctionProg.h"
void caisse()
{
	float centime1 = 0.01, centime2 = 0.02, centime5 = 0.05, centime10 = 0.10, centime20 = 0.20, centime50 = 0.50, euro1 = 1.00, euro2 = 2.00, TotalC, TotalE, Total; //definition des variables des pieces 
	int quantiter1c, quantiter2c, quantiter5c, quantiter10c, quantiter20c, quantiter50c, quantiter1E, quantiter2E; //definition des variables de la quantiter
	using namespace std;

	cout << "nombre de piece de 1c: ";
	cin >> quantiter1c;

	cout << "nombre de piece de 2c: ";
	cin >> quantiter2c;

	cout << "nombre de piece de 5c: ";
	cin >> quantiter5c;

	cout << "nombre de piece de 10c: ";
	cin >> quantiter10c;

	cout << "nombre de piece de 20c: ";
	cin >> quantiter20c;

	cout << "nombre de piece de 50c: ";
	cin >> quantiter50c;

	cout << "nombre de piece de 1euro: ";
	cin >> quantiter1E;

	cout << "nombre de piece de 2euro: ";
	cin >> quantiter2E;


	TotalC = centime1 * quantiter1c + centime2 * quantiter2c + centime5 * quantiter5c + centime10 * quantiter10c + centime20 * quantiter20c + centime50 * quantiter50c;	//total centimes
	TotalE = quantiter1E * euro1 + quantiter2E * euro2;	//total euro
	Total = TotalC + TotalE;	//total des euros et centimes cummuler

	cout << "prix total des pieces: " << Total;
}