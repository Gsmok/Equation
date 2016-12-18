#include "binary.h"

using namespace solver;

aBinary::aBinary(iExpression* _first, iExpression* _sec)
:first(_first),sec(_sec)
{}

bool aBinary::isEqual(const iExpression& arg)const
{
    return eval() == arg.eval();
}

bool aBinary::isEqual(const iExpression& arg)
{
    return eval() == arg.eval();
}

double aBinary::compare(const iExpression& arg)const
{
    return eval() - arg.eval();
}

double aBinary::compare(const iExpression& arg)
{
    return eval() == arg.eval();
}

bool aBinary::contains(const iExpression& arg)const
{
    if(first == &arg || sec == &arg || first->isEqual(arg) || sec->isEqual(arg))
        return true;
    return false;
}
