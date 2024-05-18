#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n=0, soma=0, i=0;
	while(n >= 0) {
		soma += n;
		cin >> n;
		i++;
	}

	float media = 1.0*soma / (i-1);

	printf("%.2f\n", media);

	return 0;
}
