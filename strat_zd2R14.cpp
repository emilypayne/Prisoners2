#include "strat_zd2R14.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
strat_zd2R14::strat_zd2R14()
{
    //ctor
}

bool::strat_zd2R14::play(bool other_p, bool p, int round)
{
    if(round > 0)
    {
        if ((other_p == 1) && (p == 1))
        {
            return false;
        }
        else if((other_p == 1) && (p == 0))
        {
            return false;
        }
        else if((other_p == 0) && (p == 1))
        {
            int x = rand() % 1000;
            if(x <= 571)
            {
                return true;
            }
            else return false;
        }
        else if((other_p == 0) && (p == 0))
        {
            int x = rand() % 1000;
            if(x <= 143)
            {
                return true;
            }
            else return false;
        }
    }
    else return true;
}
