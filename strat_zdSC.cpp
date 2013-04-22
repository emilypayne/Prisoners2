#include "strat_zdSC.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
strat_zdSC::strat_zdSC()
{
    //ctor
}

bool::strat_zdSC::play(bool other_p, bool p, int round)
{
    if(round > 0)
    {
        if ((other_p == 1) && (p == 1))
        {
            return true;
        }
        else if((other_p == 1) && (p == 0))
        {
            return false;
        }
        else if((other_p == 0) && (p == 1))
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
