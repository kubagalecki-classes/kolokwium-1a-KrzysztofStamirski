#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(std::vector<Tagliatelle> t){
  Tagliatelle pierwszy = t.front();
  Tagliatelle przedostatni = t.at(t.size()-2);
  Tagliatelle trzeciOdKonca = t.at(t.size() - 3);
  double M = pierwszy.ileMaki(1);
  M+=przedostatni.ileMaki(2);
  M+=trzeciOdKonca.ileMaki(3);
  if ( M > 100 ) {
    throw 100;
  } else if ( M > 50 && M <= 100 ){
    throw 55.5;
  } else {
    return M;
  }
}