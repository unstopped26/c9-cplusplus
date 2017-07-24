/* Haga un programa para calcular el monto a pagar por el prestamo de un vehiculo.
Asume interes sencillo
el programa debe preguntar valor del carro, interes y cantidad de a~os a pagar. 
Debe imprimir la cantidad mensual a pagar y cuantos meses.
El codigo entregado puede contener errores. 
Entregar una corrida manual en papel del programa.

  pagos = interes*(1+interes)^months/((1+interes)^months-1)*valor
    Visualizacion
*******************************************
* Cantidad Mensual                  Meses *
*    $??                              ??  *
*******************************************
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double valor, interes,rate, pagos;
  int years, months; 
  
  cout << "Cuanto cuesta el carro?\n";
  cout << "\t"; cin >> valor;
  cout << "Cual es el Interes del carro\n"; 
  cout << "\t"; cin >>rate;
  cout << "A cuantos años es el prestamo\n";
  cout << "\t"; cin >> years;
  
  months = years * 12;
  interes = rate/(12.0*100);
  //pagos = (interes*(pow(1+interes,months)))/(pow(1+interes,months)-1)*valor;
  pagos = valor *(1 +interes*months)/months;
  cout << setprecision(2) << fixed;
  cout << "*******************************************" << endl;
  cout << "* Cantidad Mensual                  Meses *" << endl;
  cout << "*"<< setw(12)<< pagos << setw(26) << months << "   *"<< endl;
  cout << "*******************************************" << endl;
  
  
  return 0;
}