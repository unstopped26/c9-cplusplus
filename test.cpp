#include <iostream>
using namespace std;


void esomismo(int count,char car){
  
  for(int i=0; i<count;i++)
  cout <<car;
  
}

main(){

int number;
char var;
cout << "Que Caracter quiere";
cin >> var;

cout << "cuantas veces lo quiere";
cin >> number;

esomismo(number,var);
}

