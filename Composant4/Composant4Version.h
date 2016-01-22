

#define Composant4Version_1 1
#define Composant4Version_2 3
#define Composant4Version_3 0
#define Composant4Version_4 0

/////////// apres cette ligne: ne pas modifier ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

#define COMPOSANT4_VERSION Composant4Version_1,Composant4Version_2,Composant4Version_3,Composant4Version_4

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define VERSION_TEXT(_version,_build,_interface,_fonction) \
	TOSTRING(_version) TOSTRING(.) TOSTRING(_build) TOSTRING(.) TOSTRING(_interface) STRINGIFY(.) TOSTRING(_fonction)

#define COMPOSANT4_VERSION_STR VERSION_TEXT(Composant4Version_1,Composant4Version_2,Composant4Version_3,Composant4Version_4)
