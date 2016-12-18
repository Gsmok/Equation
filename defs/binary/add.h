#ifndef solver_binary_all_h
#define solver_binary_all_h

#include "binary.h"

namespace solver
{
    class cAdd : protected aBinary
    {
        public:
            cAdd(iExpression* _first, iExpression* _sec);

            virtual double eval()const;
            virtual double eval();

            virtual iExpression* simplify()const;
            virtual iExpression* simplify();
    };
};

#endif // solver_binary_all_h
