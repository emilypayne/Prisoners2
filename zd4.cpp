#include "zd4.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
zd4::zd4()
{
    //ctor
}

bool::zd4::play(bool other_p, bool p, int round)
{
    if(round > 0)
    {
        if ((other_p == 1) && (p == 1))
        {
            int x = rand() % 100;
            if(x <= 82)
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
            if(x <= 23)
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
    else return false;
}
