#include <iostream>
#include <limits>
using namespace std;

// Funciones sugeridas

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int factorial(int n) {
    if (n < 0) return -1; // Factorial no definido para negativos
    int resultado = 1;
    for (int i = 2; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int contarDigitos(int n) {
    if (n == 0) return 1;
    int contador = 0;
    if (n < 0) n = -n;
    while (n != 0) {
        n /= 10;
        ++contador;
    }
    return contador;
}

int sumarDigitos(int n) {
    if (n < 0) n = -n;
    int suma = 0;
    while (n != 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    int opcion, numero;

    cout << "Utilidades Numéricas" << endl;

    while (true) {
        cout << "\nSelecciona una opción:" << endl;
        cout << "1. Verificar si un número es primo" << endl;
        cout << "2. Calcular el factorial de un número" << endl;
        cout << "3. Contar cuántos dígitos tiene un número" << endl;
        cout << "4. Sumar los dígitos de un número" << endl;
        cout << "5. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no válida. Intenta de nuevo." << endl;
            continue;
        }

        if (opcion == 5) {
            cout << "Saliendo del programa. ¡Hasta la próxima!" << endl;
            break;
        }

        cout << "Ingresa el número: ";
        cin >> numero;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no válida. Intenta de nuevo." << endl;
            continue;
        }

        switch (opcion) {
            case 1:
                if (esPrimo(numero))
                    cout << numero << " es primo " << endl;
                else
                    cout << numero << " no es primo " << endl;
                break;
            case 2:
                if (numero < 0)
                    cout << "El factorial no está definido para números negativos." << endl;
                else
                    cout << "Factorial de " << numero << " = " << factorial(numero) << endl;
                break;
            case 3:
                cout << "El número tiene " << contarDigitos(numero) << " dígito(s)." << endl;
                break;
            case 4:
                cout << "La suma de los dígitos es: " << sumarDigitos(numero) << endl;
                break;
            default:
                cout << "Opción no válida. Intenta de nuevo." << endl;
                break;
        }
    }

    return 0;
}
