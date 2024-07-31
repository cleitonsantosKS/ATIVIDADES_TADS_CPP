#include <iostream>
#include <iomanip> // Para std::setprecision

using namespace std;

int main() {
    double salario, cheque1, cheque2, cpmf;
    
    // O percentual da CPMF
    cpmf = 0.0038; // 0.38%

    // Entrada do salário
    cout << "Digite o valor do salário depositado: ";
    cin >> salario;

    // Entrada dos valores dos cheques
    cout << "Digite o valor do primeiro cheque: ";
    cin >> cheque1;

    cout << "Digite o valor do segundo cheque: ";
    cin >> cheque2;

    // Cálculo do total de cheques e do imposto
    double totalCheques = cheque1 + cheque2;
    double impostoCheque1 = cheque1 * cpmf;
    double impostoCheque2 = cheque2 * cpmf;

    // Cálculo do saldo atual
    double saldoAtual = salario - (totalCheques + impostoCheque1 + impostoCheque2);

    // Saída do saldo atual
    cout << fixed << setprecision(2); // Formatar duas casas decimais
    cout << "Saldo atual após as retiradas e impostos: R$ " << saldoAtual << endl;

    return 0;
}
