#ifndef solver_single_single_h
#define solver_single_single_h

#include "../basics/expression.h"

namespace solver
{
    class aSingle : protected iExpression
    {
        protected:
            iExpression *argument;

        public:
            aSingle(iExpression* _argument);

            virtual bool isEqual(const iExpression& arg)const;
            virtual bool isEqual(const iExpression& arg);

            virtual double eval()const =0;
            virtual double eval()=0;

            virtual double compare(const iExpression& arg)const;
            virtual double compare(const iExpression& arg);

            virtual iExpression* simplify()const =0;
            virtual iExpression* simplify()=0;

            virtual bool contains(const iExpression& arg)const;
    };
};

#endif // solver_single_single_h
