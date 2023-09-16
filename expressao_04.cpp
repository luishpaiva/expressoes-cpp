#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int a, b, c;

    cout << "Informe o valor de a: ";
    cin  >> a;

    cout << "Informe o valor de b: ";
    cin  >> b;

    cout << "Informe o valor de c: ";
    cin  >> c;

    cout << "\nValor inicial de a: " << a << endl;
    cout << "Valor inicial de b: " << b << endl;
    cout << "Valor inicial de c: " << c << endl;

    a = a + b;
    b = b + c;
    c = (c + a) - b;
    b = (b + c) - a;
    a = (a - c);

    cout << "\nValor final de a: " << a << endl;
    cout << "Valor final de b: " << b << endl;
    cout << "Valor final de c: " << c << endl;

    return 0;
}
