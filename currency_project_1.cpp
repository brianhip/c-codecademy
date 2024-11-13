#include <iostream>

using namespace std;

int main() {
    int pesos, reais, soles;


    cout << "Enter the number of Colombian Pesos: ";
    cin >> pesos;

    cout << "Enter the number of Brazilian Reais: ";
    cin >> reais;

    cout << "Enter the number of Peruvian Soles: ";
    cin >> soles;

    // Peso to USD: pesos * 0.00023 = 1 USD
    // Reais to USD: pesos * 0.17 = 1 USD
    // Soles to USD: pesos * 0.26 = 1 USD
    int dollars = (0.00023 * pesos) + (0.17  * reais) + (0.26 * soles);

    cout << "US Dollars = $" << dollars;
    return 0;
}