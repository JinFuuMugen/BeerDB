//  Author: mrsheldie@mail.ru (Ivchenko Nikolay)

#include <cstdio>
#include <readline/history.h>
#include <readline/readline.h>

#include <algorithm>
#include <iostream>
#include <string>

#include "interpreter.h"

using namespace std;

static std::string &trim(std::string &s) {
  if (s.empty()) {
    return s;
  }
  s.erase(0, s.find_first_not_of(" "));
  s.erase(s.find_last_not_of(" ") + 1);
  return s;
}
