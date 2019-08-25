#include "Teclado.cpp"

class ProcesadorDePalabras{
private:
    Teclado *teclado;
    
public:
    
    void procesarPalabras(void){
        teclado = new Teclado();
        Pila *palabras;
        palabras=teclado->introducirPalabras();
        int contador=0,
            longitud;
        char primero,
             ultimo;
        string palabra=palabras->sacarDeLaPila();
        while(palabra.compare("null")!=0){
            longitud=palabra.size();
            primero=palabra[0];
            ultimo=palabra[longitud-1];
            if(primero==ultimo){
                cout<<"Primer y ultimo caracter iguales: "<<palabra<<endl;
                contador++;
            }
            palabra=palabras->sacarDeLaPila();
        }
        if(contador==0){
            cout<<"Ninguna palabra con primer y ultimo caracteres iguales"<<
                    endl;
        }
    }
    
};