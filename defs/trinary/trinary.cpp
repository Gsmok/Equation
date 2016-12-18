#include "trinary.h"

using namespace solver;

aTrinary::aTrinary(iExpression* _first, iExpression* _sec, iExpression* _thrd)
:first(_first),sec(_sec),thrd(_thrd)
{}

bool aTrinary::isEqual(const iExpression& arg)const
{
    return eval() == arg.eval();
}

bool aTrinary::isEqual(const iExpression& arg)
{
    return eval() == arg.eval();
}

double aTrinary::compare(const iExpression& arg)const
{
    return eval() - arg.eval();
}

double aTrinary::compare(const iExpression& arg)
{
    return eval() == arg.eval();
}

bool aTrinary::contains(const iExpression& arg)const
{
    if(first == &arg || sec == &arg || thrd == &arg || first->isEqual(arg) || sec->isEqual(arg) || thrd->isEqual(arg))
        return true;
    return false;
}
