#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Nodo{
private:
    string valor;
    Nodo *siguiente;
    
public:
    
    void agregarAlNodo(string palabra,Nodo *sig){
        valor=palabra;
        siguiente=sig;
    }
    
    string mostarPalabra(void){
        return valor;
    }
    
    Nodo *mostarSiguiente(void){
        return siguiente;
    }
    
};
