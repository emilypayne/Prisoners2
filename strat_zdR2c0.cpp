#include "strat_zdR2c0.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
strat_zdR2c0::strat_zdR2c0()
{
    //ctor
}

bool::strat_zdR2c0::play(bool other_p, bool p, int round)
{
    if(round > 0)
    {
        if ((other_p == 1) && (p == 1))
        {
            return true;
        }
        else if((other_p == 0) && (p == 1))
        {
            return false;
        }
        else if((other_p == 1) && (p == 0))
        {
            int x = rand() % 375;
            if(x <= 1)
            {
                return true;
            }
            else return false;
        }
        else if((other_p == 0) && (p == 0))
        {
            int x = rand() % 1500;
            if(x <= 1)
            {
                return true;
            }
            else return false;
        }
    }
    else return true;
}
