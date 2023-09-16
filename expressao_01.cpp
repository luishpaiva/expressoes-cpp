#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float tempo, velocidade_media, distancia, litros;

    cout << "Informe o tempo gasto na viagem (horas): ";
    cin  >> tempo;

    cout << "Informe a velocidade média durante a viagem (km/h): ";
    cin  >> velocidade_media;

    distancia = tempo * velocidade_media;

    litros = distancia / 12;

    cout << "\nVelocidade média: " << velocidade_media << " km/h." << endl;
    cout << "Tempo gasto na viagem: " << tempo << " horas." << endl;
    cout << "Distância percorrida: " << distancia << " km(s)." << endl;
    cout << "Quantidade de combustível: " << litros << " litros." << endl;

    return 0;
}
