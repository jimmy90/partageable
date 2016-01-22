

#define Composant3Version_1 1
#define Composant3Version_2 2
#define Composant3Version_3 0
#define Composant3Version_4 2

/////////// apres cette ligne: ne pas modifier ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

#define COMPOSANT3_VERSION Composant3Version_1,Composant3Version_2,Composant3Version_2,Composant3Version_4

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define VERSION_TEXT(_version,_build,_interface,_fonction) \
	TOSTRING(_version) TOSTRING(.) TOSTRING(_build) TOSTRING(.) TOSTRING(_interface) STRINGIFY(.) TOSTRING(_fonction)

#define COMPOSANT3_VERSION_STR VERSION_TEXT(Composant3Version_1,Composant3Version_2,Composant3Version_3,Composant3Version_4)
