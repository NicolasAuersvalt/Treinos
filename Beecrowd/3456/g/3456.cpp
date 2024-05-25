#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x, ant;
    cin >> x;
    ant = x-1;
    
    while(x!=ant) {
        cout << x << "\n";
        
        ant = x;
        x = 3*(x/10) + (x%10);
    }

    return 0;
}