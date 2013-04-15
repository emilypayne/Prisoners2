#include "strat_zd2c18.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
strat_zd2c18::strat_zd2c18()
{
    //ctor
}

bool::strat_zd2c18::play(bool other_p, bool p, int round)
{
    if(round > 0)
    {
        if ((other_p == 1) && (p == 1))
        {
            int x = rand() % 100;
            if(x <= 88)
            {
                return true;
            }
            else return false;
        }
        else if((other_p == 1) && (p == 0))
        {
            int x = rand() % 100;
            if(x <= 50)
            {
                return true;
            }
            else
            {
                if(x >= 50)
                {
                    return false;
                }
            }
        }
        else if((other_p == 0) && (p == 1))
        {
            int x = rand() % 100;
            if(x <= 33)
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
