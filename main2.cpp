#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void crearArchivos(int cantidad);
void agregarTexto();


int main() {
    int opcion;
    cout<<"Javier Alejandro Bonilla Herrera | 0909-23-14507\n";

    cout<<"1. Crear archivos\n";;
    cin>>opcion;

    switch (opcion) {
        case 1:
            int cantidad;
            cout << "Ingrese la cantidad de archivos que desea crear" << endl;
            cin >> cantidad;
            crearArchivos(cantidad);
            break;
    }
    return 0;
}

void crearArchivos(int cantidad){
    string nombreArchivo = "file";
    if (cantidad % 2 == 0){
        cout << "Cantidad de Archivos par" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:/Users/max/Desktop/par/" + nombreArchivo + to_string(i + 1) + ".txt");
            agregarTexto();
            for (int j = 0; j < i+1; ++j) {
                file << "linea de texto" << endl;
            }
            file.close();
        }
    }else{
        cout << "Cantidad de Archivos impar" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:/Users/max/Desktop/impar/" + nombreArchivo + to_string(i + 1) + ".txt");
            agregarTexto();
            for (int j = 0; j < i+1; ++j) {
                file << "linea de texto" << endl;
            }
            file.close();
        }
    }
}

void agregarTexto(){
    cout << "Agregando texto..." << endl;
}


