#include <iostream>
#include <string>
using namespace std;

int main()
{
  int q,l;
  
    cout << "Entre la Cantidad de filas y columnas: ";
    cin >> q;
  
  while (0>=q){
    cout << "\nError, solo numeros naturales";
    cout << "\nEntre la Cantidad de filas y columnas: ";
    cin >> q;
  }
  
  cout << "Escoja el Caracter:\n1.#\n2.*\n3.+\n ";
  cin >> l;
  switch(l){
  
  case 1:
   for (int i = 0; i < q; i++){
    for (int j = 0; j< q; j++){
       cout << '#';
        }
        cout << endl;
      }
      break;
  case 2:
    for (int i =0; i< q; i++){
      for(int j =0;j<q; j++){
        cout << "*";
      }
      cout << endl;
    }
    break;
   case 3:
    for (int i =0; i< q; i++){
      for(int j =0;j<q; j++){
        cout << "+";
      }
      cout << endl;
    }
    break;
  default:
    cout << "Opcion errorea";
  }
}