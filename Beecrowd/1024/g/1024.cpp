#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string *p = new string[n];

    int i, j, k;
    //hora de criptografar
    for(i=0; i<n; i++) {
        getline(cin, p[i]);
        
        int tam = p[i].size();
        //primeira passada
        for(j=0; j<tam; j++)
            if(('a' <= p[i][j] && p[i][j] <= 'z') || ('A' <= p[i][j] && p[i][j] <= 'Z'))
                p[i][j] += 3;

        //segunda passada
        string inv = p[i];
        for(j=tam-1, k=0; j>=0; j--, k++)
            p[i][k] = inv[j];

        //terceira passada
        for(j=tam/2; j<tam; j++)
            p[i][j] -= 1;

        cout << p[i] << endl;
    }

    return 0;
}