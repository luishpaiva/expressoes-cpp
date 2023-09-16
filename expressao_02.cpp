#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float mensalidade, reajuste;
    int curso, atraso;

    cout << "Informe o valor da mensalidade atual (R$): ";
    cin  >> mensalidade;

    cout << "Houve atraso? (1. Sim / 2. Não): ";
    cin  >> atraso;

    cout << "Informe o seu curso" << endl;
    cout << "1. Sistemas de Informação" << endl;
    cout << "2. Direito" << endl;
    cout << "3. Farmácia" << endl;
    cout << "4. Odontologia" << endl;
    cout << ": ";
    cin  >> curso;

    switch (curso)
    {
    case 1:
        reajuste = 0.1  * mensalidade;
        break;
    case 2:
        reajuste = 0.15 * mensalidade;
        break;
    case 3:
        reajuste = 0.2  * mensalidade;
        break;
    case 4:
        reajuste = 0.25 * mensalidade;
        break;
    default:
        break;
    }
    
    mensalidade += reajuste;

    cout << "\nValor do reajuste: R$ " << reajuste << endl;
    cout << "Valor da mensalidade reajustada: " << mensalidade << endl;
    
    if (atraso == 1)
    {
        mensalidade *= 1.1;
        cout << "Valor da mensalidade com multa: R$ " << mensalidade << endl;
    }
    else
    {
        cout << "Não houve atraso.";
    }

    return 0;
}
