#include <iostream>

using std::cout;
using std::endl;
using std::cin;

float **matriz;
float relleno(float **matriz, int filas, int columnas);

int main(){
    int numero;
    cout<< "Escriba un numero del 3 al 11" << endl;
    cin >> numero;
    cout<<"2";
    if(numero<3 || numero>11){
        cout<<"ingreso el numero incorrecto"<< endl;
        cout<< "Escriba un numero del 3 al 11" << endl;
        cin >> numero;
    }
    
    matriz = new float*[numero+2];
    relleno(matriz,numero+2,numero);
    return 0;
}

float relleno(float **matriz, int filas, int columnas){
    for(int i = 0; i<filas; i++){
        cout<<"1";
        for(int j = 0; j<columnas; j++){
            matriz[i][j] = i+j;
            cout<<matriz[i][j]<<endl;
        }
    }
    return 0;
}





