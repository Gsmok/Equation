#include "single.h"

using namespace solver;

aSingle::aSingle(iExpression* _argument)
:argument(_argument)
{}

bool aSingle::isEqual(const iExpression& arg)const
{
    return eval() == arg.eval();
}

bool aSingle::isEqual(const iExpression& arg)
{
    return eval() == arg.eval();
}

double aSingle::compare(const iExpression& arg)const
{
    return eval() - arg.eval();
}

double aSingle::compare(const iExpression& arg)
{
    return eval() == arg.eval();
}

bool aSingle::contains(const iExpression& arg)const
{
    if(argument == &arg || argument->contains(arg))
        return true;
    return false;
}
