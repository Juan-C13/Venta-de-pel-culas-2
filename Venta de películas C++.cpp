#include <iostream>
using namespace std;

int main()
{
    int cantidad_de_peliculas;

    cout << "Bienvenid@, ¿Cuántas peliculas desea comprar?: ";
    cin >> cantidad_de_peliculas;

    int total_a_pagar = cantidad_de_peliculas * 65000;
    double Iva = total_a_pagar * 0.16;
    double ganancia_neta = total_a_pagar - Iva;

    cout << "\nDATOS DE LA VENTA" << endl;
    cout << "\nTotal a pagar: " << total_a_pagar << endl;
    cout << "\nIVA: " << Iva << endl;
    cout << "\nGanancia neta: " << ganancia_neta << endl;

    return 0;
}