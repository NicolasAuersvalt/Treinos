#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    string letra;
    cin >> a >> b >> c >> letra;

    if(letra == "A")
        cout << ceil(a + 3*b/2 + 5*c/2) << "\n";
    else if(letra == "B")
        cout << ceil(2*a/3 + b + 5*c/3) << "\n";
    else if(letra == "C")
        cout << ceil(2*a/5 + 3*b/5 + c) << "\n";

    return 0;
}