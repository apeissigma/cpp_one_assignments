#ifndef USER_SOLVER_H_
#define USER_SOLVER_H_

#include "solver.h"

class UserSolver : public Solver {
   public:
    void solve(Board &board) override;
    void guessNearby(size_t i, size_t j, Board& board); 
};

#endif // USER_SOLVER_H_
