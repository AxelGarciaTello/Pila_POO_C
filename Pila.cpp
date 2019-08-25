#include "Nodo.cpp"

class Pila{
private:
    Nodo *ultimo;
    
public:
    
    void agregarALaPila(string palabra){
        Nodo *nuevo;
        nuevo = new Nodo();
        nuevo->agregarAlNodo(palabra,ultimo);
        ultimo=nuevo;
    }
    
    string sacarDeLaPila(void){
        string palabra;
        if(!ultimo){
            return "null";
        }
        palabra=ultimo->mostarPalabra();
        ultimo=ultimo->mostarSiguiente();
        return palabra;
    }
    
};