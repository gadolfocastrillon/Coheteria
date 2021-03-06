#include <iostream>
#include "peso.h"
#include <math.h>
#include <vector>
#include <fstream>

using namespace std;

peso::peso(double _rInicial,double _rFinal,double _rPaso, double _phiInicial, double _phiFinal, double _phiPaso)
{
  rInicial = _rInicial;
  rFinal = _rFinal;
  rPaso = _rPaso;
  phiInicial = _phiInicial;
  phiFinal = _phiFinal;
  phiPaso = _phiPaso;
  
}
double peso::peso_en_radio(double r,double phi)
{
  double b1,b2,b3;
  b1=G*Me*m/pow(r,2);
  b2=pow((R/r),2)*J2/2;
  b3=pow(sin(phi),2);
  return b1*(1 + b2*(1-3*b3));
}

double peso::peso_en_longitud(double r, double phi)
{
  double b1,b2;
  b1=3*G*Me*m/pow(r,2);
  b2=pow((R/r),2);
  return b1*b2*J2*sin(phi)*cos(phi);
}
void peso::procedimiento()
{
  ofstream archivo_sal;
  archivo_sal.open("Valores_Peso.txt");
  if (archivo_sal.fail())
    {
      cout<<"Es imposible abrir el archivo"<<endl;
      exit(1);
    }
  
  //cout<<peso_en_longitud(1000,0.2)<<endl;
  for(double r=rInicial;r<rFinal;r=r+rPaso)
    {
      double wr,wphi;
      wr = peso_en_radio(r,phiInicial);
      wphi = peso_en_longitud(r,phiInicial);
      archivo_sal<<r<<" "<<wr<<" "<<wphi<<endl;
    }
  archivo_sal.close();
}
double peso::setValores(double r,double phi)
{
  double wr,wphi;

  wr=peso_en_radio(r,phi);
  cout<<wr<<endl;
  wphi=peso_en_longitud(r,phi);
  return wr,wphi;
}

      
      
