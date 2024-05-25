 #include<bits/stdc++.h>
// #include<iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
// #include <stack>
// #include <list>
// #include <queue>

using namespace std;

vector<long long> SieveOfEratosthenes(long long n) {
  vector<long long> prime(n+1, 1);
  long long p = 2;
  while(p*p <= n) {
    if(prime[p])
      for(long long i=p*p; i<n+1; i+=p)
        prime[i] = 0;
    p++;
  }
  return prime;
}
/*
int primo(int n) {
  if(n<=1)
    return 0;
  if(n<=3)
    return 1;
  if(n%2==0 || n%3==0)
    return 0;
  int i = 5;
  while(i*i <= n) {
    if(n%i==0 || n%(i+2)==0)
        return 0;
    i+=6;
  }
  return 1;
}*/

void xey(int n, int *xeymin, vector<long long> sieve) {
  int difmin = n;

  for(int x=1; x<n/2 + 1; x++) {
    auto i = (sieve.begin()+x);
    if(*i==0) {
      int y = n - x;
      auto j = (sieve.begin()+y);
      if(*j==0) {
          int dif = abs(x - y);
          if(dif < difmin) {
            difmin = dif;
            xeymin[0] = x;
            xeymin[1] = y;
          }
      }
    }
  }
}

int main() {
  vector<long long> sieve = SieveOfEratosthenes(100000+2);
  int N;
  cin >> N;

  vector<int> lin;

  for(int i=0; i<N; i++) {
    int n;
    cin >> n;
    lin.push_back(n);
  }

  for(auto i=lin.begin(); i!= lin.end(); i++) {
    int res[2] = {-1, -1};
    xey(*i, res, sieve);
    if(res[0]==-1 && res[1]==-1)
      cout << "-1\n";
    else
      cout << res[0] << " " << res[1] << "\n";
  }
  
  return 0;
}