#include "strat_zd2P9.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
strat_zd2P9::strat_zd2P9()
{
    //ctor
}

bool::strat_zd2P9::play(bool other_p, bool p, int round)
{
    if(round > 0)
    {
        if ((other_p == 1) && (p == 1))
        {
            int x = rand() % 1000;
            if(x <= 778)
            {
                return true;
            }
            else return false;
        }
        else if((other_p == 1) && (p == 0))
        {
            return false;
        }
        else if((other_p == 0) && (p == 1))
        {
            int x = rand() % 1000;
            if(x <= 667)
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
