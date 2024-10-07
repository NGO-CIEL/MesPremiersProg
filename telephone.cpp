#include "FonctionProg.h"
void telephone()
{
	float appelA = 0.3, smsA = 0.1, abonnementMoisA = 2;
	float appelB = 0.2, smsB = 0.088, abonnementMoisB = 4;
	int temps, nbrSms;
	float TotalA, TotalB;

	cout << "Entrer votre temps d'appel en minute: ";
	cin >> temps;
	cout << "nombre d'heure d'appel : " << temps;

	cout << " \n Entrer votre nombre de sms: ";
	cin >> nbrSms;
	cout << "nombre de sms : " << nbrSms;

	TotalA = appelA * temps + smsA * nbrSms + abonnementMoisA;
	TotalB = appelB * temps + smsB * nbrSms + abonnementMoisB;

	cout << "\n total du prix du forfait A : " << TotalA;
	cout << "\n total du prix du forfait B : " << TotalB;
}