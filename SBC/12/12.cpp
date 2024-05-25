 #include<bits/stdc++.h>
// #include<iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
// #include <stack>
// #include <list>
// #include <queue>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  map<string, int> umap; 
  
  string *nomes = new string[n];
  for(int i=0; i<n; i++) {
      cin >> nomes[i];
      umap[nomes[i]] = 1;
  }

  string *idades = new string[n];
  for(int i=0; i<n; i++)
      cin >> idades[i];

  int j=0;
  for(int i=0; i<n; i++) {
    if(i!=0)
      cout << " ";
    
    while(umap[idades[j]]!=1)
      j++;
    
    cout << idades[j];

    umap[nomes[i]] = 0;
  }
  
  cout << "\n";
  return 0;
}