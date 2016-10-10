//
// Created by aykut on 10.10.16.
//
#include <iostream>
#include <iomanip>

using namespace std;
#define N_MAX 20

unsigned long long fac(unsigned int n);

int main() {
    //unsigned int n;

    cout << fixed << setprecision(0);

    cout << setw(10) << "n" << setw(30) << "Fakultaet von n" << endl << "\n";

    for (n = 1; n <= N_MAX ; ++n){
        cout << setw(10) << n << setw(30) << fac(n) << endl;
    }

    cout << "\nWeiter mit" << "<Return>";
    std::cin.get();

    return 0;
}

unsigned long long fac(unsigned int n) {
    unsigned long long ergebnis = 1;
    for (unsigned int i = 2; i <= n; ++i) {
        ergebnis *= i;
    }
    return ergebnis;
}
