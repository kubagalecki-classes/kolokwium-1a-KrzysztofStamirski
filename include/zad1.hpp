#include "catch.hpp"
#include "iostream"
#include "vector"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle{
  double L;
  double W;
  double R;
  static const double C;
  public:
    Tagliatelle(double l,double w,double r): L(l), W(w), R(r){}

    Tagliatelle(){
    L=0.5;
    W=0.5;
    R=0.5;
    }
    double ileMaki(unsigned int P) const{
      return P * L * W * (1.0 - R) * C;
    }

};