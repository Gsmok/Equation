#ifndef solver_binary_binary_h
#define solver_binary_binary_h

#include "../basics/expression.h"

namespace solver
{
    class aBinary : protected iExpression
    {
        protected:
            iExpression *first, *sec;

        public:
            aBinary(iExpression* _first, iExpression* _sec);

            virtual bool isEqual(const iExpression& arg)const =0;
            virtual bool isEqual(const iExpression& arg)=0;

            virtual double eval()const =0;
            virtual double eval()=0;

            virtual double compare(const iExpression& arg)const =0;
            virtual double compare(const iExpression& arg)=0;

            virtual iExpression* simplify()const =0;
            virtual iExpression* simplify()=0;

            virtual contains(const iExpression& arg);
    };
};

#endif // solver_binary_binary_h
