#ifndef solver_trinary_trinary_h
#define solver_trinary_trinary_h

#include "../basics/expression.h"

namespace solver
{
    class aTrinary : protected iExpression
    {
        protected:
            iExpression *first, *sec, *thrd;

        public:
            aTrinary(iExpression *_first,iExpression *sec,iExpression *thrd);

            virtual bool isEqual(const iExpression& arg)const;
            virtual bool isEqual(const iExpression& arg);

            virtual double eval()const =0;
            virtual double eval()=0;

            virtual double compare(const iExpression& arg)const;
            virtual double compare(const iExpression& arg);

            virtual iExpression* simplify()const=0;
            virtual iExpression* simplify()=0;

            virtual bool contains(const iExpression& arg)const;
    };
};

#endif // solver_trinary_trinary_h
