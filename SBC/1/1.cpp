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
  int a, b, c;
  cin >> a >> b >> c;

  if(a+b+c==3)
    cout << "3\n";
  if(a+b+c==5)
    cout << "1\n";
  if(a+b+c==4)
      cout<<"2\n";

  return 0;
}