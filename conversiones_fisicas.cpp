// 📌 conversiones_fisicas.cpp
#include <iostream>
#include <limits>
using namespace std;

// Funciones 
float celsiusAFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32;
}

float fahrenheitACelsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}

float metrosAPies(float m) {
    return m * 3.28084;
}

float kilogramosALibras(float kg) {
    return kg * 2.20462;
}

int main() {
    int opcion;
    float valor;

    cout << "Calculadora de Conversiones de Unidades Físicas" << endl;

    while (true) {
        // Mostrar menú
        cout << "\nSelecciona una opción:" << endl;
        cout << "1. Celsius a Fahrenheit" << endl;
        cout << "2. Fahrenheit a Celsius" << endl;
        cout << "3. Metros a Pies" << endl;
        cout << "4. Kilogramos a Libras" << endl;
        cout << "5. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        // Validar entrada
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no válida. Intenta de nuevo." << endl;
            continue;
        }

        if (opcion == 5) {
            cout << "Saliendo del programa." << endl;
            break;
        }

        // Pedir valor a convertir
        cout << "Ingresa el valor a convertir: ";
        cin >> valor;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no válida. Intenta de nuevo." << endl;
            continue;
        }

        // Procesar opción
        switch (opcion) {
            case 1:
                cout << valor << " °C = " << celsiusAFahrenheit(valor) << " °F" << endl;
                break;
            case 2:
                cout << valor << " °F = " << fahrenheitACelsius(valor) << " °C" << endl;
                break;
            case 3:
                cout << valor << " metros = " << metrosAPies(valor) << " pies" << endl;
                break;
            case 4:
                cout << valor << " kg = " << kilogramosALibras(valor) << " libras" << endl;
                break;
            default:
                cout << "Opción no válida. Intenta de nuevo." << endl;
                break;
        }
    }

    return 0;
}
