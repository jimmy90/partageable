

#define Composant2Version_1 1
#define Composant2Version_2 2
#define Composant2Version_3 0
#define Composant2Version_4 1

/////////// apres cette ligne: ne pas modifier ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

#define COMPOSANT2_VERSION Composant2Version_1,Composant2Version_2,Composant2Version_3,Composant2Version_4

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define VERSION_TEXT(_version,_build,_interface,_fonction) \
	TOSTRING(_version) TOSTRING(.) TOSTRING(_build) TOSTRING(.) TOSTRING(_interface) STRINGIFY(.) TOSTRING(_fonction)

#define COMPOSANT2_VERSION_STR VERSION_TEXT(Composant2Version_1,Composant2Version_2,Composant2Version_3,ComposantVersion_4)
