#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float altura, peso_ideal;
    char sexo;

    cout << "Informe a sua altura (m): ";
    cin  >> altura;

    cout << "Informe o seu sexo:\n";
    cout << "1. Mulher\n2. Homem\n: ";
    cin  >> sexo;

    if (sexo == 'M')
    {
        peso_ideal = (62.1 * altura) - 44.7;
    }
    else
    {
        peso_ideal = (72.7 * altura) - 58;
    }

    cout << "\nO seu peso ideal é " << peso_ideal << "." << endl;

    return 0;
}
