#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	for(int k=0; k<t; k++) {
		int probs[26];
		for(int i=0; i<26; i++)
			probs[i] = 0;
		
		int n;
		cin >> n;
		string s;
		cin >> s;
		int cont=0;
		
		for(int i=0; i<n; i++) {
			probs[s[i]-'A']++;

			if(probs[s[i]-'A']==1)
				cont+=2;
			else
				cont++;
		}

		cout << cont << endl;
	}

	return	0;
}