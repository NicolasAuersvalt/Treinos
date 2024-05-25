// #include<bits/stdc++.h>
 #include<iostream>
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
  int v=0;
  long e=0;
  cin >> e >> v;
  cin.ignore();

  double tempo = (1.0*e)/v;

  int horas = int(tempo);
  int minutos = int(60.0*(tempo - horas));

  int hora_final = horas + 19;
  int minuto_final = minutos;

  if(minuto_final >=0){
    hora_final += minuto_final/60;
    minuto_final = minuto_final%60;
  }
  
  if(hora_final >=24)
    hora_final %= 24;
  
  if(hora_final<10)
    cout << "0";
  cout << hora_final << ":";
  
  if(minuto_final<10)
    cout << "0";
  cout << minuto_final << endl;

  return 0;
}