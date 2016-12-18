#ifndef solver_binary_logarithm_h
#define solver_binary_logarithm_h

#include "binary.h"

namespace solver
{
    class cLogarithm : protected aBinary
    {
        public:
            cLogarithm(iExpression* _first, iExpression* _sec);

            virtual double eval()const;
            virtual double eval();

            virtual iExpression* simplify()const;
            virtual iExpression* simplify();
    };
};

#endif // solver_binary_all_h
