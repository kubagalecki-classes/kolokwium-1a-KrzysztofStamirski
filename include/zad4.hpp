#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle>& t){
  int wielkosc = t.size();
  double M = 0;
  for(Tagliatelle j : t) {
    M += j.ileMaki(wielkosc);
    wielkosc--;
  }
  if ( M > 100 ) {
    throw 100;
  } else if ( M > 50 && M <= 100 ){
    throw 55.5;
  } else {
    return M;
  }
}