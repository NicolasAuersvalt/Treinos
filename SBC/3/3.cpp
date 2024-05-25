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

  int n=0, conf =0, i, inters=0, j;

  cin >> n >> conf;
  int size = n*2;
  int bisc [size];

  for(i=0; i < n; i++){
    int left =0, right=0;
    cin >> left >> right;
    for(j=left; j<right; j++){
      bisc[j]++;
    }
  }
  
  // Acha interseção
  for(i=0; i<size; i++){
    if(bisc[i]>1){
      for(j=i; bisc[j]>1; j++){
        inters++;
      }
    }  
  }
  cout << inters + (size-inters) << endl;

  return 0;
}