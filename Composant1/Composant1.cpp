
#include "Composant1.h"
#include "Composant1Version.h"
#include "Composant3.h"
#include "../Composant3/Composant3Version.h"


int composant1(int p1, int p2)
{
	return composant3(p1, p2);
}

char * getComposant1Version()
{
	return " Composant 1 version ==> " COMPOSANT_VERSION_STR " // Composant 3 version ==> " COMPOSANT3_VERSION_STR;
}
