#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int opcao;
    float temperatura;

    cout << "Escolha a conversão" << endl;
    cout << "1. Celsius para Fahrenheit" << endl;
    cout << "2. Fahrenheit para Celsius" << endl;
    cout << ": ";
    cin  >> opcao;

    switch (opcao)
    {
    case 1:
        cout << "Informe a temperatura em graus Celsius: ";
        cin  >> temperatura;
        cout << "A temperatura informada em Fahrenheit é " << (9 * temperatura + 160) / 5 << "." << endl;
        break;
    case 2:
        cout << "Informe a temperatura em graus Fahrenheit: ";
        cin  >> temperatura;
        cout << "A temperatura informada em Celsius é " << (5 * temperatura - 160) / 9 << "." << endl;
        break;
    default:
        break;
    }

    return 0;
}
