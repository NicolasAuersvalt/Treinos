#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L, D;
  cin >> N >> L >> D;

  int total = N * D;
  int producao = 1000 * L;
  
  int i=0;
  while(total>0) {
    total -= producao;
    i++;
  }

  cout << i*L << endl;

  return 0;
}