#include "unknown.h"
#include <math.h>

using namespace solver;

cUnknown::cUnknown(char _symbol)
:symbol(_symbol)
{

}

bool cUnknown::isEqual(const iExpression& arg)const
{
    const cUnknown* dCast = dynamic_cast<const cUnknown*>(&arg);

    return (dCast != nullptr)&&(dCast->symbol == symbol);
}

bool cUnknown::isEqual(const iExpression& arg)
{
    return ((const cUnknown*)this)->isEqual(arg);
}

double cUnknown::eval()const
{
    return NAN;
}

double cUnknown::eval()
{
    return ((const cUnknown*)this)->eval();
}

double cUnknown::compare(const iExpression& arg)const
{
    const cUnknown* dCast = dynamic_cast<const cUnknown*>(&arg);

    return ((dCast != nullptr) && (dCast->symbol == symbol)) ? 0 : NAN;
}

double cUnknown::compare(const iExpression& arg)
{
    return ((const cUnknown*)this)->compare(arg);
}

iExpression* cUnknown::simplify()
{
    return nullptr;
}

bool cUnknown::contains(const iExpression&arg)const
{
    return isEqual(arg);
}
