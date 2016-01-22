
#include "../interfaces/Composant4.h"
#include "Composant4Version.h"
#include "../Composant3/Composant3Version.h"
#include "../interfaces/Composant3.h"

int composant4(int p1, int p2)
{
	return composant3(p1, p2);
}

char * getComposant4Version()
{
	return " Composant 4 version substituant composant 1 ==> " COMPOSANT4_VERSION_STR " // Composant 3 version ==> " COMPOSANT3_VERSION_STR;
}
