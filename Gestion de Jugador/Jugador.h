#ifndef Jugador_h
#define Jugador_h
#include <iostream>
using namespace std;

//Jugador
struct Jugador {
    
    //Atributos (variables que yo quiero agrupar)
    char * apellido;
    int Dorsales;
    double promedio_goles;

    //Crear un estudiante con información precargada en RAM
    Jugador(char * pApellido, int pDorsales, double pPromedio_goles){
        this->apellido = pApellido;
        this->Dorsales = pDorsales;
        this->promedio_goles = pPromedio_goles;
    };

    //Crear un estudiante completamente vacío
    Jugador(){
        this->apellido = "Jugador sin nombre";
        this->Dorsales = 0;
        this->promedio_goles = 0.0;
    };

    //Mostrar todo el contenido de la estructura/Jugador
    void mostrarContenido(){
        cout<<endl<<"******************"<<endl;
        cout<<"Nombre: "<<this->apellido<<endl;
        cout<<"Edad: "<<this->Dorsales<<endl;
        cout<<"Promedio: "<<this->promedio_goles<<endl;
        cout<<"******************"<<endl<<endl;

    }

};


#endif