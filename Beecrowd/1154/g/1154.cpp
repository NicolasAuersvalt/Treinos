#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, soma=0, i=0;
	while(scanf("%d", &n) != EOF) {
		soma += n;
		i++;
	}

	double media = soma*1.0/i;

	printf("%f\n", media);

	return 0;
}
