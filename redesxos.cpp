#include <iostream>
using namespace std;

// Projeto 01 - Radar de Dispositivos da Rede
// Turma: 1I
// Integrantes: Andrey Arkhipov Santana Vilela e Miguel Andrade Vital Amaral Lara

int main() {
    int estado[10];
    int n;
    int ativos = 0;
    int inativos = 0;
    int i;
    double percentual;

    cout << "RADAR DE DISPOSITIVOS DA REDE" << endl;
    cout << "Digite a quantidade de dispositivos (1 a 10): ";
    cin >> n;

    while (n < 1 || n > 10) {
        cout << "Quantidade invalida. Digite de 1 a 10: ";
        cin >> n;
    }

    for (i = 0; i < n; i++) {
        cout << "Dispositivo " << i + 1;
        cout << " (1 = ativo, 0 = inativo): ";
        cin >> estado[i];

        while (estado[i] != 0 && estado[i] != 1) {
            cout << "Valor invalido. Digite 0 ou 1: ";
            cin >> estado[i];
        }
    }

    for (i = 0; i < n; i++) {
        if (estado[i] == 1) {
            ativos = ativos + 1;
        } else {
            inativos = inativos + 1;
        }
    }

    percentual = (ativos * 100.0) / n;

    cout << endl;
    cout << "PAINEL FINAL" << endl;

    for (i = 0; i < n; i++) {
        cout << "Dispositivo " << i + 1 << ": ";

        if (estado[i] == 1) {
            cout << "ATIVO" << endl;
        } else {
            cout << "INATIVO" << endl;
        }
    }

    cout << "Total de ativos: " << ativos << endl;
    cout << "Total de inativos: " << inativos << endl;
    cout << "Disponibilidade: " << percentual << "%" << endl;

    if (inativos >= 2) {
        cout << "ALERTA: 2 ou mais dispositivos inativos!" << endl;
    } else {
        cout << "Sem alerta." << endl;
    }

    return 0;
}
