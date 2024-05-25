#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int k=0; k<n; k++) {
        int o;
        string s;
        cin >> o >> s;

        if(s[0]=='1') {
            if(o>45)
                cout << "45+" << o-45 << "\n";
            else
                cout << o << "\n";
        }
        else {
            if(o>45)
                cout << "90+" << o-45 << "\n";
            else
                cout << o+45 << "\n";
        }
    }

    return 0;
}