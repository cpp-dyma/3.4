//Inclusion d'un fichier standard
#include <iostream>
//Inclusion de mon fichier
#include "monfichier.h"

//Déclaration d'une macro
#define PI 3.14
//Déclaration d'une macro pseduo-fonction
#define surfaceCercle(r) (PI * r * r)

int main(){

    //Utilisation de la macro PI
    std::cout<<"La valeur de pi est "<<PI<<std::endl;
    int r=0;
    std::cout<<"Quel est le rayon du cercle : "<<std::endl;
    std::cin>>r;

    /*****************************************************/
    //Utilisation de la pseudo-fonction macro
    double surface = surfaceCercle(r);
    std::cout<<"La surface est de : "<<surface<<std::endl;

    /*****************************************************/
    //Test sur le type de build paramétré dans CMake (voir CMakeLists.txt)
    #ifdef DEBUG_MODE
	    std::cout<<"Je suis en mode debug"<<std::endl;
    #elif RELEASE_MODE
        std::cout<<"Je suis en mode release"<<std::endl;
    #endif

    /*****************************************************/
    //Test sur le système d'exploitation
    #ifdef _WIN32
	    std::cout<<"Coucou de Windows"<<std::endl;
    #elif __linux__
        std::cout<<"Coucou de Linux"<<std::endl;
    #else
        std::cout<<"Coucou d'ailleurs"<<std::endl;
    #endif

    /*****************************************************/
    //Utilisation des macros par défaut
    std::cout<<"Ce message provient du fichier : "<<__FILE__<<" et de la ligne "<<__LINE__<<" le "<<__DATE__<<" a "<<__TIME__;

}