#include <bits/stdc++.h>
using namespace std;

int main() {

    int numero;
    cin >> numero;

    if (numero == 0) {
        cout << "1.0000000000" << endl;
    }
    else if (numero == 1) {
        cout << "1.5000000000" << endl;
    }

    else {

        double k= 0.5000000000;
        double soma;
        for (int c=2 ; c<=numero ; c++ ) {
            if (c == 2) {
                k = 2.0 + (1.00/2.00);
                k = 1.0 / k;
            }
            else {
                k = 2.0 + k;
                k = 1.0 / k;

            }

        }

        soma = 1 + k;

        printf("%.10f\n",soma);

    }

}