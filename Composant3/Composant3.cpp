
#include "Composant3Version.h"
#include "../interfaces/Composant3.h"


int composant3(int p1, int p2)
{
	return p1 + p2;
}

char * getComposant3Version()
{
	return " Le Composant 3 version ==>" COMPOSANT3_VERSION_STR;
}
