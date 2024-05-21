#include <bits/stdc++.h>
using namespace std;

int main() {
    int l;
    cin >> l;

    for(int t=0; t<l; t++) {
        string s;
        cin >> s;
        int n;
        cin >> n;

        for(int i=0; i<s.size(); i++) {
            s[i]-=n;
            if(s[i]<'A') {
                int dif = 'A'-s[i];
                s[i] = 'Z'-dif+1;
            }
            printf("%c", s[i]);
        }
        cout<<endl;
    }

    return 0;
}