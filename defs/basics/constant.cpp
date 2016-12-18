#include "constant.h"

using namespace solver;

cConstant::cConstant(double _value)
:value(_value)
{}

bool cConstant::isEqual(const iExpression& arg)const
{
    return (&arg==this)||arg.eval()==value;
}

bool cConstant::isEqual(const iExpression& arg)
{
    return ((const cConstant*)this)->isEqual(arg);
}

double cConstant::eval()const
{
    return value;
}

double cConstant::eval()
{
    return ((const cConstant*)this)->eval();
}

double cConstant::compare(const iExpression& arg)const
{
    return eval() - arg.eval();
}

double cConstant::compare(const iExpression& arg)
{
    return ((const cConstant*)this)->compare(arg);
}

iExpression* cConstant::simplify()
{
    return nullptr;
}

bool cConstant::contains(const iExpression& arg)const
{
    return isEqual(arg);
}
