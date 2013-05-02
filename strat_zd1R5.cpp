#include "strat_zd1R5.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
strat_zd1R5::strat_zd1R5()
{
    //ctor
}

bool::strat_zd1R5::play(bool other_p, bool p, int round)
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
            return true;
        }
        else if((other_p == 0) && (p == 0))
        {
            return false;
        }
    }
    else return true;
}
