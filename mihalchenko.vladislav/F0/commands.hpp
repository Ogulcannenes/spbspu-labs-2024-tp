#ifndef COMMANDS_HPP
#define COMMANDS_HPP

#include <iomanip>
#include "helpFunctions.hpp"

namespace mihalchenko
{
  void help(std::ostream &out);
  void open(mapOfDicts_t &mapOfDictionaries, std::istream &is);
  void save(mapOfDicts_t &mapOfDictionaries, std::istream &is, std::ostream &out);
  void size(mapOfDicts_t &mapOfDictionaries, std::istream &is, std::ostream &out);
  void view(mapOfDicts_t &mapOfDictionaries, std::istream &is, std::ostream &out);
  void find(mapOfDicts_t &mapOfDictionaries, std::istream &is, std::ostream &out);
}

#endif
