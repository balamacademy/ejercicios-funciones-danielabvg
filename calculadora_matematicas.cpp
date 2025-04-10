#include <iostream>
#include <limits> // Para validar entradas incorrectas
using namespace std;

int main() {
    double num1, num2;
    char operacion;

    cout << "Calculadora básica" << endl;
    cout << "Puedes realizar cálculos indefinidamente hasta que elijas salir." << endl;

    while (true) {
        // Solicitar el primer número con validación
        while (true) {
            cout << "\nIngresa el primer número: ";
            cin >> num1;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Entrada no válida. Por favor, ingresa un número válido." << endl;
            } else {
                break;
            }
        }

        // Solicitar el segundo número con validación
        while (true) {
            cout << "Ingresa el segundo número: ";
            cin >> num2;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Entrada no válida. Por favor, ingresa un número válido." << endl;
            } else {
                break;
            }
        }

        // Mostrar el menú de operaciones
        cout << "\nSelecciona el tipo de operación que deseas realizar:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. División" << endl;
        cout << "5. Salir" << endl;
        cout << "Escribe el número de opción que deseas realizar: ";
        cin >> operacion;

        // Realizar la operación seleccionada
        switch (operacion) {
            case '1':
                cout << "Resultado (Suma): " << (num1 + num2) << endl;
                break;
            case '2':
                cout << "Resultado (Resta): " << (num1 - num2) << endl;
                break;
            case '3':
                cout << "Resultado (Multiplicación): " << (num1 * num2) << endl;
                break;
            case '4':
                if (num2 == 0) {
                    cout << "Error: No se puede dividir entre cero." << endl;
                } else {
                    cout << "Resultado (División): " << (num1 / num2) << endl;
                }
                break;
            case '5':
                cout << "Saliendo del programa." << endl;
                return 0;
            default:
                cout << "Opción no válida. Por favor, selecciona una opción correcta." << endl;
        }
    }

    return 0;
}
