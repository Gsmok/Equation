#ifndef solver_basics_complex_h
#define solver_basics_complex_h

#include "equation.h"
#include <vector>

namespace solver
{
    class cUnknown;

    class cComplex
    {
        private:
            std::vector<cEquation> claims;
            std::vector<cEquation*> assumptions;

        public:
            cComplex();

            void addClaim(cEquation& arg);
            std::vector<const cEquation*> getClaims() const;

            void addAssumption(cEquation* arg);
            void removeAssumption(const cEquation* arg);
            std::vector<const cEquation*> getAssumption() const;

            cComplex solve(const cUnknown& _for, unsigned int setNumber) const;
            cComplex solve(const cUnknown& _for, unsigned int setNumber);
    };
};

#include "unknown.h"
#endif // solver_basics_complex_h
