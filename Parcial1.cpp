#include "iostream"
#include "stdlib.h"
#include "string.h"
#include "fstream"

using namespace std;
/* Programa para tablas de Multiplicar
int main(){
    int i;
    int numero;
    cout <<"Ingrese el numero de la tabla de multiplicar que desea saber";
    cin >> numero;
    for (i=numero; i<=numero*10; i=i+numero) {
        cout << i << endl;
    }


    return 0;
} */
/* Programa para desplegar tablas de multiplicar del numero 3, 7 y 9


int main(){
    int i, c, h;
    i=3;
    c=7;
    h=9;


    cout << "Tabla del 3"<< endl;
    while(i<=30){

        cout << i << endl;

        i=i+3;
    }
    cout << "Tabla del 7"<< endl;
    while(c<=70){
        cout << c << endl;

        c=c+7;
    }
    cout <<"Tabla del 9"<< endl;
    while(h<=90){
        cout << h << endl;

        h=h+9;
    }
    return 0;
    } */
/* Dias laborales y no laborales
    int main(){

        int numero;

        cout << "Ingrese un número del 1 al 7" << endl;
        cin >>numero;

        switch (numero) {
            case 1: cout <<"Es un dia laboral";
                break;
            case 2: cout <<"Es un dia laboral";
                break;
            case 3: cout <<"Es un dia laboral";
                break;
            case 4: cout <<"Es un dia laboral";
                break;
            case 5: cout <<"Es un dia laboral";
                break;
            case 6: cout <<"No es un día laboral";
                break;
            case 7: cout <<"No es un dia laboral";
            default: cout <<"El numero digitado no es del 1 al 7";
                break;
        }
        return 0;
}
*/
/* Leemos el archivo creado
void lectura();

int main(){
    lectura();

    system("pause");
    return 0;
}
void lectura() {
    ifstream archivo;
    string texto;

    archivo.open("parcial.txt", ios::in);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
    while (!archivo.eof()) {
        getline(archivo, texto);
        cout << texto << endl;
    }


}    */


void aniadir();

int main(){

    aniadir();

    system ("pause");
    return 0;
}

void aniadir(){
    ofstream archivo;
    string texto;

    archivo.open("parcial.txt", ios :: app);

    if (archivo.fail()){
        cout << "No se puede abrir el archivo";
        exit(1);
    }

    cout << "Digite el texto que quiere añadir";
    getline(cin, texto);
    archivo << texto << endl;

    archivo.close();
}