#include <iostream>
#include "../include/user_solver.h"
#include "../include/guesser.h"

int turnCounter = 0; 
int hitCounter = 0;

void UserSolver::solve(Board &board) {
    for (size_t i = 0; i < board.getX() && hitCounter < board.getShipCount(); i++) {
        for (size_t j = 0; j < board.getY() && hitCounter < board.getShipCount(); j++) {
            if (guess(i, j, board) == hit) {
                turnCounter++;
                hitCounter++;
            } 
            //if near miss, call guessNearby()
            else if (guess(i, j, board) == near_miss)
            {
                turnCounter++;
                guessNearby(i, j, board);
            }
            else 
            {
                turnCounter++;
            }
        }
    }
    //ReturnType t = guess(1, 1, board);
    std::cout << turnCounter << std::endl;
}

//check all adjacent tiles
void UserSolver::guessNearby(size_t x, size_t y, Board& board)
{
    if (x > 0 && guess(x - 1, y, board) == hit)
    {
        turnCounter++;
        hitCounter++;
    }
    if (x < board.getX() - 1 && guess(x + 1, y, board) == hit) 
    {
        turnCounter++;
        hitCounter++;
    }
    if (y > 0 && guess(x, y + 1, board) == hit) 
    {
        turnCounter++;
        hitCounter++;
    }
    if (y < board.getY() - 1 && guess(x, y - 1, board) == hit) 
    {
        turnCounter++;
        hitCounter++;
    } 
}
