#ifndef solver_single_tangens_h
#define solver_single_tangens_h

#include "single.h"

namespace solver
{
    class cTangens : protected aSingle
    {
        public:
            cTangens(iExpression* _argument);

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

#endif // solver_single_tangens_h
