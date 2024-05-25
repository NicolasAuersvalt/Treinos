#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int k=0; k<n; k++) {
        string s;
        cin >> s;

        stack<char> stack;

        int cont = 0;

        for(int i=0; i<s.size(); i++) {
            if(s[i]=='<')
                stack.push(s[i]);

            else if(s[i]=='>' && !stack.empty()) {
                stack.pop();
                cont++;
            }
        }        
        cout << cont << '\n';
    }

    return 0;
}