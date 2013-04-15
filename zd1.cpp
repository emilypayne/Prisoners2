#include "zd1.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
zd1::zd1()
{
    //ctor
}

bool::zd1::play(bool other_p, bool p, int round)
{
    if(round > 0)
    {
        if ((other_p == 1) && (p == 1))
        {
            return true;
        }
        else if((other_p == 1) && (p == 0))
        {
            int x = rand() % 100;
            if(x <= 90)
            {
                return true;
            }
            else return false;
        }
        else if((other_p == 0) && (p == 1))
        {
            int x = rand() % 100;
            if(x <= 40)
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
