class peso
{
 private:
  double rInicial,rFinal,rPaso;
  double phiInicial, phiFinal, phiPaso;
  double const J2=0.00108263; //Armonico J2 (adimensional)
  double const G=6.63e-11; //constante de cavendish N 
  double const Me=5.67e24; //Masa de la tierra Kg
  double const R = 6378.14; //esta medido en Km
  double const m= 1; //masa del cohete 
  
 public:
  //rinicial,rfinal,pasodelr
  //phiinicial,phifinal,pasophi
  
  peso(double,double,double,double,double,double);
  double peso_en_radio(double,double);
  double peso_en_longitud(double,double);
  void procedimiento();
  double setValores(double,double);

};
