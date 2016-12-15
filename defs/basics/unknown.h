#ifndef solver_basics_unknown_h
#define solver_basics_unknown_h

#include "expression.h"

namespace solver
{
    class cUnknown
    {
        private:
            char symbol;

        public:
            cUnknown(char _symbol);

            virtual bool isEqual(const iExpression& arg)const;
            virtual bool isEqual(const iExpression& arg);

            virtual double eval()const;
            virtual double eval();

            virtual double compare(const iExpression& arg)const;
            virtual double compare(const iExpression& arg);

            virtual iExpression* simplify();
            virtual contains(const iExpression&);
    };
};

#endif // solver_basics_unknown_h

