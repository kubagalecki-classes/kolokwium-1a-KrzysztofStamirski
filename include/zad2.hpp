#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne

class Penne : public Makaron {
  public:
    double ileMaki(unsigned int P) const {
      return (double) P;
    }
}

// tutaj definicja metody gotujMakaron

Makaron* Makaron::gotujMakaron(const std::string& s){
  char pierwszy = s.at(0);
  char ostatni = s.at(s.length()-1);
  if (pierwszy == ostatni) {
    return new Tagliatelle(3.14, 0.42, 0.1);
  } 
  else {
    return new Penne();
  }
}