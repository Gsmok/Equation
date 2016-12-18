#ifndef solver_binary_substract_h
#define solver_binary_substract_h

#include "binary.h"

namespace solver
{
    class cSubstract : protected aBinary
    {
        public:
            cSubstract(iExpression* _first, iExpression* _sec);

            virtual double eval()const;
            virtual double eval();

            virtual iExpression* simplify()const;
            virtual iExpression* simplify();
    };
};

#endif // solver_binary_substract_h
