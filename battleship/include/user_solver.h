#include <iostream>
#include "../include/user_solver.h"



void UserSolver::solve(Board &board)
{
    // declarations
    int width = board.getX(), height = board.getY();
    int x = 0, y = 0;
        

    //iterate through every y value
    for (y = 0; y < height; y++)
    {
        //if y even, do this:
        if (y % 2 == 0)
        {
            //check 0 + 4(n)
            for (x = 0; x < width; x += 4)
            {
                auto result = guess(x, y, board);
                if (result == ReturnType::near_miss)
                {
                    if (x + 1 < width)
                    {
                        guess(x + 1, y, board);
                    }
                    if (x > 0)
                    {
                        guess(x - 1, y, board);
                    }
                    if (y + 1 < height)
                    {
                        guess(x, y + 1, board);
                    }
                    if (y > 0)
                    {
                        guess(x, y - 1, board);
                    }
                }
                
            }
            //add last square if width % 4 == 3
            if (width % 4 == 3)
            {
                guess(width - 1, y, board);
            }
        }
        //else (y is not even)
        else
        {
            //check 2 + 4(n)
            for (x = 2; x < width; x += 4)
            {
                auto result = guess(x, y, board);
                if (result == ReturnType::near_miss)
                {
                    if (x + 1 <= width)
                    {
                        guess(x + 1, y, board);
                    }
                    if (x - 1 >= 0)
                    {
                        guess(x - 1, y, board);
                    }
                    if (y + 1 <= height)
                    {
                        guess(x, y + 1, board);
                    }
                    if (y - 1 >= 0)
                    {
                        guess(x, y - 1, board);
                    }
                }
                
            }
            //add last square if width % 4 == 3
            if (width % 4 == 1)
            {
                guess(width - 1, y, board);
            }
        }
    }


}
