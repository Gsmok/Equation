#ifndef solver_binary_logarithm_h
#define solver_binary_logarithm_h

#include "binary.h"

namespace solver
{
    class cLogarithm : protected aBinary
    {
        public:
            cLogarithm(iExpression* _first, iExpression* _sec);

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

#endif // solver_binary_all_h
