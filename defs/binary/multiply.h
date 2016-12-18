#ifndef solver_binary_multiply_h
#define solver_binary_multiply_h

#include "binary.h"

namespace solver
{
    class cMultiply : protected aBinary
    {
        public:
            cMultiply(iExpression* _first, iExpression* _sec);

            virtual double eval()const;
            virtual double eval();

            virtual iExpression* simplify()const;
            virtual iExpression* simplify();
    };
};

#endif // solver_binary_multiply_h
