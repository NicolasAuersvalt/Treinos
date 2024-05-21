#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        string s;
        cin >> s;

        int cont=0;
        for(int j=0; j<s.size(); j++) {
            if(s[j]=='0')
                cont += 6;
            else if(s[j]=='1')
                cont += 2;
            else if(s[j]=='2')
                cont+=5;
            else if(s[j]=='3')
                cont+=5;
            else if(s[j]=='4')
                cont+=4;
            else if(s[j]=='5')
                cont+=5;
            else if(s[j]=='6')
                cont+=6;
            else if(s[j]=='7')
                cont+=3;
            else if(s[j]=='8')
                cont+=7;
            else if(s[j]=='9')
                cont+=6;
        }
        cout << cont << " leds\n";
    }

    return 0;
}
