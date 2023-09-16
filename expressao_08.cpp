#include <iostream>
#include <Windows.h>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    std::cout << std::setprecision(2) << std::fixed;

    float valor_automovel;
    int qtde_meses = 50;
    const float fundo_reserva = 0.05;
    const float taxa_adm = 0.10;
    const float seguro = 0.04;
    const float multa = 0.10;

    cout << "Informe o valor do automóvel: R$ ";
    cin  >> valor_automovel;

    // valor da mensalidade (parcela mensal do automóvel livre das taxas);
    cout << "\nO valor da mesalidade, parcela mensal livre de taxas, é R$ " << valor_automovel / qtde_meses << "." << endl;
    
    // os valores das taxas (mensal);
    cout << "\nOs valores das taxas são:" << endl;
    cout << "Fundo de reserva: " << valor_automovel * fundo_reserva << "." << endl;
    cout << "Taxa de administração: " << valor_automovel * taxa_adm << "." << endl;
    cout << "Seguro: " << valor_automovel * seguro << "." << endl;
    
    // o valor da parcela (a + b);
    cout << "\nO valor da parcela mais as taxas é R$ " << (valor_automovel / qtde_meses) * (1 + fundo_reserva + taxa_adm + seguro) << "." << endl;
    
    // caso o associado atrase a parcela, será cobrado multa de 10% sobre o valor da parcela. Calcule o valor da multa e o valor da parcela com multa.
    cout << "\nO valor da multa é R$ " << valor_automovel / qtde_meses * multa << "." << endl;
    cout << "O valor da parcela, taxas mais multa é R$ " << (valor_automovel / qtde_meses) * (1 + fundo_reserva + taxa_adm + seguro + multa) << "." << endl;

    return 0;
}
