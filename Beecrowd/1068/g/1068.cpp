#include <bits/stdc++.h>
using namespace std; 

int main() {
  string s;
  
  while(cin >> s) {
    int sum=0, c=1;
    
    for(int i=0; i<s.size(); i++) {
      if(s[i]=='(')
        sum++;
      else if(s[i]==')')
        sum--;

      if(sum<0) {
        c=0;
        break;
      }
    }

    if(sum!=0)
      c=0;
    
    if(c)
      cout<<"correct\n";
    else
      cout<<"incorrect\n";
  }
  
  return 0;
}