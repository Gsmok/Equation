#ifndef solver_binary_power_h
#define solver_binary_power_h

#include "binary.h"

namespace solver
{
    class cPower : protected aBinary
    {
        public:
            cPower(iExpression* _first, iExpression* _sec);

            virtual bool isEqual(const iExpression& arg)const;
            virtual bool isEqual(const iExpression& arg);

            virtual double eval()const;
            virtual double eval();

            virtual double compare(const iExpression& arg)const;
            virtual double compare(const iExpression& arg);

            virtual iExpression* simplify()const;
            virtual iExpression* simplify();
    };
};

#endif // solver_binary_power_h
