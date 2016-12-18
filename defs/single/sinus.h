#ifndef solver_single_sinus_h
#define solver_single_sinus_h

#include "single.h"

namespace solver
{
    class cSinus : protected aSingle
    {
        public:
            cSinus(iExpression* _argument);

            virtual double eval()const;
            virtual double eval();

            virtual iExpression* simplify()const;
            virtual iExpression* simplify();
    };
};

#endif // solver_single_sinus_h
