#include <iostream>
#include <limits>
using namespace std;

// Convierte decimal a binario usando recursión
void decimalABinario(int n) {
    if (n < 2) {
        cout << n;
    } else {
        decimalABinario(n / 2);
        cout << n % 2;
    }
}

// Convierte decimal a octal usando recursión
void decimalAOctal(int n) {
    if (n < 8) {
        cout << n;
    } else {
        decimalAOctal(n / 8);
        cout << n % 8;
    }
}

// Convierte decimal a hexadecimal usando recursión
void decimalAHexadecimal(int n) {
    if (n < 16) {
        if (n < 10)
            cout << n;
        else
            cout << static_cast<char>('A' + (n - 10));
    } else {
        decimalAHexadecimal(n / 16);
        int resto = n % 16;
        if (resto < 10)
            cout << resto;
        else
            cout << static_cast<char>('A' + (resto - 10));
    }
}

int main() {
    int opcion, numero;

    cout << "Conversión de Bases Numéricas" << endl;

    while (true) {
        // Mostrar menú
        cout << "\nSelecciona una opción:" << endl;
        cout << "1. Decimal a Binario" << endl;
        cout << "2. Decimal a Octal" << endl;
        cout << "3. Decimal a Hexadecimal" << endl;
        cout << "4. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        // Validar entrada
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no válida. Intenta de nuevo." << endl;
            continue;
        }

        if (opcion == 4) {
            cout << "Saliendo del programa. ¡Hasta pronto!" << endl;
            break;
        }

        cout << "Ingresa un número decimal positivo: ";
        cin >> numero;

        if (cin.fail() || numero < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no válida. Intenta con un número positivo." << endl;
            continue;
        }

        cout << "Resultado: ";
        switch (opcion) {
            case 1:
                decimalABinario(numero);
                cout << " (Binario)" << endl;
                break;
            case 2:
                decimalAOctal(numero);
                cout << " (Octal)" << endl;
                break;
            case 3:
                decimalAHexadecimal(numero);
                cout << " (Hexadecimal)" << endl;
                break;
            default:
                cout << "Opción no válida. Intenta de nuevo." << endl;
                break;
        }
    }

    return 0;
}
