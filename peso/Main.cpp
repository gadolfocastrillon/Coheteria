#include <iostream>
#include "peso.h"

using namespace std; 

int main()
{
  
  peso a(5e3,9e3,1,0.2,0.5,0.1);
  a.procedimiento(); //crear un archivo de texto con los valores expresados anteriormente
  double wradio,wphi;
  wradio,wphi=a.setValores(5e3,0.2); //ingresa valores de radio y longitud (phi)
  
  cout<<"El peso en el radio es: "<<wradio<<endl;
  cout<<"El peso en la longitud es: "<<wphi<<endl;



}
