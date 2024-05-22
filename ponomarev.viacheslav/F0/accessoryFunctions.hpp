#ifndef ACCESSORY_FUNCTIONS_HPP
#define ACCESSORY_FUNCTIONS_HPP

#include <string>
#include <ostream>

namespace ponomarev
{
  std::string cutType(std::string & line);
  bool isNum(const std::string & str);
  void getText(std::istream & input, HuffmanCode & data);
  void cutTextInFile(long long n, long long k, HuffmanCode & data, input);

  std::ostream & printInvalidCommandMessage(std::ostream & out);
  std::ostream & printWelcomeMessage(std::ostream & out);
  std::ostream & printInvalidEncodeMessage(std::ostream & out);
  std::ostream & printSuccessfullyEncodeMessage(std::ostream & out);
}

#endif
