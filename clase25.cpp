#include <iostream>

using std::cout;
using std::endl;
using std::cin;

float** relleno(float **, int, int);
int imprimeCabezas(float**, int, int);

int main(){
    float ** matriz;
    int numero;

    cout<< "Escriba un numero del 3 al 11\n";
    cin >> numero;
    
    while(numero<3 || numero>11){
        cout<<"ingreso el numero incorrecto\n";
        cout<< "Escriba un numero del 3 al 11\n";
        cin >> numero;
    }

    matriz = new float*[numero+2];

    relleno(matriz,numero+2,numero);

    imprimeCabezas(matriz,numero+2,numero);

    delete matriz;

    return 0;
}

float** relleno(float** m, int filas, int columnas){
    cout << endl;
    for(int i = 0; i<filas; i++){
        m[i] = new float [columnas];
        for(int j = 0; j<columnas; j++){
            m[i][j] = i+j;
            cout<<m[i][j]<<"\t";
        }
        cout << endl;
    }
    cout << endl;
    return m;
}

int imprimeCabezas(float** m,int filas, int columnas){
    int suma=0;
    cout<< "La primera fila es: ";
    for(int i=0;i<filas;i++){
        cout << *m[i] << " ";
    }
    cout << endl;
    for(int i=0; i<columnas;i++){
        suma += m[0][i];
    }
    cout << "La suma de los primeros elementos de cada columna es: " << suma << endl;
    return 0;
}





