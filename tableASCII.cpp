#include "FonctionProg.h"
void tableASCII()
{
	unsigned char caractere;
	for (caractere = 32; caractere < 128; caractere++)
	{
		cout << "caractere entre 32 et 127: " << hex << caractere << endl;
	}
}