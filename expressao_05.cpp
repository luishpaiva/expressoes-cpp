#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int opcao;

    cout << "Informe a fórmula a ser calculada" << endl;
    cout << "1. Área do triângulo" << endl;
    cout << "2. Juros simples" << endl;
    cout << "3. Primeira Lei de Ohm" << endl;
    cout << "4. Energia elétrica consumida" << endl;
    cout << "5. Área do círculo" << endl;
    cout << "6. Perímetro do círculo" << endl;
    cout << ": ";
    cin  >> opcao;
    cout << "";

    switch(opcao)
    {
        case 1:
            // a) área do triângulo
            double base, altura, area_triangulo;
            cout << "Informe o valor da base: ";
            cin  >> base;
            cout << "Informe o valor da altura: ";
            cin  >> altura;
            area_triangulo = (base * altura) / 2;
            cout << "O valor da área do triângulo é igual a " << area_triangulo << "." << endl;
            break;
        case 2:
            // b) juros simples
            float capital, taxa, tempo_aplicacao, juros;
            cout << "Informe o valor do capital: ";
            cin  >> capital;
            cout << "Informe o valor da taxa: ";
            cin  >> taxa;
            cout << "Informe a quantidade de tempo: ";
            cin  >> tempo_aplicacao;
            juros = (capital * taxa * tempo_aplicacao) / 100;
            cout << "O valor do juros simples é igual a " << juros << "." << endl;
            break;
        case 3:
            // c) primeira lei de Ohm
            float resistencia, corrente, tensao;
            cout << "Informe o valor da resistência: ";
            cin  >> resistencia;
            cout << "Informe o valor da corrente: ";
            cin  >> corrente;
            tensao = resistencia * corrente;
            cout << "O valor da tensao é igual a " << tensao << "." << endl;
            break;
        case 4:
            // d) energia elétrica consumida
            float potencia, tempo, energia;
            cout << "Informe o valor da potência: ";
            cin  >> potencia;
            cout << "Informe a quantidade de tempo: ";
            cin  >> tempo;
            energia = potencia * tempo;
            cout << "O valor da energia elétrica consumida é igual a " << energia << "." << endl;
            break;
        case 5:
            // e) área do círculo
            double raio, area_circulo;
            cout << "Informe o valor do raio: ";
            cin  >> raio;
            area_circulo = 3.1416 * (raio * raio);
            cout << "O valor da área do círculo é igual a " << area_circulo << "." << endl;
            break;
        case 6:
            // f) perímetro do círculo
            double diametro, perimetro;
            cout << "Informe o valor do diâmetro: ";
            cin  >> diametro;
            perimetro = 3.1416 * (diametro);
            cout << "O valor do perímetro do cículo é igual a " << perimetro << "." << endl;
            break;
    }
    
    return 0;
}
