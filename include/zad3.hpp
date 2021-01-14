#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
template <typename S>
std::size_t polejSosem(const Tagliatelle& t, S s){
  return s.polej(t);
}