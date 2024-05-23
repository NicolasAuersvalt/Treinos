#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int res, cx=0;
  for(int i=0; i<3; i++)
    if(s[i]=='X')
      cx++;

  if(cx!=2)
    res=0;
    
  else if(s[1]=='O')
    res=1;

  else
    res=2;

  if(res==0)
    cout<<"?\n";
  else if(res==1)
    cout<<"*\n";
  else if(res==2)
    cout<<"Alice\n";

  return 0;
}