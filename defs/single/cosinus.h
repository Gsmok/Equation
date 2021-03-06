#ifndef solver_single_cosinus_h
#define solver_single_cosinus_h

#include "single.h"

namespace solver
{
    class cCosinus : protected aSingle
    {
        public:
            cCosinus(iExpression* _argument);

            virtual double eval()const;
            virtual double eval();

            virtual iExpression* simplify()const;
            virtual iExpression* simplify();
    };
};

#endif // solver_single_cosinus_h
