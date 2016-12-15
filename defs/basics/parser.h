#ifndef solver_basics_parser_h
#define solver_basics_parser_h

#include "equation.h"
#include <string>

namespace solver
{
    cEquation parse(const char* text);
    cEquation parse(const std::string text);
};

#endif // solver_basics_parser_h
