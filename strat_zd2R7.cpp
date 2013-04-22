#include "strat_zd2R7.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
strat_zd2R7::strat_zd2R7()
{
    //ctor
}

bool::strat_zd2R7::play(bool other_p, bool p, int round)
{
    if(round > 0)
    {
        if ((other_p == 1) && (p == 1))
        {
            return false;
        }
        else if((other_p == 0) && (p == 1))
        {
            return false;
        }
        else if((other_p == 1) && (p == 0))
        {
            return true;
        }
        else if((other_p == 0) && (p == 0))
        {
            int x = rand() % 1000;
            if(x <= 286)
            {
                return true;
            }
            else return false;
        }
    }
    else return true;
}
