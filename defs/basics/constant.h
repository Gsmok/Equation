#ifndef solver_basics_constant_h
#define solver_basics_constant_h

#include "expression.h"

namespace solver
{
    class cConstant : iExpression
    {
        private:
            double value;

        public:
            cConstant(double _value);

            virtual bool isEqual(const iExpression& arg)const;
            virtual bool isEqual(const iExpression& arg);

            virtual double eval()const;
            virtual double eval();

            virtual double compare(const iExpression& arg)const;
            virtual double compare(const iExpression& arg);

            virtual iExpression* simplify();
            virtual contains(const iExpression& arg);
    };
};

#endif // solver_basics_constant_h
