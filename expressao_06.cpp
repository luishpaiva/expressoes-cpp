#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float preco;
    int quantidade;

    cout << "Informe o preço unitário da mercadoria: R$ ";
    cin  >> preco;

    cout << "Informe a quantidade: ";
    cin  >> quantidade;

    cout << "O preço total da mercadoria é R$ " << preco * quantidade << "." << endl;

    return 0;
}
