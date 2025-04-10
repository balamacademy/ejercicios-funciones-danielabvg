#include <iostream>
#include <limits>
using namespace std;

// Funciones sugeridas
float bitsABytes(float bits) {
    return bits / 8.0;
}

float kilobytesABytes(float kb) {
    return kb * 1024.0;
}

float megabytesAKilobytes(float mb) {
    return mb * 1024.0;
}

float gigabytesAMegabytes(float gb) {
    return gb * 1024.0;
}

int main() {
    int opcion;
    float valor;

    cout << "Calculadora de Unidades Informáticas" << endl;

    while (true) {
        // Menú de opciones
        cout << "\nSelecciona una opción:" << endl;
        cout << "1. Bits a Bytes" << endl;
        cout << "2. Kilobytes a Bytes" << endl;
        cout << "3. Megabytes a Kilobytes" << endl;
        cout << "4. Gigabytes a Megabytes" << endl;
        cout << "5. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        // Validación de entrada
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no válida. Intenta de nuevo." << endl;
            continue;
        }

        if (opcion == 5) {
            cout << "Saliendo del programa. ¡Hasta luego!" << endl;
            break;
        }

        cout << "Ingresa el valor a convertir: ";
        cin >> valor;

        if (cin.fail() || valor < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no válida. Intenta de nuevo." << endl;
            continue;
        }

        // Procesar opción
        switch (opcion) {
            case 1:
                cout << valor << " bits = " << bitsABytes(valor) << " bytes" << endl;
                break;
            case 2:
                cout << valor << " KB = " << kilobytesABytes(valor) << " bytes" << endl;
                break;
            case 3:
                cout << valor << " MB = " << megabytesAKilobytes(valor) << " KB" << endl;
                break;
            case 4:
                cout << valor << " GB = " << gigabytesAMegabytes(valor) << " MB" << endl;
                break;
            default:
                cout << "Opción no válida. Intenta de nuevo." << endl;
                break;
        }
    }

    return 0;
}
