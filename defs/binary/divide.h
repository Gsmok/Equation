#ifndef solver_binary_divide_h
#define solver_binary_divide_h

#include "binary.h"

namespace solver
{
    class cDivide : protected aBinary
    {
        public:
            cDivide(iExpression* _first, iExpression* _sec);

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

#endif // solver_binary_divide_h
