#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");  // Correção aqui: LC__ALL -> LC_ALL
    // Letra (a) Σ(2n) de n=1 até 100
    int soma_a = 0;
    for (int n = 1; n <= 100; n++) {
        soma_a += 2 * n;
    }
    cout << "Soma (a): " << soma_a << endl;

    // Letra (b) Σ(n / (n + 1)) de n=1 até 50
    double soma_b = 0.0;
    for (int n = 1; n <= 50; n++) {
        soma_b += (double)n / (n + 1);
    }
    cout << "Soma (b): " << soma_b << endl;

    // Letra (c) Σ(n²) de n=1 até 30
    int soma_c = 0;
    for (int n = 1; n <= 30; n++) {
        soma_c += n * n;
    }
    cout << "Soma (c): " << soma_c << endl;

    // Letra (d) Σ(2^n) de n=1 até 20
    long long soma_d = 0;
    for (int n = 1; n <= 20; n++) {
        soma_d += pow(2, n);
    }
    cout << "Soma (d): " << soma_d << endl;

    // Letra (e) Σ(3^n) de n=1 até 10
    long long soma_e = 0;
    for (int n = 1; n <= 10; n++) {
        soma_e += pow(3, n);
    }
    cout << "Soma (e): " << soma_e << endl;

    // Letra (f) Σ(1/i) de i=1 até n (n escolhido pelo usuário)
    int n;
    cout << "Digite o valor de n para a soma (f): ";
    cin >> n;

    double soma_f = 0.0;
    for (int i = 1; i <= n; i++) {
        soma_f += 1.0 / i;
    }
    cout << "Soma (f) para n=" << n << ": " << soma_f << endl;

    return 0;
}
