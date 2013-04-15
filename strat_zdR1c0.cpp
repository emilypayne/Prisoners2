#include "strat_zdR1c0.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
strat_zdR1c0::strat_zdR1c0()
{
    //ctor
}

bool::strat_zdR1c0::play(bool other_p, bool p, int round)
{
    if(round > 0)
    {
        if ((other_p == 1) && (p == 1))
        {
            return false;
        }
        else if((other_p == 1) && (p == 0))
        {
            int x = rand() % 1000;
            if(x <= 332)
            {
                return true;
            }
            else return false;
        }
        else if((other_p == 0) && (p == 1))
        {
            int x = rand() % 1000;
            if(x <= 2)
            {
                return true;
            }
            else return false;
        }
        else if((other_p == 0) && (p == 0))
        {
            return false;
        }
    }
    else return true;
}
