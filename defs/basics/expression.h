#ifndef solver_basics_expression_h
#define solver_basics_expression_h

namespace solver
{
    class iExpression
    {
        public:
            virtual bool isEqual(const iExpression& arg)const =0;
            virtual bool isEqual(const iExpression& arg)=0;

            virtual double eval()const =0;
            virtual double eval()=0;

            virtual double compare(const iExpression& arg)const =0;
            virtual double compare(const iExpression& arg)=0;

            virtual iExpression* simplify();
            virtual contains(const iExpression& arg)=0;
    };

};

#endif // solver_basics_expression_h
