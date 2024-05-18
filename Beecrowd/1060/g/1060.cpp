#include <bits/stdc++.h>
using namespace std;

int main() {
	int cont = 0;
	for(int i=0; i<6; i++) {
		double n;
		cin >> n;
		if(n>0)
			cont++;
	}

	printf("%d valores positivos\n", cont);

	return 0;
}
