#ifndef solver_basics_equation_h
#define solver_basics_equation_h

namespace solver
{
    class cComplex;
    class iExpression;
    class cUnknown;

    class cEquation
    {
        public:
            enum eEquationType
            {
                Equal = 0,
                Different = 1,
                BiggerEqual = 2,
                Bigger = 3,
                SmallerEqual = 4,
                Smaller = 5
            };

        private:
            iExpression* left;
            iExpression* right;
            eEquationType type;

        public:
            cEquation(iExpression* _left, eEquationType _type, iExpression* _right);

            cComplex* solve(const cUnknown& , unsigned int setNumber);

            bool contains(const iExpression& arg) const;

            void substitute(const cEquation& arg);
    };
};

#include "expression.h"
#include "unknown.h"
#include "complex.h"

#endif // solver_basics_equation_h
