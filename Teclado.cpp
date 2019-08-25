#include "Pila.cpp"

class Teclado{
private:
    Pila *palabras;
    
public:
    
    Pila *introducirPalabras(){
        palabras = new Pila();
        string cadena="";
        cout<<"Ingrese sus palabras."<<endl;
        while(cadena.compare("hecho")!=0){
            cout<<"Su palabra."<<endl;
            cin>>cadena;
            palabras->agregarALaPila(cadena);
        }
        return palabras;
    }
    
};

