#include <bits/stdc++.h>
using namespace std;
#define debug(args...) printf(args)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	cin.ignore();
	for(int k=0; k<n; k++) {
		string nome;
		getline(cin, nome);

		int media;

		string s;
		getline(cin, s);

		

		cout << nome << ": " << media << "\n";
	}

	return 0;
}
