#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long E, V;
    cin >> E >> V;

    long long minutos = E * 60 / V;

    long long hora_final = 19 + minutos/60;
    long long minuto_final = minutos % 60;

    //trava de segurança
    while(minuto_final >= 60) {
        hora_final += 1;
        minuto_final -= 60;
    }

    hora_final = hora_final % 24;

    cout << setfill('0') << setw(2) << hora_final << ":" << setw(2) << minuto_final << "\n";

    return 0;
}