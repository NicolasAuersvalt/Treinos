#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  int *par = new int[t];
  int *impar = new int[t];

  int j=0, k=0;
  for(int i=0; i<t; i++) {
    int p;
    cin >> p;

    if(p & 1) {
      impar[j] = p;
      j++;
    }
    else {
      par[k] = p;
      k++;
    }
  }

  sort(par, par+k);
  sort(impar, impar+j, greater<int>());

  for(int i=0; i<k; i++)
    cout<<par[i]<<endl;
  for(int i=0; i<j; i++)
    cout<<impar[i]<<endl;

  return 0;
}
