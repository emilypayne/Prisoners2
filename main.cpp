#include <iostream>
#include <cmath>
#include <vector>
#include "strat_allc.h"
#include "strat_tft.h"
#include "strat_alld.h"
#include "strat_zd1c10.h"
#include "strat_zd2c18.h"
#include "strat_zd4c34.h"
#include "strat_zdR1c0.h"
#include "strat_zdR2c0.h"
#include "strat_zd1R10.h"
#include "strat_zd1R5.h"
#include "strat_zd2P9.h"
#include "strat_zd2R14.h"
#include "strat_zd2R7.h"
#include "strat_zd4P17.h"
#include "strat_zdSC.h"


using namespace std;

int main()
{
    // These are all entires that will be used to sum each section
    int allc0=0, allc=0, countallc0=0, countallc=0, allc1=0, alld1=0, countallc1=0, countalld1=0, allc2=0, tft2=0, countallc2=0, counttft2=0;
    int allc3=0, tftd2=0, countallc3=0, counttftd2=0, allc4=0, zd1c10=0, countallc4=0, countzd1c10=0, allc5=0, zd1d10=0, countallc5=0, countzd1d10=0;
    int allc6=0, zd2c=0, countallc6=0, countzd2c=0, allc7=0, zd2d=0, countallc7=0, countzd2d=0, allc8=0, zd4c=0, countallc8=0, countzd4c=0;
    int allc9=0, zd4d=0, countallc9=0, countzd4d=0, allc10=0, zdR1c=0, countallc10=0, countzdR1c=0, allc11=0, zdR1d=0, countallc11=0, countzdR1d=0;
    int allc12=0, zdR2c=0, countallc12=0, countzdR2c=0, allc13=0, zdR2d=0, countallc13=0, countzdR2d=0;
    int allc14=0, zd2R7=0, countallc14=0, countzd2R7=0;

    int alld0=0, alld=0, countalld0=0, countalld=0, alld2=0, tft1=0, countalld2=0, counttft1=0, alld3=0, tftd1=0, countalld3=0, counttftd1=0;
    int alld4=0, zd1c101=0, countalld4=0, countzd1c101=0, alld5=0, zd1d101=0, countalld5=0, countzd1d101=0, alld6=0, zd2c1=0, countalld6=0, countzd2c1=0;
    int alld7=0, zd2d1=0, countalld7=0, countzd2d1=0, alld8=0, zd4c1=0, countalld8=0, countzd4c1=0, alld9=0, zd4d1=0, countalld9=0, countzd4d1=0;
    int alld10=0, zdR1c1=0, countalld10=0, countzdR1c1=0, alld11=0, zdR1d1=0, countalld11=0, countzdR1d1=0, alld12=0, zdR2c1=0, countalld12=0, countzdR2c1=0;
    int alld13=0, zdR2d1=0, countalld13=0, countzdR2d1=0;
    int alld14=0, zd2R71=0, countalld14=0, countzd2R71=0;

    int tftc=0, tftc0=0, counttftc=0, counttftc0=0, tftc3=0, tftd11=0, counttftc3=0, counttftd11=0, tftc4=0, zd1c1011=0, counttftc4=0, countzd1c1011=0;
    int tftc5=0, zd1d1011=0, counttftc5=0, countzd1d1011=0, tftc6=0, zd2c11=0, counttftc6=0, countzd2c11=0, tftc7=0, zd2d11=0, counttftc7=0, countzd2d11=0;
    int tftc8=0, zd4c11=0, counttftc8=0, countzd4c11=0, tftc9=0, zd4d11=0, counttftc9=0, countzd4d11=0, tftc10=0, zdR1c11=0, counttftc10=0, countzdR1c11=0;
    int tftc11=0, zdR1d11=0, counttftc11=0, countzdR1d11=0, tftc12=0, zdR2c11=0, counttftc12=0, countzdR2c11=0, tftc13=0, zdR2d11=0, counttftc13=0, countzdR2d11=0;
    int tftc14=0, zd2R711=0, counttftc14=0, countzd2R711=0;

    int tftd3=0, tftd111=0, counttftd3=0, counttftd111=0, tftd4=0, zd1c10111=0, counttftd4=0, countzd1c10111=0, tftd5=0, zd1d10111=0, counttftd5=0, countzd1d10111=0;
    int tftd6=0, zd2c111=0, counttftd6=0, countzd2c111=0, tftd7=0, zd2d111=0, counttftd7=0, countzd2d111=0, tftd8=0, zd4c111=0, counttftd8=0, countzd4c111=0;
    int tftd9=0, zd4d111=0, counttftd9=0, countzd4d111=0, tftd10=0, zdR1c111=0, counttftd10=0, countzdR1c111=0, tftd011=0, zdR1d111=0, counttftd011=0, countzdR1d111=0;
    int tftd12=0, zdR2c111=0, counttftd12=0, countzdR2c111=0, tftd13=0, zdR2d111=0, counttftd13=0, countzdR2d111=0;
    int tftd14=0, zd2R7111=0, counttftd14=0, countzd2R7111=0;

    int zd1c4=0, zd1c101111=0, countzd1c4=0, countzd1c101111=0, zd1c5=0, zd1d101111=0, countzd1c5=0, countzd1d101111=0, zd1c6=0, zd2c1111=0, countzd1c6=0, countzd2c1111=0;
    int zd1c7=0, zd2d1111=0, countzd1c7=0, countzd2d1111=0, zd1c8=0, zd4c1111=0, countzd1c8=0, countzd4c1111=0, zd1c9=0, zd4d1111=0, countzd1c9=0, countzd4d1111=0;
    int zd1c210=0, zdR1c1111=0, countzd1c210=0, countzdR1c1111=0, zd1c11=0, zdR1d1111=0, countzd1c11=0, countzdR1d1111=0, zd1c12=0, zdR2c1111=0, countzd1c12=0, countzdR2c1111=0;
    int zd1c13=0, zdR2d1111=0, countzd1c13=0, countzdR2d1111=0;
    int zd1c14=0, zd2R71111=0, countzd1c14=0, countzd2R71111=0;

    int zd1d5=0, zd1d1011111=0, countzd1d5=0, countzd1d1011111=0, zd1d6=0, zd2c11111=0, countzd1d6=0, countzd2c11111=0, zd1d7=0, zd2d11111=0, countzd1d7=0, countzd2d11111=0;
    int zd1d8=0, zd4c11111=0, countzd1d8=0, countzd4c11111=0, zd1d9=0, zd4d11111=0, countzd1d9=0, countzd4d11111=0, zd1d110=0, zdR1c11111=0, countzd1d110=0, countzdR1c11111=0;
    int zd1d11=0, zdR1d11111=0, countzd1d11=0, countzdR1d11111=0, zd1d12=0, zdR2c11111=0, countzd1d12=0, countzdR2c11111=0, zd1d13=0, zdR2d11111=0, countzd1d13=0, countzdR2d11111=0;
    int zd1d14=0, zd2R711111=0, countzd1d14=0, countzd2R711111=0;

    int zd2c6=0, zd2c111111=0, countzd2c6=0, countzd2c111111=0, zd2c7=0, zd2d111111=0, countzd2c7=0, countzd2d111111=0, zd2c8=0, zd4c111111=0, countzd2c8=0, countzd4c111111=0;
    int zd2c9=0, zd4d111111=0, countzd2c9=0, countzd4d111111=0, zd2c10=0, zdR1c111111=0, countzd2c10=0, countzdR1c111111=0, zd2c011=0, zdR1d111111=0, countzd2c011=0, countzdR1d111111=0;
    int zd2c12=0, zdR2c111111=0, countzd2c12=0, countzdR2c111111=0, zd2c13=0, zdR2d111111=0, countzd2c13=0, countzdR2d111111=0;
    int zd2c14=0, zd2R7111111=0, countzd2c14=0, countzd2R7111111=0;

    int zd2d7=0, zd2d1111111=0, countzd2d7=0, countzd2d1111111=0, zd2d8=0, zd4c1111111=0, countzd2d8=0, countzd4c1111111=0, zd2d9=0, zd4d1111111=0, countzd2d9=0, countzd4d1111111=0;
    int zd2d10=0, zdR1c1111111=0, countzd2d10=0, countzdR1c1111111=0, zd2d011=0, zdR1d1111111=0, countzd2d011=0, countzdR1d1111111=0, zd2d12=0, zdR2c1111111=0, countzd2d12=0, countzdR2c1111111=0;
    int zd2d13=0, zdR2d1111111=0, countzd2d13=0, countzdR2d1111111=0;
    int zd2d14=0, zd2R71111111=0, countzd2d14=0, countzd2R71111111=0;

    int zd4c8=0, zd4c11111111=0, countzd4c8=0, countzd4c11111111=0, zd4c9=0, zd4d11111111=0, countzd4c9=0, countzd4d11111111=0, zd4c10=0, zdR1c11111111=0, countzd4c10=0, countzdR1c11111111=0;
    int zd4c011=0, zdR1d11111111=0, countzd4c011=0, countzdR1d11111111=0, zd4c12=0, zdR2c11111111=0, countzd4c12=0, countzdR2c11111111=0, zd4c13=0, zdR2d11111111=0, countzd4c13=0, countzdR2d11111111=0;
    int zd4c14=0, zd2R711111111=0, countzd4c14=0, countzd2R711111111=0;

    int zd4d9=0, zd4d111111111=0, countzd4d9=0, countzd4d111111111=0, zd4d10=0, zdR1c111111111=0, countzd4d10=0, countzdR1c111111111=0, zd4d011=0, zdR1d111111111=0, countzd4d011=0, countzdR1d111111111=0;
    int zd4d12=0, zdR2c111111111=0, countzd4d12=0, countzdR2c111111111=0, zd4d13=0, zdR2d111111111=0, countzd4d13=0, countzdR2d111111111=0;
    int zd4d14=0, zd2R7111111111=0, countzd4d14=0, countzd2R7111111111=0;

    int zdR1c10=0, zdR1c1111111111=0, countzdR1c10=0, countzdR1c1111111111=0, zdR1c011=0, zdR1d1111111111=0, countzdR1c011=0, countzdR1d1111111111=0;
    int zdR1c12=0, zdR2c1111111111=0, countzdR1c12=0, countzdR2c1111111111=0, zdR1c13=0, zdR2d1111111111=0, countzdR1c13=0, countzdR2d1111111111=0;
    int zdR1c14=0, zd2R71111111111=0, countzdR1c14=0, countzd2R71111111111=0;

    int zdR1d011=0, zdR1d11111111111=0, countzdR1d011=0, countzdR1d11111111111=0, zdR1d12=0, zdR2c11111111111=0, countzdR1d12=0, countzdR2c11111111111=0;
    int zdR1d13=0, zdR2d11111111111=0, countzdR1d13=0, countzdR2d11111111111=0, zdR1d14=0, zd2R711111111111=0, countzdR1d14=0, countzd2R711111111111=0;

    int zdR2c12=0, zdR2c111111111111=0, countzdR2c12=0, countzdR2c111111111111=0, zdR2c13=0, zdR2d111111111111=0, countzdR2c13=0, countzdR2d111111111111=0;
    int zdR2c14=0, zd2R7111111111111=0, countzdR2c14=0, countzd2R7111111111111=0;

    int zdR2d13=0, zdR2d1111111111111=0, countzdR2d13=0, countzdR2d1111111111111=0;
    int zdR2d14=0, zd2R71111111111111=0, countzdR2d14=0, countzd2R71111111111111=0;

    int zdR2c7=0, zd2R711111111111111=0, countzdR2c7=0, countzd2R711111111111111=0;

    bool play1, play2, play3, play4, play5, play6, play7, play8, play9, play10, play11, play12, play13, play14, play15;
    bool play1_temp, play2_temp, play3_temp, play4_temp, play5_temp, play6_temp, play7_temp, play8_temp, play9_temp, play10_temp, play11_temp;
    bool play12_temp, play13_temp, play14_temp, play15_temp; // these all refer to the header files for the strategies
    strat_allc player_1;
    strat_alld player_2;
    strat_tft player_3;
    strat_zd1c10 player_4;
    strat_zd2c18 player_5;
    strat_zd4c34 player_6;
    strat_zdR1c0 player_7;
    strat_zdR2c0 player_8;
    strat_zdSC player_9;
    strat_zd2P9 player_10;
    strat_zd4P17 player_11;
    strat_zd1R10 player_12;
    strat_zd1R5 player_13;
    strat_zd2R14 player_14;
    strat_zd2R7 player_15;

cout << "ROUND 1" << endl;

    cout << "Game 1  " << ' '; //ALLC vs. ALLC
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play1_temp = player_1.play();
        play1 = play1_temp;
        play1 = play1_temp;
        if((play1 == true) && (play1 == true))
        {
            allc0 = 3;
            allc = 3;
        }
        else if ((play1 == true) && (play1 == false))
        {
            allc0 = 0;
            allc = 5;
        }
        else if ((play1 == false) && (play1 == true))
        {
            allc0 = 5;
            allc = 0;
        }
        else
        {
            allc0 = 1;
            allc = 1;
        }
        countallc0+= allc0;
        countallc+= allc;
    }
    cout << "ALLC = " << countallc0 << ' ';
    cout << "  ALLC = " << countallc << endl;
cout << "Game 2  " << ' '; //ALLC Vs. ALLD
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play2_temp = player_2.play();
        play1 = play1_temp;
        play2 = play2_temp;
        if((play1 == true) && (play2 == true)){
            allc1 = 3;
            alld1 = 3;}
        else if ((play1 == true) && (play2 == false)){
            allc1 = 0;
            alld1 = 5;}
        else if ((play1 == false) && (play2 == true)){
            allc1 = 5;
            alld1 = 0;}
        else{
            allc1 = 1;
            alld1 = 1;}
        countallc1+= allc1;
        countalld1+= alld1;
    }
    cout << "ALLC = " << countallc1 << ' ';
    cout << "  ALLD = " << countalld1 << endl;
    cout << "Game 3  " << ' '; // ALLC Vs. TFT
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play3_temp = player_3.play(play1,i); // TFT strategy depends on other player's previous outcome
        play1 = play1_temp;
        play3 = play3_temp;
        if((play1 == true) && (play3 == true))
        {
            allc2 = 3;
            tft2 = 3;
        }
        else if ((play1 == true) && (play3 == false))
        {
            allc2 = 0;
            tft2 = 5;
        }
        else if ((play1 == false) && (play3 == true))
        {
            allc2 = 5;
            tft2 = 0;
        }
        else
        {
            allc2 = 1;
            tft2 = 1;
        }
        countallc2+= allc2;
        counttft2+= tft2;
    }
    cout << "ALLC = " << countallc2 << ' ';
    cout << "  TFTC = " << counttft2 << endl;

      cout << "Game 4  " << ' '; // ALLC Vs. ZD1C10
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play4_temp = player_4.play(play1,play4,i); // ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play1 = play1_temp;
        play4 = play4_temp;
        if((play1 == true) && (play4 == true))
        {
            allc3 = 3;
            tftd2 = 3;
        }
        else if ((play1 == true) && (play4 == false))
        {
            allc3 = 0;
            tftd2 = 5;
        }
        else if ((play1 == false) && (play4 == true))
        {
            allc3 = 5;
            tftd2 = 0;
        }
        else
        {
            allc3 = 1;
            tftd2 = 1;
        }
        countallc3+= allc3;
        counttftd2+= tftd2;
    }
    cout << "ALLC = " << countallc3 << ' ';
    cout << "  ZD1C10 = " << counttftd2 << endl;

            cout << "Game 5  " << ' '; // ALLC Vs. ZD2C18
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play5_temp = player_5.play(play1, play5,i); // ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play1 = play1_temp;
        play5 = play5_temp;
        if((play1 == true) && (play5 == true))
        {
            allc4 = 3;
            zd1c10 = 3;
        }
        else if ((play1 == true) && (play5 == false))
        {
            allc4 = 0;
            zd1c10 = 5;
        }
        else if ((play1 == false) && (play5 == true))
        {
            allc4 = 5;
            zd1c10 = 0;
        }
        else
        {
            allc4 = 1;
            zd1c10 = 1;
        }
        countallc4+= allc4;
        countzd1c10+= zd1c10;
    }
    cout << "ALLC = " << countallc4 << ' ';
    cout << "  ZD2C18 = " << countzd1c10 << endl;

    cout << "Game 6  " << ' '; // ALLC Vs. ZD4C34
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play6_temp = player_6.play(play1, play6,i); // ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play1 = play1_temp;
        play6 = play6_temp;
        if((play1 == true) && (play6 == true))
        {
            allc5 = 3;
            zd1d10 = 3;
        }
        else if ((play1 == true) && (play6 == false))
        {
            allc5 = 0;
            zd1d10 = 5;
        }
        else if ((play1 == false) && (play6 == true))
        {
            allc5 = 5;
            zd1d10 = 0;
        }
        else
        {
            allc5 = 1;
            zd1d10 = 1;
        }
        countallc5+= allc5;
        countzd1d10+= zd1d10;
    }
    cout << "ALLC = " << countallc5 << ' ';
    cout << "  ZD4C34 = " << countzd1d10 << endl;

            cout << "Game 7  " << ' '; // ALLC Vs. ZDR1C0
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play7_temp = player_7.play(play1, play7,i); // ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play1 = play1_temp;
        play7 = play7_temp;
        if((play1 == true) && (play7 == true))
        {
            allc6 = 3;
            zd2c = 3;
        }
        else if ((play1 == true) && (play7 == false))
        {
            allc6 = 0;
            zd2c = 5;
        }
        else if ((play1 == false) && (play7 == true))
        {
            allc6 = 5;
            zd2c = 0;
        }
        else
        {
            allc6 = 1;
            zd2c = 1;
        }
        countallc6+= allc6;
        countzd2c+= zd2c;
    }
    cout << "ALLC = " << countallc6 << ' ';
    cout << "  ZDR1C0 = " << countzd2c << endl;

    cout << "Game 8  " << ' '; // ALLC Vs. ZDR2C0
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play8_temp = player_8.play(play1, play8,i); // ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play1 = play1_temp;
        play8 = play8_temp;
        if((play1 == true) && (play8 == true))
        {
            allc7 = 3;
            zd2d = 3;
        }
        else if ((play1 == true) && (play8 == false))
        {
            allc7 = 0;
            zd2d = 5;
        }
        else if ((play1 == false) && (play8 == true))
        {
            allc7 = 5;
            zd2d = 0;
        }
        else
        {
            allc7 = 1;
            zd2d = 1;
        }
        countallc7+= allc7;
        countzd2d+= zd2d;
    }
    cout << "ALLC = " << countallc7 << ' ';
    cout << "  ZDR2C0 = " << countzd2d << endl;

cout << "Game 9  " << ' ';
    for(int i = 0; i<100; i++) // ALLC Vs. ZDSC
    {
        play1_temp = player_1.play();
        play9_temp = player_9.play(play1, play9,i); // ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play1 = play1_temp;
        play9 = play9_temp;
        if((play1 == true) && (play9 == true))
        {
            allc8 = 3;
            zd4c = 3;
        }
        else if ((play1 == true) && (play9 == false))
        {
            allc8 = 0;
            zd4c = 5;
        }
        else if ((play1 == false) && (play9 == true))
        {
            allc8 = 5;
            zd4c = 0;
        }
        else
        {
            allc8 = 1;
            zd4c = 1;
        }
        countallc8+= allc8;
        countzd4c+= zd4c;
    }
    cout << "ALLC = " << countallc8 << ' ';
    cout << "  ZDSC = " << countzd4c << endl;

cout << "Game 10  " << ' '; // ALLC Vs. ZD2P9
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play10_temp = player_10.play(play1, play10,i); // ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play1 = play1_temp;
        play10 = play10_temp;
        if((play1 == true) && (play10 == true))
        {
            allc9 = 3;
            zd4d = 3;
        }
        else if ((play1 == true) && (play10 == false))
        {
            allc9 = 0;
            zd4d = 5;
        }
        else if ((play1 == false) && (play10 == true))
        {
            allc9 = 5;
            zd4d = 0;
        }
        else
        {
            allc9 = 1;
            zd4d = 1;
        }
        countallc9+= allc9;
        countzd4d+= zd4d;
    }
    cout << "ALLC = " << countallc9 << ' ';
    cout << "  ZD2P9 = " << countzd4d << endl;

    cout << "Game 11  " << ' '; // ALLC Vs. ZD4P17
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play11_temp = player_11.play(play1, play11,i); // ZD2P17 strategy depends on other player's previous outcome along with their own previous choice
        play1 = play1_temp;
        play11 = play11_temp;
        if((play1 == true) && (play11 == true))
        {
            allc10 = 3;
            zdR1c = 3;
        }
        else if ((play1 == true) && (play11 == false))
        {
            allc10 = 0;
            zdR1c = 5;
        }
        else if ((play1 == false) && (play11 == true))
        {
            allc10 = 5;
            zdR1c = 0;
        }
        else
        {
            allc10 = 1;
            zdR1c = 1;
        }
        countallc10+= allc10;
        countzdR1c+= zdR1c;
    }
    cout << "ALLC = " << countallc10 << ' ';
    cout << "  ZD4P17 = " << countzdR1c << endl;

cout << "Game 12  " << ' '; // ALLC Vs. ZD1R10
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play12_temp = player_12.play(play1, play12,i); // ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play1 = play1_temp;
        play12 = play12_temp;
        if((play1 == true) && (play12 == true))
        {
            allc11= 3;
            zdR1d = 3;
        }
        else if ((play1 == true) && (play12 == false))
        {
            allc11 = 0;
            zdR1d = 5;
        }
        else if ((play1 == false) && (play12 == true))
        {
            allc11 = 5;
            zdR1d = 0;
        }
        else
        {
            allc11 = 1;
            zdR1d = 1;
        }
        countallc11+= allc11;
        countzdR1d+= zdR1d;
    }
    cout << "ALLC = " << countallc11 << ' ';
    cout << "  ZD1R10 = " << countzdR1d << endl;

    cout << "Game 13  " << ' '; // ALLC Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play13_temp = player_13.play(play1, play13,i); // ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play1 = play1_temp;
        play13 = play13_temp;
        if((play1 == true) && (play13 == true))
        {
            allc12= 3;
            zdR2c = 3;
        }
        else if ((play1 == true) && (play13 == false))
        {
            allc12 = 0;
            zdR2c = 5;
        }
        else if ((play1 == false) && (play13 == true))
        {
            allc12 = 5;
            zdR2c = 0;
        }
        else
        {
            allc12 = 1;
            zdR2c = 1;
        }
        countallc12+= allc12;
        countzdR2c+= zdR2c;
    }
    cout << "ALLC = " << countallc12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c << endl;

cout << "Game 14  " << ' '; // ALLC Vs. ZD2R14
for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play14_temp = player_14.play(play1, play14,i); // ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play1 = play1_temp;
        play14 = play14_temp;
        if((play1 == true) && (play14 == true))
        {
            allc13= 3;
            zdR2d = 3;
        }
        else if ((play1 == true) && (play14 == false))
        {
            allc13 = 0;
            zdR2d = 5;
        }
        else if ((play1 == false) && (play14 == true))
        {
            allc13 = 5;
            zdR2d = 0;
        }
        else
        {
            allc13 = 1;
            zdR2d = 1;
        }
        countallc13+= allc13;
        countzdR2d+= zdR2d;
    }
    cout << "ALLC = " << countallc13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d << endl;



cout << "Game 15  " << ' '; //ALLC Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play1_temp = player_1.play();
        play15_temp = player_15.play(play1, play15,i); // ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play1 = play1_temp;
        play15 = play15_temp;
        if((play1 == true) && (play15 == true))
        {
            allc14= 3;
            zd2R7 = 3;
        }
        else if ((play1 == true) && (play15 == false))
        {
            allc14 = 0;
            zd2R7 = 5;
        }
        else if ((play1 == false) && (play15 == true))
        {
            allc14 = 5;
            zd2R7 = 0;
        }
        else
        {
            allc14 = 1;
            zd2R7 = 1;
        }
        countallc14+= allc14;
        countzd2R7+= zd2R7;
    }
    cout << "ALLC = " << countallc14 << ' ';
    cout << "  ZD2R7 = " << countzd2R7 << endl;


cout << "Round 2" << endl;

cout << "Game 1  " << ' '; // ALLD Vs. ALLD
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play2_temp = player_2.play();
        play2 = play2_temp;
        play2 = play2_temp;
        if((play2 == true) && (play2 == true)){
            alld = 3;
            alld0 = 3;}
        else if ((play2 == true) && (play2 == false)){
            alld = 0;
            alld0 = 5;}
        else if ((play2 == false) && (play2 == true)){
            alld = 5;
            alld0 = 0;}
        else{
            alld = 1;
            alld0 = 1;}
        countalld+= alld;
        countalld0+= alld0;
    }
    cout << "ALLD = " << countalld << ' ';
    cout << "  ALLD = " << countalld0 << endl;

    cout << "Game 2  " << ' '; // ALLD Vs. TFT
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play3_temp = player_3.play(play2,i); // TFT strategy depends on other player's previous outcome
        play2 = play2_temp;
        play3 = play3_temp;
        if((play2 == true) && (play3 == true))
        {
            alld2 = 3;
            tft1 = 3;
        }
        else if ((play2 == true) && (play3 == false))
        {
            alld2 = 0;
            tft1 = 5;
        }
        else if ((play2 == false) && (play3 == true))
        {
            alld2 = 5;
            tft1 = 0;
        }
        else
        {
            alld2 = 1;
            tft1 = 1;
        }
        countalld2+= alld2;
        counttft1+= tft1;
    }
    cout << "ALLD = " << countalld2 << ' ';
    cout << "  TFTC = " << counttft1 << endl;

cout << "Game 3  " << ' '; // ALLD Vs. ZD1C10
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play4_temp = player_4.play(play2, play4, i); // ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play2 = play2_temp;
        play4 = play4_temp;
        if((play2 == true) && (play4 == true))
        {
            allc3 = 3;
            tftd1 = 3;
        }
        else if ((play2 == true) && (play4 == false))
        {
            alld3 = 0;
            tftd1 = 5;
        }
        else if ((play2 == false) && (play4 == true))
        {
            alld3 = 5;
            tftd1 = 0;
        }
        else
        {
            alld3 = 1;
            tftd1 = 1;
        }
        countalld3+= alld3;
        counttftd1+= tftd1;
    }
    cout << "ALLD = " << countalld3 << ' ';
    cout << "  ZD1C10 = " << counttftd1 << endl;

            cout << "Game 4  " << ' '; // ALLD Vs. ZD2C18
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play5_temp = player_5.play(play2, play5,i); // ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play2 = play2_temp;
        play5 = play5_temp;
        if((play2 == true) && (play5 == true))
        {
            alld4 = 3;
            zd1c101 = 3;
        }
        else if ((play2 == true) && (play5 == false))
        {
            alld4 = 0;
            zd1c101 = 5;
        }
        else if ((play2 == false) && (play5 == true))
        {
            alld4 = 5;
            zd1c101 = 0;
        }
        else
        {
            alld4 = 1;
            zd1c101 = 1;
        }
        countalld4+= alld4;
        countzd1c101+= zd1c101;
    }
    cout << "ALLD = " << countalld4 << ' ';
    cout << "  ZD2C18 = " << countzd1c101 << endl;

cout << "Game 5  " << ' '; // ALLD Vs. ZD4C34
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play6_temp = player_6.play(play2, play6,i); // ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play2 = play2_temp;
        play6 = play6_temp;
        if((play2 == true) && (play6 == true))
        {
            alld5 = 3;
            zd1d101 = 3;
        }
        else if ((play2 == true) && (play6 == false))
        {
            alld5 = 0;
            zd1d101 = 5;
        }
        else if ((play2 == false) && (play6 == true))
        {
            alld5 = 5;
            zd1d101 = 0;
        }
        else
        {
            alld5 = 1;
            zd1d101 = 1;
        }
        countalld5+= alld5;
        countzd1d101+= zd1d101;
    }
    cout << "ALLD = " << countalld5 << ' ';
    cout << "  ZD4C34 = " << countzd1d101 << endl;

            cout << "Game 6  " << ' '; // ALLD Vs. ZDR1C0
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play7_temp = player_7.play(play2, play7,i); // ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play2 = play2_temp;
        play7 = play7_temp;
        if((play2 == true) && (play7 == true))
        {
            alld6 = 3;
            zd2c1 = 3;
        }
        else if ((play2 == true) && (play7 == false))
        {
            alld6 = 0;
            zd2c1 = 5;
        }
        else if ((play2 == false) && (play7 == true))
        {
            alld6 = 5;
            zd2c1 = 0;
        }
        else
        {
            alld6 = 1;
            zd2c1 = 1;
        }
        countalld6+= alld6;
        countzd2c1+= zd2c1;
    }
    cout << "ALLD = " << countalld6 << ' ';
    cout << "  ZDR1C0 = " << countzd2c1 << endl;

cout << "Game 7  " << ' '; // ALLD Vs. ZDR2C0
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play8_temp = player_8.play(play2, play8,i); // ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play2 = play2_temp;
        play8 = play8_temp;
        if((play2 == true) && (play8 == true))
        {
            alld7 = 3;
            zd2d1 = 3;
        }
        else if ((play2 == true) && (play8 == false))
        {
            alld7 = 0;
            zd2d1 = 5;
        }
        else if ((play2 == false) && (play8 == true))
        {
            alld7 = 5;
            zd2d1 = 0;
        }
        else
        {
            alld7 = 1;
            zd2d1 = 1;
        }
        countalld7+= alld7;
        countzd2d1+= zd2d1;
    }
    cout << "ALLD = " << countalld7 << ' ';
    cout << "  ZDR2C0 = " << countzd2d1 << endl;

cout << "Game 8  " << ' '; // ALLD Vs. ZDSC
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play9_temp = player_9.play(play2, play9,i); // ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play2 = play2_temp;
        play9 = play9_temp;
        if((play2 == true) && (play9 == true))
        {
            alld8 = 3;
            zd4c1 = 3;
        }
        else if ((play2 == true) && (play9 == false))
        {
            alld8 = 0;
            zd4c1 = 5;
        }
        else if ((play2 == false) && (play9 == true))
        {
            alld8 = 5;
            zd4c1 = 0;
        }
        else
        {
            alld8 = 1;
            zd4c1 = 1;
        }
        countalld8+= alld8;
        countzd4c1+= zd4c1;
    }
    cout << "ALLD = " << countalld8 << ' ';
    cout << "  ZDSC = " << countzd4c1 << endl;

cout << "Game 9  " << ' '; // ALLD Vs. ZD2P9
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play10_temp = player_10.play(play2, play10,i); // ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play2 = play2_temp;
        play10 = play10_temp;
        if((play2 == true) && (play10 == true))
        {
            alld9 = 3;
            zd4d1 = 3;
        }
        else if ((play2 == true) && (play10 == false))
        {
            alld9 = 0;
            zd4d1 = 5;
        }
        else if ((play2 == false) && (play10 == true))
        {
            alld9 = 5;
            zd4d1 = 0;
        }
        else
        {
            alld9 = 1;
            zd4d1 = 1;
        }
        countalld9+= alld9;
        countzd4d1+= zd4d1;
    }
    cout << "ALLD = " << countalld9 << ' ';
    cout << "  ZD2P9 = " << countzd4d1 << endl;

    cout << "Game 10  " << ' '; //ALLD Vs. ZD4P17
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play11_temp = player_11.play(play2, play11,i); // ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play2 = play2_temp;
        play11 = play11_temp;
        if((play2 == true) && (play11 == true))
        {
            alld10 = 3;
            zdR1c1 = 3;
        }
        else if ((play2 == true) && (play11 == false))
        {
            alld10 = 0;
            zdR1c1 = 5;
        }
        else if ((play2 == false) && (play11 == true))
        {
            alld10 = 5;
            zdR1c1 = 0;
        }
        else
        {
            alld10 = 1;
            zdR1c1 = 1;
        }
        countalld10+= alld10;
        countzdR1c1+= zdR1c1;
    }
    cout << "ALLD = " << countalld10 << ' ';
    cout << "  ZD4P17 = " << countzdR1c1 << endl;

cout << "Game 11  " << ' '; // ALLD Vs. ZD1R10
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play12_temp = player_12.play(play2, play12,i); // ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play2 = play2_temp;
        play12 = play12_temp;
        if((play2 == true) && (play12 == true))
        {
            alld11= 3;
            zdR1d1 = 3;
        }
        else if ((play2 == true) && (play12 == false))
        {
            alld11 = 0;
            zdR1d1 = 5;
        }
        else if ((play2 == false) && (play12 == true))
        {
            alld11 = 5;
            zdR1d1 = 0;
        }
        else
        {
            alld11 = 1;
            zdR1d1 = 1;
        }
        countalld11+= alld11;
        countzdR1d1+= zdR1d1;
    }
    cout << "ALLD = " << countalld11 << ' ';
    cout << "  ZD1R10 = " << countzdR1d1 << endl;

    cout << "Game 12  " << ' '; // ALLD Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play13_temp = player_13.play(play2, play13,i); // ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play2 = play2_temp;
        play13 = play13_temp;
        if((play2 == true) && (play13 == true))
        {
            alld12= 3;
            zdR2c1 = 3;
        }
        else if ((play2 == true) && (play13 == false))
        {
            alld12 = 0;
            zdR2c1 = 5;
        }
        else if ((play2 == false) && (play13 == true))
        {
            alld12 = 5;
            zdR2c1 = 0;
        }
        else
        {
            alld12 = 1;
            zdR2c1 = 1;
        }
        countalld12+= alld12;
        countzdR2c1+= zdR2c1;
    }
    cout << "ALLD = " << countalld12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c1 << endl;

cout << "Game 13  " << ' '; // ALLD Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play14_temp = player_14.play(play2, play14,i); // ZD2C14 strategy depends on other player's previous outcome along with their own previous choice
        play2 = play2_temp;
        play14 = play14_temp;
        if((play2 == true) && (play14 == true))
        {
            alld13= 3;
            zdR2d1 = 3;
        }
        else if ((play2 == true) && (play14 == false))
        {
            alld13 = 0;
            zdR2d1 = 5;
        }
        else if ((play2 == false) && (play14 == true))
        {
            alld13 = 5;
            zdR2d1 = 0;
        }
        else
        {
            alld13 = 1;
            zdR2d1 = 1;
        }
        countalld13+= alld13;
        countzdR2d1+= zdR2d1;
    }
    cout << "ALLD = " << countalld13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d1 << endl;

cout << "Game 14  " << ' '; //ALLD Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play2_temp = player_2.play();
        play15_temp = player_15.play(play2, play15,i); // ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play2 = play2_temp;
        play15 = play15_temp;
        if((play2 == true) && (play15 == true))
        {
            alld14= 3;
            zd2R71 = 3;
        }
        else if ((play2 == true) && (play15 == false))
        {
            alld14 = 0;
            zd2R71 = 5;
        }
        else if ((play2 == false) && (play15 == true))
        {
            alld14 = 5;
            zd2R71 = 0;
        }
        else
        {
            alld14 = 1;
            zd2R71 = 1;
        }
        countalld14+= alld14;
        countzd2R71+= zd2R71;
    }
    cout << "ALLD = " << countalld14 << ' ';
    cout << "  ZD2R7 = " << countzd2R71 << endl;

cout << "ROUND 3 " << endl;

    cout << "Game 1  " << ' '; // TFT Vs. TFT
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play3,i); // TFT strategy depends on other player's previous outcome
        play3_temp = player_3.play(play3,i); // TFT strategy depends on other player's previous outcome
        play3 = play3_temp;
        play3 = play3_temp;
        if((play3 == true) && (play3 == true))
        {
            tftc0 = 3;
            tftc = 3;
        }
        else if ((play3 == true) && (play3 == false))
        {
            tftc0 = 0;
            tftc = 5;
        }
        else if ((play3 == false) && (play3 == true))
        {
            tftc0 = 5;
            tftc = 0;
        }
        else
        {
            tftc0 = 1;
            tftc = 1;
        }
        counttftc0+= tftc0;
        counttftc+= tftc;
    }
    cout << "TFTC = " << counttftc0 << ' ';
    cout << "  TFTC = " << counttftc << endl;

    cout << "Game 2  " << ' '; // TFT Vs. ZD1C10
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play4,i); // TFT strategy depends on other player's previous outcome
        play4_temp = player_4.play(play3, play4,i); // ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play3 = play3_temp;
        play4 = play4_temp;
        if((play3 == true) && (play4 == true))
        {
            tftc3 = 3;
            tftd11 = 3;
        }
        else if ((play3 == true) && (play4 == false))
        {
            tftc3 = 0;
            tftd11 = 5;
        }
        else if ((play3 == false) && (play4 == true))
        {
            tftc3 = 5;
            tftd11 = 0;
        }
        else
        {
            tftc3 = 1;
            tftd11 = 1;
        }
        counttftc3+= tftc3;
        counttftd11+= tftd11;
    }
    cout << "TFTC = " << counttftc3 << ' ';
    cout << "  ZD1C10 = " << counttftd11 << endl;

            cout << "Game 3  " << ' '; // TFT Vs. ZD2C18
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play5,i); // TFT strategy depends on other player's previous outcome
        play5_temp = player_5.play(play3, play5,i); // ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play3 = play3_temp;
        play5 = play5_temp;
        if((play3 == true) && (play5 == true))
        {
            tftc4 = 3;
            zd1c1011 = 3;
        }
        else if ((play3 == true) && (play5 == false))
        {
            tftc4 = 0;
            zd1c1011 = 5;
        }
        else if ((play3 == false) && (play5 == true))
        {
            tftc4 = 5;
            zd1c1011 = 0;
        }
        else
        {
            tftc4 = 1;
            zd1c1011 = 1;
        }
        counttftc4+= tftc4;
        countzd1c1011+= zd1c1011;
    }
    cout << "TFTC = " << counttftc4 << ' ';
    cout << "  ZD2C18 = " << countzd1c1011 << endl;

cout << "Game 4  " << ' '; // TFT Vs. ZD4C34
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play6,i); // TFT strategy depends on other player's previous outcome
        play6_temp = player_6.play(play3, play6,i); // ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play3 = play3_temp;
        play6 = play6_temp;
        if((play3 == true) && (play6 == true))
        {
            tftc5 = 3;
            zd1d1011 = 3;
        }
        else if ((play3 == true) && (play6 == false))
        {
            tftc5 = 0;
            zd1d1011 = 5;
        }
        else if ((play3 == false) && (play6 == true))
        {
            tftc5 = 5;
            zd1d1011 = 0;
        }
        else
        {
            tftc5 = 1;
            zd1d1011 = 1;
        }
        counttftc5+= tftc5;
        countzd1d1011+= zd1d1011;
    }
    cout << "TFTC = " << counttftc5 << ' ';
    cout << "  ZD4C34 = " << countzd1d1011 << endl;

            cout << "Game 5  " << ' '; // TFT Vs. ZDR1C0
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play7, i); // TFT strategy depends on other player's previous outcome
        play7_temp = player_7.play(play3, play7,i); // ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play3 = play3_temp;
        play7 = play7_temp;
        if((play3 == true) && (play7 == true))
        {
            tftc6 = 3;
            zd2c11 = 3;
        }
        else if ((play3 == true) && (play7 == false))
        {
            tftc6 = 0;
            zd2c11 = 5;
        }
        else if ((play3 == false) && (play7 == true))
        {
            tftc6 = 5;
            zd2c11 = 0;
        }
        else
        {
            tftc6 = 1;
            zd2c11 = 1;
        }
        counttftc6+= tftc6;
        countzd2c11+= zd2c11;
    }
    cout << "TFTC = " << counttftc6 << ' ';
    cout << "  ZDR1C0 = " << countzd2c11 << endl;

  cout << "Game 6  " << ' '; // TFT Vs. ZDR2C0
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play8,i); // TFT strategy depends on other player's previous outcome
        play8_temp = player_8.play(play3, play8,i); // ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play3 = play3_temp;
        play8 = play8_temp;
        if((play3 == true) && (play8 == true))
        {
            tftc7 = 3;
            zd2d11 = 3;
        }
        else if ((play3 == true) && (play8 == false))
        {
            tftc7 = 0;
            zd2d11 = 5;
        }
        else if ((play3 == false) && (play8 == true))
        {
            tftc7 = 5;
            zd2d11 = 0;
        }
        else
        {
            tftc7 = 1;
            zd2d11 = 1;
        }
        counttftc7+= tftc7;
        countzd2d11+= zd2d11;
    }
    cout << "TFTC = " << counttftc7 << ' ';
    cout << "  ZDR2C0 = " << countzd2d11 << endl;

cout << "Game 7  " << ' '; // TFT Vs. ZDSC
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play9, i); // TFT strategy depends on other player's previous outcome
        play9_temp = player_9.play(play3, play9,i); // ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play3 = play3_temp;
        play9 = play9_temp;
        if((play3 == true) && (play9 == true))
        {
            tftc8 = 3;
            zd4c11 = 3;
        }
        else if ((play3 == true) && (play9 == false))
        {
            tftc8 = 0;
            zd4c11 = 5;
        }
        else if ((play3 == false) && (play9 == true))
        {
            tftc8 = 5;
            zd4c11 = 0;
        }
        else
        {
            tftc8 = 1;
            zd4c11 = 1;
        }
        counttftc8+= tftc8;
        countzd4c11+= zd4c11;
    }
    cout << "TFTC = " << counttftc8 << ' ';
    cout << "  ZDSC = " << countzd4c11 << endl;

cout << "Game 8  " << ' '; // TFT Vs. ZD2P9
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play10, i); // TFT strategy depends on other player's previous outcome
        play10_temp = player_10.play(play3, play10,i); // ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play3 = play3_temp;
        play10 = play10_temp;
        if((play3 == true) && (play10 == true))
        {
            tftc9 = 3;
            zd4d11 = 3;
        }
        else if ((play3 == true) && (play10 == false))
        {
            tftc9 = 0;
            zd4d11 = 5;
        }
        else if ((play3 == false) && (play10 == true))
        {
            tftc9 = 5;
            zd4d11 = 0;
        }
        else
        {
            tftc9 = 1;
            zd4d11 = 1;
        }
        counttftc9+= tftc9;
        countzd4d11+= zd4d11;
    }
    cout << "TFTC = " << counttftc9 << ' ';
    cout << "  ZD2P9 = " << countzd4d11 << endl;

    cout << "Game 9  " << ' '; // TFT Vs. ZD4P17
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play11, i); // TFT strategy depends on other player's previous outcome
        play11_temp = player_11.play(play3, play11,i); // ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play3 = play3_temp;
        play11 = play11_temp;
        if((play3 == true) && (play11 == true))
        {
            tftc10 = 3;
            zdR1c11 = 3;
        }
        else if ((play3 == true) && (play11 == false))
        {
            tftc10 = 0;
            zdR1c11 = 5;
        }
        else if ((play3 == false) && (play11 == true))
        {
            tftc10 = 5;
            zdR1c11 = 0;
        }
        else
        {
            tftc10 = 1;
            zdR1c11 = 1;
        }
        counttftc10+= tftc10;
        countzdR1c11+= zdR1c11;
    }
    cout << "TFTC = " << counttftc10 << ' ';
    cout << "  ZD4P17 = " << countzdR1c11 << endl;

cout << "Game 10  " << ' '; // TFT Vs. ZD1R10
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play12, i); // TFT strategy depends on other player's previous outcome
        play12_temp = player_12.play(play3, play12,i); // ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play3 = play3_temp;
        play12 = play12_temp;
        if((play3 == true) && (play12 == true))
        {
            tftc11= 3;
            zdR1d11 = 3;
        }
        else if ((play3 == true) && (play12 == false))
        {
            tftc11 = 0;
            zdR1d11 = 5;
        }
        else if ((play3 == false) && (play12 == true))
        {
            tftc11 = 5;
            zdR1d11 = 0;
        }
        else
        {
            tftc11 = 1;
            zdR1d11 = 1;
        }
        counttftc11+= tftc11;
        countzdR1d11+= zdR1d11;
    }
    cout << "TFTC = " << counttftc11 << ' ';
    cout << "  ZD1R10 = " << countzdR1d11 << endl;

    cout << "Game 11  " << ' '; // TFT Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play13, i); // TFT strategy depends on other player's previous outcome
        play13_temp = player_13.play(play3, play13,i); // ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play3 = play3_temp;
        play13 = play13_temp;
        if((play3 == true) && (play13 == true))
        {
            tftc12= 3;
            zdR2c11 = 3;
        }
        else if ((play3 == true) && (play13 == false))
        {
            tftc12 = 0;
            zdR2c11 = 5;
        }
        else if ((play3 == false) && (play13 == true))
        {
            tftc12 = 5;
            zdR2c11 = 0;
        }
        else
        {
            tftc12 = 1;
            zdR2c11 = 1;
        }
        counttftc12+= tftc12;
        countzdR2c11+= zdR2c11;
    }
    cout << "TFTC = " << counttftc12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c11 << endl;

cout << "Game 12  " << ' '; // TFT Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play14,i); // TFT strategy depends on other player's previous outcome
        play14_temp = player_14.play(play3, play14,i); // ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play3 = play3_temp;
        play14 = play14_temp;
        if((play3 == true) && (play14 == true))
        {
            tftc13= 3;
            zdR2d11 = 3;
        }
        else if ((play3 == true) && (play14 == false))
        {
            tftc13 = 0;
            zdR2d11 = 5;
        }
        else if ((play3 == false) && (play14 == true))
        {
            tftc13 = 5;
            zdR2d11 = 0;
        }
        else
        {
            tftc13 = 1;
            zdR2d11 = 1;
        }
        counttftc13+= tftc13;
        countzdR2d11+= zdR2d11;
    }
    cout << "TFTC = " << counttftc13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d11 << endl;

cout << "Game 13  " << ' '; // TFT Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play3_temp = player_3.play(play15,i); // TFT strategy depends on other player's previous outcome
        play15_temp = player_15.play(play3, play15,i); // ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play3 = play3_temp;
        play15 = play15_temp;
        if((play3 == true) && (play15 == true))
        {
            tftc14= 3;
            zd2R711 = 3;
        }
        else if ((play3 == true) && (play15 == false))
        {
            tftc14 = 0;
            zd2R711 = 5;
        }
        else if ((play3 == false) && (play15 == true))
        {
            tftc14 = 5;
            zd2R711 = 0;
        }
        else
        {
            tftc14 = 1;
            zd2R711 = 1;
        }
        counttftc14+= tftc14;
        countzd2R711+= zd2R711;
    }
    cout << "TFTC = " << counttftc14 << ' ';
    cout << "  ZD2R7 = " << countzd2R711 << endl;

cout << "ROUND 4" << endl;
        cout << "Game 1  " << ' '; // ZD1C10 Vs. ZD1C10
    for(int i = 0; i<100; i++)
    {
        play4_temp = player_4.play(play4, play4, i); // ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play4_temp = player_4.play(play4, play4, i);// ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play4 = play4_temp;
        play4 = play4_temp;
        if((play4 == true) && (play4 == true))
        {
            tftd3 = 3;
            tftd111 = 3;
        }
        else if ((play4 == true) && (play4 == false))
        {
            tftd3 = 0;
            tftd111 = 5;
        }
        else if ((play4 == false) && (play4 == true))
        {
            tftd3 = 5;
            tftd111 = 0;
        }
        else
        {
            tftd3 = 1;
            tftd111 = 1;
        }
        counttftd3+= tftd3;
        counttftd111+= tftd111;
    }
    cout << "ZD1C10 = " << counttftd3 << ' ';
    cout << "  ZD1C10 = " << counttftd111 << endl;

    cout << "Game 2  " << ' '; // ZD1C10 Vs. ZD2C18
    for(int i = 0; i<100; i++)
    {
        play4_temp = player_4.play(play5, play4, i); // ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play5_temp = player_5.play(play4, play5,i);// ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play4 = play4_temp;
        play5 = play5_temp;
        if((play4 == true) && (play5 == true))
        {
            tftd4 = 3;
            zd1c10111 = 3;
        }
        else if ((play4 == true) && (play5 == false))
        {
            tftd4 = 0;
            zd1c10111 = 5;
        }
        else if ((play4 == false) && (play5 == true))
        {
            tftd4 = 5;
            zd1c10111 = 0;
        }
        else
        {
            tftd4 = 1;
            zd1c10111 = 1;
        }
        counttftd4+= tftd4;
        countzd1c10111+= zd1c10111;
    }
    cout << "ZD1C10 = " << counttftd4 << ' ';
    cout << "  ZD2C18 = " << countzd1c10111 << endl;

    cout << "Game 3  " << ' '; // ZD1C10 Vs. ZD4C34
    for(int i = 0; i<100; i++)
    {
        play4_temp = player_4.play(play6,play4,i); // ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play6_temp = player_6.play(play4, play6,i);// ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play4 = play4_temp;
        play6 = play6_temp;
        if((play4 == true) && (play6 == true))
        {
            tftd5 = 3;
            zd1d10111 = 3;
        }
        else if ((play4 == true) && (play6 == false))
        {
            tftd5 = 0;
            zd1d10111 = 5;
        }
        else if ((play4 == false) && (play6 == true))
        {
            tftd5 = 5;
            zd1d10111 = 0;
        }
        else
        {
            tftd5 = 1;
            zd1d10111 = 1;
        }
        counttftd5+= tftd5;
        countzd1d10111+= zd1d10111;
    }
    cout << "ZD1C10 = " << counttftd5 << ' ';
    cout << "  ZD4C34 = " << countzd1d10111 << endl;

            cout << "Game 4  " << ' '; // ZD1C10 Vs. ZDR1C0
    for(int i = 0; i<100; i++)
    {
        play4_temp = player_4.play(play7,play4, i); // ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play7_temp = player_7.play(play4, play7,i);// ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play4 = play4_temp;
        play7 = play7_temp;
        if((play4 == true) && (play7 == true))
        {
            tftd6 = 3;
            zd2c111 = 3;
        }
        else if ((play4 == true) && (play7 == false))
        {
            tftd6 = 0;
            zd2c111 = 5;
        }
        else if ((play4 == false) && (play7 == true))
        {
            tftd6 = 5;
            zd2c111 = 0;
        }
        else
        {
            tftd6 = 1;
            zd2c111 = 1;
        }
        counttftd6+= tftd6;
        countzd2c111+= zd2c111;
    }
    cout << "ZD1C10 = " << counttftd6 << ' ';
    cout << "  ZDR1C0 = " << countzd2c111 << endl;

            cout << "Game 5  " << ' '; // ZD1C10 Vs. ZDR2C0
    for(int i = 0; i<100; i++)
    {
        play4_temp = player_4.play(play8,play4,i); // ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play8_temp = player_8.play(play4, play8,i);// ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play4 = play4_temp;
        play8 = play8_temp;
        if((play4 == true) && (play8 == true))
        {
            tftd7 = 3;
            zd2d111 = 3;
        }
        else if ((play4 == true) && (play8 == false))
        {
            tftd7 = 0;
            zd2d111 = 5;
        }
        else if ((play4 == false) && (play8 == true))
        {
            tftd7 = 5;
            zd2d111 = 0;
        }
        else
        {
            tftd7 = 1;
            zd2d111 = 1;
        }
        counttftd7+= tftd7;
        countzd2d111+= zd2d111;
    }
    cout << "ZD1C10 = " << counttftd7 << ' ';
    cout << "  ZDR2C0 = " << countzd2d111 << endl;

cout << "Game 6  " << ' '; // ZD1C10 Vs. ZDSC
    for(int i = 0; i<100; i++)
    {
        play4_temp = player_4.play(play9, play4, i); // ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play9_temp = player_9.play(play4, play9,i);// ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play4 = play4_temp;
        play9 = play9_temp;
        if((play4 == true) && (play9 == true))
        {
            tftd8 = 3;
            zd4c111 = 3;
        }
        else if ((play4 == true) && (play9 == false))
        {
            tftd8 = 0;
            zd4c111 = 5;
        }
        else if ((play4 == false) && (play9 == true))
        {
            tftd8 = 5;
            zd4c111 = 0;
        }
        else
        {
            tftd8 = 1;
            zd4c111 = 1;
        }
        counttftd8+= tftd8;
        countzd4c111+= zd4c111;
    }
    cout << "ZD1C10 = " << counttftd8 << ' ';
    cout << "  ZDSC = " << countzd4c111 << endl;

cout << "Game 7  " << ' '; // ZD1C10 Vs. ZD2P9
    for(int i = 0; i<100; i++)
    {
        play4_temp = player_4.play(play10, play4, i); // ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play10_temp = player_10.play(play4, play10,i);// ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play4 = play4_temp;
        play10 = play10_temp;
        if((play4 == true) && (play10 == true))
        {
            tftd9 = 3;
            zd4d111 = 3;
        }
        else if ((play4 == true) && (play10 == false))
        {
            tftd9 = 0;
            zd4d111 = 5;
        }
        else if ((play4 == false) && (play10 == true))
        {
            tftd9 = 5;
            zd4d111 = 0;
        }
        else
        {
            tftd9 = 1;
            zd4d111 = 1;
        }
        counttftd9+= tftd9;
        countzd4d111+= zd4d111;
    }
    cout << "ZD1C10 = " << counttftd9 << ' ';
    cout << "  ZD2P9 = " << countzd4d111 << endl;

    cout << "Game 8  " << ' '; // ZD1C10 Vs. ZD4P17
    for(int i = 0; i<100; i++)
    {
        play4_temp = player_4.play(play11, play4,i); //ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play11_temp = player_11.play(play4, play11,i);// ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play4 = play4_temp;
        play11 = play11_temp;
        if((play4 == true) && (play11 == true))
        {
            tftd10 = 3;
            zdR1c111 = 3;
        }
        else if ((play4 == true) && (play11 == false))
        {
            tftd10 = 0;
            zdR1c111 = 5;
        }
        else if ((play4 == false) && (play11 == true))
        {
            tftd10 = 5;
            zdR1c111 = 0;
        }
        else
        {
            tftd10 = 1;
            zdR1c111 = 1;
        }
        counttftd10+= tftd10;
        countzdR1c111+= zdR1c111;
    }
    cout << "ZD1C10 = " << counttftd10 << ' ';
    cout << "  ZD4P17 = " << countzdR1c111 << endl;

    cout << "Game 9  " << ' '; //ZD1C10 Vs. ZD1R10
    for(int i = 0; i<100; i++)
    {
        play4_temp = player_4.play(play12, play4,i); //ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play12_temp = player_12.play(play4, play12,i); //ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play4 = play4_temp;
        play12 = play12_temp;
        if((play4 == true) && (play12 == true))
        {
            tftd011= 3;
            zdR1d111 = 3;
        }
        else if ((play4 == true) && (play12 == false))
        {
            tftd011 = 0;
            zdR1d111 = 5;
        }
        else if ((play4 == false) && (play12 == true))
        {
            tftd011 = 5;
            zdR1d111 = 0;
        }
        else
        {
            tftd011 = 1;
            zdR1d111 = 1;
        }
        counttftd011+= tftd011;
        countzdR1d111+= zdR1d111;
    }
    cout << "ZD1C10 = " << counttftd011 << ' ';
    cout << "  ZD1R10 = " << countzdR1d111 << endl;

    cout << "Game 10  " << ' '; // ZD1C10 Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play4_temp = player_4.play(play13, play4, i); //ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play13_temp = player_13.play(play4, play13,i);//ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play4 = play4_temp;
        play13 = play13_temp;
        if((play4 == true) && (play13 == true))
        {
            tftd12= 3;
            zdR2c111 = 3;
        }
        else if ((play4 == true) && (play13 == false))
        {
            tftd12 = 0;
            zdR2c111 = 5;
        }
        else if ((play4 == false) && (play13 == true))
        {
            tftd12 = 5;
            zdR2c111 = 0;
        }
        else
        {
            tftd12 = 1;
            zdR2c111 = 1;
        }
        counttftd12+= tftd12;
        countzdR2c111+= zdR2c111;
    }
    cout << "ZD1C10 = " << counttftd12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c111 << endl;

    cout << "Game 11  " << ' '; // ZD1C10 Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play4_temp = player_4.play(play14,play4,i); //ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play14_temp = player_14.play(play4, play14,i); //ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play4 = play4_temp;
        play14 = play14_temp;
        if((play4 == true) && (play14 == true))
        {
            tftd13= 3;
            zdR2d111 = 3;
        }
        else if ((play4 == true) && (play14 == false))
        {
            tftd13 = 0;
            zdR2d111 = 5;
        }
        else if ((play4 == false) && (play14 == true))
        {
            tftd13 = 5;
            zdR2d111 = 0;
        }
        else
        {
            tftd13 = 1;
            zdR2d111 = 1;
        }
        counttftd13+= tftd13;
        countzdR2d111+= zdR2d111;
    }
    cout << "ZD1C10 = " << counttftd13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d111 << endl;

cout << "Game 12  " << ' '; // ZD1C10 Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play4_temp = player_4.play(play15,play4,i); //ZD1C10 strategy depends on other player's previous outcome along with their own previous choice
        play15_temp = player_15.play(play4, play15,i); //ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play4 = play4_temp;
        play15 = play15_temp;
        if((play4 == true) && (play15 == true))
        {
            tftd14= 3;
            zd2R7111 = 3;
        }
        else if ((play4 == true) && (play15 == false))
        {
            tftd14 = 0;
            zd2R7111 = 5;
        }
        else if ((play4 == false) && (play15 == true))
        {
            tftd14 = 5;
            zd2R7111 = 0;
        }
        else
        {
            tftd14 = 1;
            zd2R7111 = 1;
        }
        counttftd14+= tftd14;
        countzd2R7111+= zd2R7111;
    }
    cout << "ZD1C10 = " << counttftd14 << ' ';
    cout << "  ZD2R7 = " << countzd2R7111 << endl;

cout << "ROUND 5" << endl;
    cout << "Game 1  " << ' '; // ZD2C18 Vs. ZD2C18
    for(int i = 0; i<100; i++)
    {
        play5_temp = player_5.play(play5, play5,i); //ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play5_temp = player_5.play(play5, play5,i); //ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play5 = play5_temp;
        play5 = play5_temp;
        if((play5 == true) && (play5 == true))
        {
            zd1c4 = 3;
            zd1c101111 = 3;
        }
        else if ((play5 == true) && (play5 == false))
        {
            zd1c4 = 0;
            zd1c101111 = 5;
        }
        else if ((play5 == false) && (play5 == true))
        {
            zd1c4 = 5;
            zd1c101111 = 0;
        }
        else
        {
            zd1c4 = 1;
            zd1c101111 = 1;
        }
        countzd1c4+= zd1c4;
        countzd1c101111+= zd1c101111;
    }
    cout << "ZD2C18 = " << countzd1c4 << ' ';
    cout << "  ZD2C18 = " << countzd1c101111 << endl;

    cout << "Game 2  " << ' '; // ZD2C18 Vs. ZD4C34
    for(int i = 0; i<100; i++)
    {
        play5_temp = player_5.play(play6, play5,i); //ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play6_temp = player_6.play(play5, play6,i); //ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play5 = play5_temp;
        play6 = play6_temp;
        if((play5 == true) && (play6 == true))
        {
            zd1c5 = 3;
            zd1d101111 = 3;
        }
        else if ((play5 == true) && (play6 == false))
        {
            zd1c5 = 0;
            zd1d101111 = 5;
        }
        else if ((play5 == false) && (play6 == true))
        {
            zd1c5 = 5;
            zd1d101111 = 0;
        }
        else
        {
            zd1c5 = 1;
            zd1d101111 = 1;
        }
        countzd1c5+= zd1c5;
        countzd1d101111+= zd1d101111;
    }
    cout << "ZD2C18 = " << countzd1c5 << ' ';
    cout << "  ZD4C34 = " << countzd1d101111 << endl;

    cout << "Game 3  " << ' '; // ZD2C18 Vs. ZDR1C0
    for(int i = 0; i<100; i++)
    {
        play5_temp = player_5.play(play7, play5, i); //ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play7_temp = player_7.play(play5, play7,i); //ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play5 = play5_temp;
        play7 = play7_temp;
        if((play5 == true) && (play7 == true))
        {
            zd1c6 = 3;
            zd2c1111 = 3;
        }
        else if ((play5 == true) && (play7 == false))
        {
            zd1c6 = 0;
            zd2c1111 = 5;
        }
        else if ((play5 == false) && (play7 == true))
        {
            zd1c6 = 5;
            zd2c1111 = 0;
        }
        else
        {
            zd1c6 = 1;
            zd2c1111 = 1;
        }
        countzd1c6+= zd1c6;
        countzd2c1111+= zd2c1111;
    }
    cout << "ZD2C18 = " << countzd1c6 << ' ';
    cout << "  ZDR1C0 = " << countzd2c1111 << endl;

    cout << "Game 4  " << ' '; // ZD2C18 Vs. ZDR2C0
    for(int i = 0; i<100; i++)
    {
        play5_temp = player_5.play(play8, play5, i); //ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play8_temp = player_8.play(play5, play8,i); //ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play5 = play5_temp;
        play8 = play8_temp;
        if((play5 == true) && (play8 == true))
        {
            zd1c7 = 3;
            zd2d1111 = 3;
        }
        else if ((play5 == true) && (play8 == false))
        {
            zd1c7 = 0;
            zd2d1111 = 5;
        }
        else if ((play5 == false) && (play8 == true))
        {
            zd1c7 = 5;
            zd2d1111 = 0;
        }
        else
        {
            zd1c7 = 1;
            zd2d1111 = 1;
        }
        countzd1c7+= zd1c7;
        countzd2d1111+= zd2d1111;
    }
    cout << "ZD2C18 = " << countzd1c7 << ' ';
    cout << "  ZDR2C0 = " << countzd2d1111 << endl;

cout << "Game 5  " << ' '; // ZD2C18 Vs. ZDSC
    for(int i = 0; i<100; i++)
    {
        play5_temp = player_5.play(play9, play5, i); //ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play9_temp = player_9.play(play5, play9,i); //ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play5 = play5_temp;
        play9 = play9_temp;
        if((play5 == true) && (play9 == true))
        {
            zd1c8 = 3;
            zd4c1111 = 3;
        }
        else if ((play5 == true) && (play9 == false))
        {
            zd1c8 = 0;
            zd4c1111 = 5;
        }
        else if ((play5 == false) && (play9 == true))
        {
            zd1c8 = 5;
            zd4c1111 = 0;
        }
        else
        {
            zd1c8 = 1;
            zd4c1111 = 1;
        }
        countzd1c8+= zd1c8;
        countzd4c1111+= zd4c1111;
    }
    cout << "ZD2C18 = " << countzd1c8 << ' ';
    cout << "  ZDSC = " << countzd4c1111 << endl;

cout << "Game 6  " << ' '; // ZD2C18 Vs. ZD2P9
    for(int i = 0; i<100; i++)
    {
        play5_temp = player_5.play(play10, play5, i); //ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play10_temp = player_10.play(play5, play10,i); //ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play5 = play5_temp;
        play10 = play10_temp;
        if((play5 == true) && (play10 == true))
        {
            zd1c9 = 3;
            zd4d1111 = 3;
        }
        else if ((play5 == true) && (play10 == false))
        {
            zd1c9 = 0;
            zd4d1111 = 5;
        }
        else if ((play5 == false) && (play10 == true))
        {
            zd1c9 = 5;
            zd4d1111 = 0;
        }
        else
        {
            zd1c9 = 1;
            zd4d1111 = 1;
        }
        countzd1c9+= zd1c9;
        countzd4d1111+= zd4d1111;
    }
    cout << "ZD2C18 = " << countzd1c9 << ' ';
    cout << "  ZD2P9 = " << countzd4d1111 << endl;

    cout << "Game 7  " << ' '; // ZD2C18 Vs. ZD4P17
    for(int i = 0; i<100; i++)
    {
        play5_temp = player_5.play(play11, play5,i); //ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play11_temp = player_11.play(play5, play11,i); //ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play5 = play5_temp;
        play11 = play11_temp;
        if((play5 == true) && (play11 == true))
        {
            zd1c210 = 3;
            zdR1c1111 = 3;
        }
        else if ((play5 == true) && (play11 == false))
        {
            zd1c210 = 0;
            zdR1c1111 = 5;
        }
        else if ((play5 == false) && (play11 == true))
        {
            zd1c210 = 5;
            zdR1c1111 = 0;
        }
        else
        {
            zd1c210 = 1;
            zdR1c1111 = 1;
        }
        countzd1c210+= zd1c210;
        countzdR1c1111+= zdR1c1111;
    }
    cout << "ZD2C18 = " << countzd1c210 << ' ';
    cout << "  ZD4P17 = " << countzdR1c1111 << endl;

   cout << "Game 8  " << ' '; // ZD2C18 Vs. ZD1R10
    for(int i = 0; i<100; i++)
    {
        play5_temp = player_5.play(play12, play5, i); //ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play12_temp = player_12.play(play5, play12,i); //ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play5 = play5_temp;
        play12 = play12_temp;
        if((play5 == true) && (play12 == true))
        {
            zd1c11= 3;
            zdR1d1111 = 3;
        }
        else if ((play5 == true) && (play12 == false))
        {
            zd1c11 = 0;
            zdR1d1111 = 5;
        }
        else if ((play5 == false) && (play12 == true))
        {
            zd1c11 = 5;
            zdR1d1111 = 0;
        }
        else
        {
            zd1c11 = 1;
            zdR1d1111 = 1;
        }
        countzd1c11+= zd1c11;
        countzdR1d1111+= zdR1d1111;
    }
    cout << "ZD2C18 = " << countzd1c11 << ' ';
    cout << "  ZD1R10 = " << countzdR1d1111 << endl;

    cout << "Game 9  " << ' '; // ZD2C18 Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play5_temp = player_5.play(play13, play5, i); //ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play13_temp = player_13.play(play5, play13,i); //ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play5 = play5_temp;
        play13 = play13_temp;
        if((play5 == true) && (play13 == true))
        {
            zd1c12= 3;
            zdR2c1111 = 3;
        }
        else if ((play5 == true) && (play13 == false))
        {
            zd1c12 = 0;
            zdR2c1111 = 5;
        }
        else if ((play5 == false) && (play13 == true))
        {
            zd1c12 = 5;
            zdR2c1111 = 0;
        }
        else
        {
            zd1c12 = 1;
            zdR2c1111 = 1;
        }
        countzd1c12+= zd1c12;
        countzdR2c1111+= zdR2c1111;
    }
    cout << "ZD2C18 = " << countzd1c12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c1111 << endl;

   cout << "Game 10  " << ' '; // ZD2C18 Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play5_temp = player_5.play(play14, play5, i); //ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play14_temp = player_14.play(play5, play14,i); //ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play5 = play5_temp;
        play14 = play14_temp;
        if((play5 == true) && (play14 == true))
        {
            zd1c13= 3;
            zdR2d1111 = 3;
        }
        else if ((play5 == true) && (play14 == false))
        {
            zd1c13 = 0;
            zdR2d1111 = 5;
        }
        else if ((play5 == false) && (play14 == true))
        {
            zd1c13 = 5;
            zdR2d1111 = 0;
        }
        else
        {
            zd1c13 = 1;
            zdR2d1111 = 1;
        }
        countzd1c13+= zd1c13;
        countzdR2d1111+= zdR2d1111;
    }
    cout << "ZD2C18 = " << countzd1c13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d1111 << endl;

cout << "Game 11  " << ' '; // ZD2C18 Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play5_temp = player_5.play(play15, play5, i); //ZD2C18 strategy depends on other player's previous outcome along with their own previous choice
        play15_temp = player_15.play(play5, play15,i); //ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play5 = play5_temp;
        play15 = play15_temp;
        if((play5 == true) && (play15 == true))
        {
            zd1c14 = 3;
            zd2R71111 = 3;
        }
        else if ((play5 == true) && (play15 == false))
        {
            zd1c14 = 0;
            zd2R71111 = 5;
        }
        else if ((play5 == false) && (play15 == true))
        {
            zd1c14 = 5;
            zd2R71111 = 0;
        }
        else
        {
            zd1c14 = 1;
            zd2R71111 = 1;
        }
        countzd1c14+= zd1c14;
        countzd2R71111+= zd2R71111;
    }
    cout << "ZD2C18 = " << countzd1c14 << ' ';
    cout << "  ZD2R7 = " << countzd2R71111 << endl;


cout << "ROUND 6" << endl; // ZD4C34 Vs. ZD4C34
            cout << "Game 1  " << ' ';
    for(int i = 0; i<100; i++)
    {
        play6_temp = player_6.play(play6, play6,i); //ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play6_temp = player_6.play(play6, play6,i); //ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play6 = play6_temp;
        play6 = play6_temp;
        if((play6 == true) && (play6 == true))
        {
            zd1d5 = 3;
            zd1d1011111 = 3;
        }
        else if ((play6 == true) && (play6 == false))
        {
            zd1d5 = 0;
            zd1d1011111 = 5;
        }
        else if ((play6 == false) && (play6 == true))
        {
            zd1d5 = 5;
            zd1d1011111 = 0;
        }
        else
        {
            zd1d5 = 1;
            zd1d1011111 = 1;
        }
        countzd1d5+= zd1d5;
        countzd1d1011111+= zd1d1011111;
    }
    cout << "ZD4C34 = " << countzd1d5 << ' ';
    cout << "  ZD4C34 = " << countzd1d1011111 << endl;

            cout << "Game 2  " << ' '; // ZD4C34 Vs. ZDR1C0
    for(int i = 0; i<100; i++)
    {
        play6_temp = player_6.play(play7, play6, i); //ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play7_temp = player_7.play(play6, play7,i); //ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play6 = play6_temp;
        play7 = play7_temp;
        if((play6 == true) && (play7 == true))
        {
            zd1d6 = 3;
            zd2c11111 = 3;
        }
        else if ((play6 == true) && (play7 == false))
        {
            zd1d6 = 0;
            zd2c11111 = 5;
        }
        else if ((play6 == false) && (play7 == true))
        {
            zd1d6 = 5;
            zd2c11111 = 0;
        }
        else
        {
            zd1d6 = 1;
            zd2c11111 = 1;
        }
        countzd1d6+= zd1d6;
        countzd2c11111+= zd2c11111;
    }
    cout << "ZD4C34 = " << countzd1d6 << ' ';
    cout << "  ZDR1C0 = " << countzd2c11111 << endl;

            cout << "Game 3  " << ' '; // ZD4C34 Vs. ZDR2C0
    for(int i = 0; i<100; i++)
    {
        play6_temp = player_6.play(play8, play6, i); //ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play8_temp = player_8.play(play6, play8,i); //ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play6 = play6_temp;
        play8 = play8_temp;
        if((play6 == true) && (play8 == true))
        {
            zd1d7 = 3;
            zd2d11111 = 3;
        }
        else if ((play6 == true) && (play8 == false))
        {
            zd1d7 = 0;
            zd2d11111 = 5;
        }
        else if ((play6 == false) && (play8 == true))
        {
            zd1d7 = 5;
            zd2d11111 = 0;
        }
        else
        {
            zd1d7 = 1;
            zd2d11111 = 1;
        }
        countzd1d7+= zd1d7;
        countzd2d11111+= zd2d11111;
    }
    cout << "ZD4C34 = " << countzd1d7 << ' ';
    cout << "  ZDR2C0 = " << countzd2d11111 << endl;

cout << "Game 4  " << ' '; // ZD4C34 Vs. ZDSC
    for(int i = 0; i<100; i++)
    {
        play6_temp = player_6.play(play9, play6, i); //ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play9_temp = player_9.play(play6, play9,i); //ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play6 = play6_temp;
        play9 = play9_temp;
        if((play6 == true) && (play9 == true))
        {
            zd1d8 = 3;
            zd4c11111 = 3;
        }
        else if ((play6 == true) && (play9 == false))
        {
            zd1d8 = 0;
            zd4c11111 = 5;
        }
        else if ((play6 == false) && (play9 == true))
        {
            zd1d8 = 5;
            zd4c11111 = 0;
        }
        else
        {
            zd1d8 = 1;
            zd4c11111 = 1;
        }
        countzd1d8+= zd1d8;
        countzd4c11111+= zd4c11111;
    }
    cout << "ZD4C34 = " << countzd1d8 << ' ';
    cout << "  ZDSC = " << countzd4c11111 << endl;

cout << "Game 5  " << ' '; // ZD4C34 Vs. ZD2P9
    for(int i = 0; i<100; i++)
    {
        play6_temp = player_6.play(play10, play6, i); //ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play10_temp = player_10.play(play6, play10,i); //ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play6 = play6_temp;
        play10 = play10_temp;
        if((play6 == true) && (play10 == true))
        {
            zd1d9 = 3;
            zd4d11111 = 3;
        }
        else if ((play6 == true) && (play10 == false))
        {
            zd1d9 = 0;
            zd4d11111 = 5;
        }
        else if ((play6 == false) && (play10 == true))
        {
            zd1d9 = 5;
            zd4d11111 = 0;
        }
        else
        {
            zd1d9 = 1;
            zd4d11111 = 1;
        }
        countzd1d9+= zd1d9;
        countzd4d11111+= zd4d11111;
    }
    cout << "ZD4C34 = " << countzd1d9 << ' ';
    cout << "  ZD2P9 = " << countzd4d11111 << endl;

    cout << "Game 6  " << ' '; // ZD4C34 Vs. ZD4P17
    for(int i = 0; i<100; i++)
    {
        play6_temp = player_6.play(play11, play6,i); //ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play11_temp = player_11.play(play6, play11,i); //ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play6 = play6_temp;
        play11 = play11_temp;
        if((play6 == true) && (play11 == true))
        {
            zd1d110 = 3;
            zdR1c11111 = 3;
        }
        else if ((play6 == true) && (play11 == false))
        {
            zd1d110 = 0;
            zdR1c11111 = 5;
        }
        else if ((play6 == false) && (play11 == true))
        {
            zd1d110 = 5;
            zdR1c11111 = 0;
        }
        else
        {
            zd1d110 = 1;
            zdR1c11111 = 1;
        }
        countzd1d110+= zd1d110;
        countzdR1c11111+= zdR1c11111;
    }
    cout << "ZD4C34 = " << countzd1d110 << ' ';
    cout << "  ZD4P17 = " << countzdR1c11111 << endl;

    cout << "Game 7  " << ' '; // ZD4C34 Vs. ZD1R10
    for(int i = 0; i<100; i++)
    {
        play6_temp = player_6.play(play12, play6, i); //ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play12_temp = player_12.play(play6, play12,i); //ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play6 = play6_temp;
        play12 = play12_temp;
        if((play6 == true) && (play12 == true))
        {
            zd1d11= 3;
            zdR1d11111 = 3;
        }
        else if ((play6 == true) && (play12 == false))
        {
            zd1d11 = 0;
            zdR1d11111 = 5;
        }
        else if ((play6 == false) && (play12 == true))
        {
            zd1d11 = 5;
            zdR1d11111 = 0;
        }
        else
        {
            zd1d11 = 1;
            zdR1d11111 = 1;
        }
        countzd1d11+= zd1d11;
        countzdR1d11111+= zdR1d11111;
    }
    cout << "ZD4C34 = " << countzd1d11 << ' ';
    cout << "  ZD1R10 = " << countzdR1d11111 << endl;

    cout << "Game 8  " << ' '; // ZD4C34 Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play6_temp = player_6.play(play13, play6, i); //ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play13_temp = player_13.play(play6, play13,i); //ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play6 = play6_temp;
        play13 = play13_temp;
        if((play6 == true) && (play13 == true))
        {
            zd1d12= 3;
            zdR2c11111 = 3;
        }
        else if ((play6 == true) && (play13 == false))
        {
            zd1d12 = 0;
            zdR2c11111 = 5;
        }
        else if ((play6 == false) && (play13 == true))
        {
            zd1d12 = 5;
            zdR2c11111 = 0;
        }
        else
        {
            zd1d12 = 1;
            zdR2c11111 = 1;
        }
        countzd1d12+= zd1d12;
        countzdR2c11111+= zdR2c11111;
    }
    cout << "ZD4C34 = " << countzd1d12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c11111 << endl;

    cout << "Game 9  " << ' '; // ZD4C34 Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play6_temp = player_6.play(play14, play6, i); //ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play14_temp = player_14.play(play6, play14,i); //ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play6 = play6_temp;
        play14 = play14_temp;
        if((play6 == true) && (play14 == true))
        {
            zd1d13= 3;
            zdR2d11111 = 3;
        }
        else if ((play6 == true) && (play14 == false))
        {
            zd1d13 = 0;
            zdR2d11111 = 5;
        }
        else if ((play6 == false) && (play14 == true))
        {
            zd1d13 = 5;
            zdR2d11111 = 0;
        }
        else
        {
            zd1d13 = 1;
            zdR2d11111 = 1;
        }
        countzd1d13+= zd1d13;
        countzdR2d11111+= zdR2d11111;
    }
    cout << "ZD4C34 = " << countzd1d13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d11111 << endl;

    cout << "Game 10  " << ' '; // ZD4C34 Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play6_temp = player_6.play(play15, play6, i); //ZD4C34 strategy depends on other player's previous outcome along with their own previous choice
        play15_temp = player_15.play(play6, play15,i); //ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play6 = play6_temp;
        play15 = play15_temp;
        if((play6 == true) && (play15 == true))
        {
            zd1d14= 3;
            zd2R711111 = 3;
        }
        else if ((play6 == true) && (play15 == false))
        {
            zd1d14 = 0;
            zd2R711111 = 5;
        }
        else if ((play6 == false) && (play15 == true))
        {
            zd1d14 = 5;
            zd2R711111 = 0;
        }
        else
        {
            zd1d14 = 1;
            zd2R711111 = 1;
        }
        countzd1d14+= zd1d14;
        countzd2R711111+= zd2R711111;
    }
    cout << "ZD4C34 = " << countzd1d14 << ' ';
    cout << "  ZD2R7 = " << countzd2R711111 << endl;

cout << "Round 7" << endl;

    cout << "Game 1  " << ' '; // ZDR1C0 Vs. ZDR1C0
    for(int i = 0; i<100; i++)
    {
        play7_temp = player_7.play(play7, play7, i); //ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play7_temp = player_7.play(play7, play7,i); //ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play7 = play7_temp;
        play7 = play7_temp;
        if((play7 == true) && (play7 == true))
        {
            zd2c6 = 3;
            zd2c111111 = 3;
        }
        else if ((play7 == true) && (play7 == false))
        {
            zd2c6 = 0;
            zd2c111111 = 5;
        }
        else if ((play7 == false) && (play7 == true))
        {
            zd2c6 = 5;
            zd2c111111 = 0;
        }
        else
        {
            zd2c6 = 1;
            zd2c111111 = 1;
        }
        countzd2c6+= zd2c6;
        countzd2c111111+= zd2c111111;
    }
    cout << "ZDR1C0 = " << countzd2c6 << ' ';
    cout << "  ZDR1C0 = " << countzd2c111111 << endl;

cout << "Game 2  " << ' '; // ZDR1C0 Vs. ZDR2C0
    for(int i = 0; i<100; i++)
    {
        play7_temp = player_7.play(play8, play7, i); //ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play8_temp = player_8.play(play7, play8,i); //ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play7 = play7_temp;
        play8 = play8_temp;
        if((play7 == true) && (play8 == true))
        {
            zd2c7 = 3;
            zd2d111111 = 3;
        }
        else if ((play7 == true) && (play8 == false))
        {
            zd2c7 = 0;
            zd2d111111 = 5;
        }
        else if ((play7 == false) && (play8 == true))
        {
            zd2c7 = 5;
            zd2d111111 = 0;
        }
        else
        {
            zd2c7 = 1;
            zd2d111111 = 1;
        }
        countzd2c7+= zd2c7;
        countzd2d111111+= zd2d111111;
    }
    cout << "ZDR1C0 = " << countzd2c7 << ' ';
    cout << "  ZDR2C0 = " << countzd2d111111 << endl;

cout << "Game 3  " << ' '; // ZDR1C0 Vs. ZDSC
    for(int i = 0; i<100; i++)
    {
        play7_temp = player_7.play(play9, play7, i); //ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play9_temp = player_9.play(play7, play9,i); //ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play7 = play7_temp;
        play9 = play9_temp;
        if((play7 == true) && (play9 == true))
        {
            zd2c8 = 3;
            zd4c111111 = 3;
        }
        else if ((play7 == true) && (play9 == false))
        {
            zd2c8 = 0;
            zd4c111111 = 5;
        }
        else if ((play7 == false) && (play9 == true))
        {
            zd2c8 = 5;
            zd4c111111 = 0;
        }
        else
        {
            zd2c8 = 1;
            zd4c111111 = 1;
        }
        countzd2c8+= zd2c8;
        countzd4c111111+= zd4c111111;
    }
    cout << "ZDR1C0 = " << countzd2c8 << ' ';
    cout << "  ZDSC = " << countzd4c111111 << endl;

cout << "Game 4  " << ' '; // ZDR1C0 Vs. ZD2P9
    for(int i = 0; i<100; i++)
    {
        play7_temp = player_7.play(play10, play7, i); //ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play10_temp = player_10.play(play7, play10,i); //ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play7 = play7_temp;
        play10 = play10_temp;
        if((play7 == true) && (play10 == true))
        {
            zd2c9 = 3;
            zd4d111111 = 3;
        }
        else if ((play7 == true) && (play10 == false))
        {
            zd2c9 = 0;
            zd4d111111 = 5;
        }
        else if ((play7 == false) && (play10 == true))
        {
            zd2c9 = 5;
            zd4d111111 = 0;
        }
        else
        {
            zd2c9 = 1;
            zd4d111111 = 1;
        }
        countzd2c9+= zd2c9;
        countzd4d111111+= zd4d111111;
    }
    cout << "ZDR1C0 = " << countzd2c9 << ' ';
    cout << "  ZD2P9 = " << countzd4d111111 << endl;

    cout << "Game 5  " << ' '; // ZDR1C0 Vs. ZD4P17
    for(int i = 0; i<100; i++)
    {
        play7_temp = player_7.play(play11, play7,i); //ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play11_temp = player_11.play(play7, play11,i); //ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play7 = play7_temp;
        play11 = play11_temp;
        if((play7 == true) && (play11 == true))
        {
            zd2c10 = 3;
            zdR1c111111 = 3;
        }
        else if ((play7 == true) && (play11 == false))
        {
            zd2c10 = 0;
            zdR1c111111 = 5;
        }
        else if ((play7 == false) && (play11 == true))
        {
            zd2c10 = 5;
            zdR1c111111 = 0;
        }
        else
        {
            zd2c10 = 1;
            zdR1c111111 = 1;
        }
        countzd2c10+= zd2c10;
        countzdR1c111111+= zdR1c111111;
    }
    cout << "ZDR1C0 = " << countzd2c10 << ' ';
    cout << "  ZD4P17 = " << countzdR1c111111 << endl;

  cout << "Game 6  " << ' '; // ZDR1C0 Vs. ZD1R10
    for(int i = 0; i<100; i++)
    {
        play7_temp = player_7.play(play12, play7, i); //ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play12_temp = player_12.play(play7, play12,i); //ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play7 = play7_temp;
        play12 = play12_temp;
        if((play7 == true) && (play12 == true))
        {
            zd2c011= 3;
            zdR1d111111 = 3;
        }
        else if ((play7 == true) && (play12 == false))
        {
            zd2c011 = 0;
            zdR1d111111 = 5;
        }
        else if ((play7 == false) && (play12 == true))
        {
            zd2c011 = 5;
            zdR1d111111 = 0;
        }
        else
        {
            zd2c011 = 1;
            zdR1d111111 = 1;
        }
        countzd2c011+= zd2c011;
        countzdR1d111111+= zdR1d111111;
    }
    cout << "ZDR1C0 = " << countzd2c011 << ' ';
    cout << "  ZD1R10 = " << countzdR1d111111 << endl;

    cout << "Game 7  " << ' '; // ZDR1C0 Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play7_temp = player_7.play(play13, play7, i); //ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play13_temp = player_13.play(play7, play13,i); //ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play7 = play7_temp;
        play13 = play13_temp;
        if((play7 == true) && (play13 == true))
        {
            zd2c12= 3;
            zdR2c111111 = 3;
        }
        else if ((play7 == true) && (play13 == false))
        {
            zd2c12 = 0;
            zdR2c111111 = 5;
        }
        else if ((play7 == false) && (play13 == true))
        {
            zd2c12 = 5;
            zdR2c111111 = 0;
        }
        else
        {
            zd2c12 = 1;
            zdR2c111111 = 1;
        }
        countzd2c12+= zd2c12;
        countzdR2c111111+= zdR2c111111;
    }
    cout << "ZDR1C0 = " << countzd2c12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c111111 << endl;

   cout << "Game 8  " << ' '; // ZDR1C0 Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play7_temp = player_7.play(play14, play7, i); //ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play14_temp = player_14.play(play7, play14,i); //ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play7 = play7_temp;
        play14 = play14_temp;
        if((play7 == true) && (play14 == true))
        {
            zd2c13= 3;
            zdR2d111111 = 3;
        }
        else if ((play7 == true) && (play14 == false))
        {
            zd2c13 = 0;
            zdR2d111111 = 5;
        }
        else if ((play7 == false) && (play14 == true))
        {
            zd2c13 = 5;
            zdR2d111111 = 0;
        }
        else
        {
            zd2c13 = 1;
            zdR2d111111 = 1;
        }
        countzd2c13+= zd2c13;
        countzdR2d111111+= zdR2d111111;
    }
    cout << "ZDR1C0 = " << countzd2c13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d111111 << endl;

cout << "Game 9  " << ' '; // ZDR1C0 Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play7_temp = player_7.play(play15, play7, i); //ZDR1C0 strategy depends on other player's previous outcome along with their own previous choice
        play15_temp = player_15.play(play7, play15,i); //ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play7 = play7_temp;
        play15 = play15_temp;
        if((play7 == true) && (play15 == true))
        {
            zd2c14= 3;
            zd2R7111111 = 3;
        }
        else if ((play7 == true) && (play15 == false))
        {
            zd2c14 = 0;
            zd2R7111111 = 5;
        }
        else if ((play7 == false) && (play15 == true))
        {
            zd2c14 = 5;
            zd2R7111111 = 0;
        }
        else
        {
            zd2c14 = 1;
            zd2R7111111 = 1;
        }
        countzd2c14+= zd2c14;
        countzd2R7111111+= zd2R7111111;
    }
    cout << "ZDR1C0 = " << countzd2c14 << ' ';
    cout << "  ZD2R7 = " << countzd2R7111111 << endl;


cout << "ROUND 8" << endl;

    cout << "Game 1  " << ' '; // ZDR2C0 Vs. ZDR2C0
    for(int i = 0; i<100; i++)
    {
        play8_temp = player_8.play(play8, play8, i); //ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play8_temp = player_8.play(play8, play8,i); //ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play8 = play8_temp;
        play8 = play8_temp;
        if((play8 == true) && (play8 == true))
        {
            zd2d7 = 3;
            zd2d1111111 = 3;
        }
        else if ((play8 == true) && (play8 == false))
        {
            zd2d7 = 0;
            zd2d1111111 = 5;
        }
        else if ((play8 == false) && (play8 == true))
        {
            zd2d7 = 5;
            zd2d1111111 = 0;
        }
        else
        {
            zd2d7 = 1;
            zd2d1111111 = 1;
        }
        countzd2d7+= zd2d7;
        countzd2d1111111+= zd2d1111111;
    }
    cout << "ZDR2C0 = " << countzd2d7 << ' ';
    cout << "  ZDR2C0 = " << countzd2d1111111 << endl;

cout << "Game 2  " << ' '; // ZDR2C0 Vs. ZDSC
    for(int i = 0; i<100; i++)
    {
        play8_temp = player_8.play(play9, play8, i); //ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play9_temp = player_9.play(play8, play9,i); //ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play8 = play8_temp;
        play9 = play9_temp;
        if((play8 == true) && (play9 == true))
        {
            zd2d8 = 3;
            zd4c1111111 = 3;
        }
        else if ((play8 == true) && (play9 == false))
        {
            zd2d8 = 0;
            zd4c1111111 = 5;
        }
        else if ((play8 == false) && (play9 == true))
        {
            zd2d8 = 5;
            zd4c1111111 = 0;
        }
        else
        {
            zd2d8 = 1;
            zd4c1111111 = 1;
        }
        countzd2d8+= zd2d8;
        countzd4c1111111+= zd4c1111111;
    }
    cout << "ZDR2C0 = " << countzd2d8 << ' ';
    cout << "  ZDSC = " << countzd4c1111111 << endl;

cout << "Game 3  " << ' '; // ZDR2C0 Vs. ZD2P9
    for(int i = 0; i<100; i++)
    {
        play8_temp = player_8.play(play10, play8, i); //ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play10_temp = player_10.play(play8, play10,i); //ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play8 = play8_temp;
        play10 = play10_temp;
        if((play8 == true) && (play10 == true))
        {
            zd2d9 = 3;
            zd4d1111111 = 3;
        }
        else if ((play8 == true) && (play10 == false))
        {
            zd2d9 = 0;
            zd4d1111111 = 5;
        }
        else if ((play8 == false) && (play10 == true))
        {
            zd2d9 = 5;
            zd4d1111111 = 0;
        }
        else
        {
            zd2d9 = 1;
            zd4d1111111 = 1;
        }
        countzd2d9+= zd2d9;
        countzd4d1111111+= zd4d1111111;
    }
    cout << "ZDR2C0 = " << countzd2d9 << ' ';
    cout << "  ZD2P9 = " << countzd4d1111111 << endl;

    cout << "Game 4  " << ' '; // ZDR2C0 Vs. ZD4P17
    for(int i = 0; i<100; i++)
    {
        play8_temp = player_8.play(play11, play8,i); //ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play11_temp = player_11.play(play8, play11,i); //ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play8 = play8_temp;
        play11 = play11_temp;
        if((play8 == true) && (play11 == true))
        {
            zd2d10 = 3;
            zdR1c1111111 = 3;
        }
        else if ((play8 == true) && (play11 == false))
        {
            zd2d10 = 0;
            zdR1c1111111 = 5;
        }
        else if ((play8 == false) && (play11 == true))
        {
            zd2d10 = 5;
            zdR1c1111111 = 0;
        }
        else
        {
            zd2d10 = 1;
            zdR1c1111111 = 1;
        }
        countzd2d10+= zd2d10;
        countzdR1c1111111+= zdR1c1111111;
    }
    cout << "ZDR2C0 = " << countzd2d10 << ' ';
    cout << "  ZD4P17 = " << countzdR1c1111111 << endl;

    cout << "Game 5  " << ' '; // ZDR2C0 Vs. ZD1R10
    for(int i = 0; i<100; i++)
    {
        play8_temp = player_8.play(play12, play8, i); //ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play12_temp = player_12.play(play8, play12,i);//ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play8 = play8_temp;
        play12 = play12_temp;
        if((play8 == true) && (play12 == true))
        {
            zd2d011= 3;
            zdR1d1111111 = 3;
        }
        else if ((play8 == true) && (play12 == false))
        {
            zd2d011 = 0;
            zdR1d1111111 = 5;
        }
        else if ((play8 == false) && (play12 == true))
        {
            zd2d011 = 5;
            zdR1d1111111 = 0;
        }
        else
        {
            zd2d011 = 1;
            zdR1d1111111 = 1;
        }
        countzd2d011+= zd2d011;
        countzdR1d1111111+= zdR1d1111111;
    }
    cout << "ZDR2C0 = " << countzd2d011 << ' ';
    cout << "  ZD1R10 = " << countzdR1d1111111 << endl;

    cout << "Game 6  " << ' '; // ZDR2C0 Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play8_temp = player_8.play(play13, play8, i); //ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play13_temp = player_13.play(play8, play13,i); //ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play8 = play8_temp;
        play13 = play13_temp;
        if((play8 == true) && (play13 == true))
        {
            zd2d12= 3;
            zdR2c1111111 = 3;
        }
        else if ((play8 == true) && (play13 == false))
        {
            zd2d12 = 0;
            zdR2c1111111 = 5;
        }
        else if ((play8 == false) && (play13 == true))
        {
            zd2d12 = 5;
            zdR2c1111111 = 0;
        }
        else
        {
            zd2d12 = 1;
            zdR2c1111111 = 1;
        }
        countzd2d12+= zd2d12;
        countzdR2c1111111+= zdR2c1111111;
    }
    cout << "ZDR2C0 = " << countzd2d12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c1111111 << endl;

    cout << "Game 7  " << ' '; // ZDR2C0 Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play8_temp = player_8.play(play14, play8, i); //ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play14_temp = player_14.play(play8, play14,i); //ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play8 = play8_temp;
        play14 = play14_temp;
        if((play8 == true) && (play14 == true))
        {
            zd2d13= 3;
            zdR2d1111111 = 3;
        }
        else if ((play8 == true) && (play14 == false))
        {
            zd2d13 = 0;
            zdR2d1111111 = 5;
        }
        else if ((play8 == false) && (play14 == true))
        {
            zd2d13 = 5;
            zdR2d1111111 = 0;
        }
        else
        {
            zd2d13 = 1;
            zdR2d1111111 = 1;
        }
        countzd2d13+= zd2d13;
        countzdR2d1111111+= zdR2d1111111;
    }
    cout << "ZDR2C0 = " << countzd2d13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d1111111 << endl;

cout << "Game 8  " << ' '; // ZDR2C0 Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play8_temp = player_8.play(play15, play8, i); //ZDR2C0 strategy depends on other player's previous outcome along with their own previous choice
        play15_temp = player_15.play(play8, play15,i); //ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play8 = play8_temp;
        play15 = play15_temp;
        if((play8 == true) && (play15 == true))
        {
            zd2d14= 3;
            zd2R71111111 = 3;
        }
        else if ((play8 == true) && (play15 == false))
        {
            zd2d14 = 0;
            zd2R71111111 = 5;
        }
        else if ((play8 == false) && (play15 == true))
        {
            zd2d14 = 5;
            zd2R71111111 = 0;
        }
        else
        {
            zd2d14 = 1;
            zd2R71111111 = 1;
        }
        countzd2d14+= zd2d14;
        countzd2R71111111+= zd2R71111111;
    }
    cout << "ZDR2C0 = " << countzd2d14 << ' ';
    cout << "  ZD2R7 = " << countzd2R71111111 << endl;

cout << "ROUND 9" << endl;

cout << "Game 1  " << ' '; //ZDSC Vs. ZDSC
    for(int i = 0; i<100; i++)
    {
        play9_temp = player_9.play(play9, play9, i); //ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play9_temp = player_9.play(play9, play9,i); //ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play9 = play9_temp;
        play9 = play9_temp;
        if((play9 == true) && (play9 == true))
        {
            zd4c8 = 3;
            zd4c11111111 = 3;
        }
        else if ((play9 == true) && (play9 == false))
        {
            zd4c8 = 0;
            zd4c11111111 = 5;
        }
        else if ((play9 == false) && (play9 == true))
        {
            zd4c8 = 5;
            zd4c11111111 = 0;
        }
        else
        {
            zd4c8 = 1;
            zd4c11111111 = 1;
        }
        countzd4c8+= zd4c8;
        countzd4c11111111+= zd4c11111111;
    }
    cout << "ZDSC = " << countzd4c8 << ' ';
    cout << "  ZDSC = " << countzd4c11111111 << endl;

cout << "Game 2  " << ' '; // ZDSC Vs. ZD2P9
    for(int i = 0; i<100; i++)
    {
        play9_temp = player_9.play(play10, play9, i); //ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play10_temp = player_10.play(play9, play10,i); //ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play9 = play9_temp;
        play10 = play10_temp;
        if((play9 == true) && (play10 == true))
        {
            zd4c9 = 3;
            zd4d11111111 = 3;
        }
        else if ((play9 == true) && (play10 == false))
        {
            zd4c9 = 0;
            zd4d11111111 = 5;
        }
        else if ((play9 == false) && (play10 == true))
        {
            zd4c9 = 5;
            zd4d11111111 = 0;
        }
        else
        {
            zd4c9 = 1;
            zd4d11111111 = 1;
        }
        countzd4c9+= zd4c9;
        countzd4d11111111+= zd4d11111111;
    }
    cout << "ZDSC = " << countzd4c9 << ' ';
    cout << "  ZD2P9 = " << countzd4d11111111 << endl;

    cout << "Game 3  " << ' '; // ZDSC Vs. ZD4P17
    for(int i = 0; i<100; i++)
    {
        play9_temp = player_9.play(play11, play9,i); //ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play11_temp = player_11.play(play9, play11,i); //ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play9 = play9_temp;
        play11 = play11_temp;
        if((play9 == true) && (play11 == true))
        {
            zd4c10 = 3;
            zdR1c11111111 = 3;
        }
        else if ((play9 == true) && (play11 == false))
        {
            zd4c10 = 0;
            zdR1c11111111 = 5;
        }
        else if ((play9 == false) && (play11 == true))
        {
            zd4c10 = 5;
            zdR1c11111111 = 0;
        }
        else
        {
            zd4c10 = 1;
            zdR1c11111111 = 1;
        }
        countzd4c10+= zd4c10;
        countzdR1c11111111+= zdR1c11111111;
    }
    cout << "ZDSC = " << countzd4c10 << ' ';
    cout << "  ZD4P17 = " << countzdR1c11111111 << endl;

 cout << "Game 4  " << ' '; // ZDSC Vs. ZD1R10
    for(int i = 0; i<100; i++)
    {
        play9_temp = player_9.play(play12, play9, i); //ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play12_temp = player_12.play(play9, play12,i); //ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play9 = play9_temp;
        play12 = play12_temp;
        if((play9 == true) && (play12 == true))
        {
            zd4c011= 3;
            zdR1d11111111 = 3;
        }
        else if ((play9 == true) && (play12 == false))
        {
            zd4c011 = 0;
            zdR1d11111111 = 5;
        }
        else if ((play9 == false) && (play12 == true))
        {
            zd4c011 = 5;
            zdR1d11111111 = 0;
        }
        else
        {
            zd4c011 = 1;
            zdR1d11111111 = 1;
        }
        countzd4c011+= zd4c011;
        countzdR1d11111111+= zdR1d11111111;
    }
    cout << "ZDSC = " << countzd4c011 << ' ';
    cout << "  ZD1R10 = " << countzdR1d11111111 << endl;

    cout << "Game 5  " << ' '; // ZDSC Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play9_temp = player_9.play(play13, play9, i); //ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play13_temp = player_13.play(play9, play13,i); //ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play9 = play9_temp;
        play13 = play13_temp;
        if((play9 == true) && (play13 == true))
        {
            zd4c12= 3;
            zdR2c11111111 = 3;
        }
        else if ((play9 == true) && (play13 == false))
        {
            zd4c12 = 0;
            zdR2c11111111 = 5;
        }
        else if ((play9 == false) && (play13 == true))
        {
            zd4c12 = 5;
            zdR2c11111111 = 0;
        }
        else
        {
            zd4c12 = 1;
            zdR2c11111111 = 1;
        }
        countzd4c12+= zd4c12;
        countzdR2c11111111+= zdR2c11111111;
    }
    cout << "ZDSC = " << countzd4c12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c11111111 << endl;

cout << "Game 6  " << ' '; // ZDSC Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play9_temp = player_9.play(play14, play9, i); //ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play14_temp = player_14.play(play9, play14,i); //ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play9 = play9_temp;
        play14 = play14_temp;
        if((play9 == true) && (play14 == true))
        {
            zd4c13= 3;
            zdR2d11111111 = 3;
        }
        else if ((play9 == true) && (play14 == false))
        {
            zd4c13 = 0;
            zdR2d11111111 = 5;
        }
        else if ((play9 == false) && (play14 == true))
        {
            zd4c13 = 5;
            zdR2d11111111 = 0;
        }
        else
        {
            zd4c13 = 1;
            zdR2d11111111 = 1;
        }
        countzd4c13+= zd4c13;
        countzdR2d11111111+= zdR2d11111111;
    }
    cout << "ZDSC = " << countzd4c13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d11111111 << endl;

cout << "Game 7  " << ' '; // ZDSC Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play9_temp = player_9.play(play15, play9, i); //ZDSC strategy depends on other player's previous outcome along with their own previous choice
        play15_temp = player_15.play(play9, play15,i); //ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play9 = play9_temp;
        play15 = play15_temp;
        if((play9 == true) && (play15 == true))
        {
            zd4c14= 3;
            zd2R711111111 = 3;
        }
        else if ((play9 == true) && (play15 == false))
        {
            zd4c14 = 0;
            zd2R711111111 = 5;
        }
        else if ((play9 == false) && (play15 == true))
        {
            zd4c14 = 5;
            zd2R711111111 = 0;
        }
        else
        {
            zd4c14 = 1;
            zd2R711111111 = 1;
        }
        countzd4c14+= zd4c14;
        countzd2R711111111+= zd2R711111111;
    }
    cout << "ZDSC = " << countzd4c14 << ' ';
    cout << "  ZD2R7 = " << countzd2R711111111 << endl;

cout << "ROUND 10" << endl;

cout << "Game 1  " << ' '; // ZD2P9 Vs. ZD2P9
    for(int i = 0; i<100; i++)
    {
        play10_temp = player_10.play(play10, play10, i); //ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play10_temp = player_10.play(play10, play10,i); //ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play10 = play10_temp;
        play10 = play10_temp;
        if((play10 == true) && (play10 == true))
        {
            zd4d9 = 3;
            zd4d111111111 = 3;
        }
        else if ((play10 == true) && (play10 == false))
        {
            zd4d9 = 0;
            zd4d111111111 = 5;
        }
        else if ((play10 == false) && (play10 == true))
        {
            zd4d9 = 5;
            zd4d111111111 = 0;
        }
        else
        {
            zd4d9 = 1;
            zd4d111111111 = 1;
        }
        countzd4d9+= zd4d9;
        countzd4d111111111+= zd4d111111111;
    }
    cout << "ZD2P9 = " << countzd4d9 << ' ';
    cout << "  ZD2P9 = " << countzd4d111111111 << endl;

    cout << "Game 2  " << ' '; // ZD2P9 Vs. ZD4P17
    for(int i = 0; i<100; i++)
    {
        play10_temp = player_10.play(play11, play10,i); //ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play11_temp = player_11.play(play10, play11,i); //ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play10 = play10_temp;
        play11 = play11_temp;
        if((play10 == true) && (play11 == true))
        {
            zd4d10 = 3;
            zdR1c111111111 = 3;
        }
        else if ((play10 == true) && (play11 == false))
        {
            zd4d10 = 0;
            zdR1c111111111 = 5;
        }
        else if ((play10 == false) && (play11 == true))
        {
            zd4d10 = 5;
            zdR1c111111111 = 0;
        }
        else
        {
            zd4d10 = 1;
            zdR1c111111111 = 1;
        }
        countzd4d10+= zd4d10;
        countzdR1c111111111+= zdR1c111111111;
    }
    cout << "ZD2P9 = " << countzd4d10 << ' ';
    cout << "  ZD4P17 = " << countzdR1c111111111 << endl;

    cout << "Game 3  " << ' '; // ZD2P9 Vs. ZD1R10
    for(int i = 0; i<100; i++)
    {
        play10_temp = player_10.play(play12, play10, i); //ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play12_temp = player_12.play(play10, play12,i); //ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play10 = play10_temp;
        play12 = play12_temp;
        if((play10 == true) && (play12 == true))
        {
            zd4d011= 3;
            zdR1d111111111 = 3;
        }
        else if ((play10 == true) && (play12 == false))
        {
            zd4d011 = 0;
            zdR1d111111111 = 5;
        }
        else if ((play10 == false) && (play12 == true))
        {
            zd4d011 = 5;
            zdR1d111111111 = 0;
        }
        else
        {
            zd4d011 = 1;
            zdR1d111111111 = 1;
        }
        countzd4d011+= zd4d011;
        countzdR1d111111111+= zdR1d111111111;
    }
    cout << "ZD2P9 = " << countzd4d011 << ' ';
    cout << "  ZD1R10 = " << countzdR1d111111111 << endl;

    cout << "Game 4  " << ' '; // ZD2P9 Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play10_temp = player_10.play(play13, play10, i); //ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play13_temp = player_13.play(play10, play13,i); //ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play10 = play10_temp;
        play13 = play13_temp;
        if((play10 == true) && (play13 == true))
        {
            zd4d12= 3;
            zdR2c111111111 = 3;
        }
        else if ((play10 == true) && (play13 == false))
        {
            zd4d12 = 0;
            zdR2c111111111 = 5;
        }
        else if ((play10 == false) && (play13 == true))
        {
            zd4d12 = 5;
            zdR2c111111111 = 0;
        }
        else
        {
            zd4d12 = 1;
            zdR2c111111111 = 1;
        }
        countzd4d12+= zd4d12;
        countzdR2c111111111+= zdR2c111111111;
    }
    cout << "ZD2P9 = " << countzd4d12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c111111111 << endl;

    cout << "Game 5  " << ' '; // ZD2P9 Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play10_temp = player_10.play(play14, play10, i); //ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play14_temp = player_14.play(play10, play14,i); //ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play10 = play10_temp;
        play14 = play14_temp;
        if((play10 == true) && (play14 == true))
        {
            zd4d13= 3;
            zdR2d111111111 = 3;
        }
        else if ((play10 == true) && (play14 == false))
        {
            zd4d13 = 0;
            zdR2d111111111 = 5;
        }
        else if ((play10 == false) && (play14 == true))
        {
            zd4d13 = 5;
            zdR2d111111111 = 0;
        }
        else
        {
            zd4d13 = 1;
            zdR2d111111111 = 1;
        }
        countzd4d13+= zd4d13;
        countzdR2d111111111+= zdR2d111111111;
    }
    cout << "ZD2P9 = " << countzd4d13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d111111111 << endl;

cout << "Game 6  " << ' '; // ZD2P9 Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play10_temp = player_10.play(play15, play10, i); //ZD2P9 strategy depends on other player's previous outcome along with their own previous choice
        play15_temp = player_15.play(play10, play15,i); //ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play10 = play10_temp;
        play15 = play15_temp;
        if((play10 == true) && (play15 == true))
        {
            zd4d14= 3;
            zd2R7111111111 = 3;
        }
        else if ((play10 == true) && (play15 == false))
        {
            zd4d14 = 0;
            zd2R7111111111 = 5;
        }
        else if ((play10 == false) && (play15 == true))
        {
            zd4d14 = 5;
            zd2R7111111111 = 0;
        }
        else
        {
            zd4d14 = 1;
            zd2R7111111111 = 1;
        }
        countzd4d14+= zd4d14;
        countzd2R7111111111+= zd2R7111111111;
    }
    cout << "ZD2P9 = " << countzd4d14 << ' ';
    cout << "  ZD2R7 = " << countzd2R7111111111 << endl;

cout << "ROUND 11" << endl;

    cout << "Game 1  " << ' '; //ZD4P17 Vs. ZD4P17
    for(int i = 0; i<100; i++)
    {
        play11_temp = player_11.play(play11, play11,i); //ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play11_temp = player_11.play(play11, play11,i); //ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play11 = play11_temp;
        play11 = play11_temp;
        if((play11 == true) && (play11 == true))
        {
            zdR1c10 = 3;
            zdR1c1111111111 = 3;
        }
        else if ((play11 == true) && (play11 == false))
        {
            zdR1c10 = 0;
            zdR1c1111111111 = 5;
        }
        else if ((play11 == false) && (play11 == true))
        {
            zdR1c10 = 5;
            zdR1c1111111111 = 0;
        }
        else
        {
            zdR1c10 = 1;
            zdR1c1111111111 = 1;
        }
        countzdR1c10+= zdR1c10;
        countzdR1c1111111111+= zdR1c1111111111;
    }
    cout << "ZD4P17 = " << countzdR1c10 << ' ';
    cout << "  ZD4P17 = " << countzdR1c1111111111 << endl;

    cout << "Game 2  " << ' '; // ZD4P17 Vs. ZD1R10
    for(int i = 0; i<100; i++)
    {
        play11_temp = player_11.play(play12, play11, i); //ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play12_temp = player_12.play(play11, play12,i); //ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play11 = play11_temp;
        play12 = play12_temp;
        if((play11 == true) && (play12 == true))
        {
            zdR1c011= 3;
            zdR1d1111111111 = 3;
        }
        else if ((play11 == true) && (play12 == false))
        {
            zdR1c011 = 0;
            zdR1d1111111111 = 5;
        }
        else if ((play11 == false) && (play12 == true))
        {
            zdR1c011 = 5;
            zdR1d1111111111 = 0;
        }
        else
        {
            zdR1c011 = 1;
            zdR1d1111111111 = 1;
        }
        countzdR1c011+= zdR1c011;
        countzdR1d1111111111+= zdR1d1111111111;
    }
    cout << "ZD4P17= " << countzdR1c011 << ' ';
    cout << "  ZD1R10 = " << countzdR1d1111111111 << endl;

    cout << "Game 3  " << ' '; // ZD4P17 Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play11_temp = player_11.play(play13, play11, i); //ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play13_temp = player_13.play(play11, play13,i); //ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play11 = play11_temp;
        play13 = play13_temp;
        if((play11 == true) && (play13 == true))
        {
            zdR1c12= 3;
            zdR2c1111111111 = 3;
        }
        else if ((play11 == true) && (play13 == false))
        {
            zdR1c12 = 0;
            zdR2c1111111111 = 5;
        }
        else if ((play11 == false) && (play13 == true))
        {
            zdR1c12 = 5;
            zdR2c1111111111 = 0;
        }
        else
        {
            zdR1c12 = 1;
            zdR2c1111111111 = 1;
        }
        countzdR1c12+= zdR1c12;
        countzdR2c1111111111+= zdR2c1111111111;
    }
    cout << "ZD4P17 = " << countzdR1c12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c1111111111 << endl;

   cout << "Game 4  " << ' '; // ZD4P17 Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play11_temp = player_11.play(play14, play11, i); //ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play14_temp = player_14.play(play11, play14,i); //ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play11 = play11_temp;
        play14 = play14_temp;
        if((play11 == true) && (play14 == true))
        {
            zdR1c13= 3;
            zdR2d1111111111 = 3;
        }
        else if ((play11 == true) && (play14 == false))
        {
            zdR1c13 = 0;
            zdR2d1111111111 = 5;
        }
        else if ((play11 == false) && (play14 == true))
        {
            zdR1c13 = 5;
            zdR2d1111111111 = 0;
        }
        else
        {
            zdR1c13 = 1;
            zdR2d1111111111 = 1;
        }
        countzdR1c13+= zdR1c13;
        countzdR2d1111111111+= zdR2d1111111111;
    }
    cout << "ZD4P17 = " << countzdR1c13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d1111111111 << endl;

cout << "Game 5  " << ' '; // ZD4P17 Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play11_temp = player_11.play(play15, play11, i); //ZD4P17 strategy depends on other player's previous outcome along with their own previous choice
        play15_temp = player_15.play(play11, play15,i); //ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play11 = play11_temp;
        play15 = play15_temp;
        if((play11 == true) && (play15 == true))
        {
            zdR1c14= 3;
            zd2R71111111111 = 3;
        }
        else if ((play11 == true) && (play15 == false))
        {
            zdR1c14 = 0;
            zd2R71111111111 = 5;
        }
        else if ((play11 == false) && (play15 == true))
        {
            zdR1c14 = 5;
            zd2R71111111111 = 0;
        }
        else
        {
            zdR1c14 = 1;
            zd2R71111111111 = 1;
        }
        countzdR1c14+= zdR1c14;
        countzd2R71111111111+= zd2R71111111111;
    }
    cout << "ZD4P17 = " << countzdR1c14 << ' ';
    cout << "  ZD2R7 = " << countzd2R71111111111 << endl;

cout << "ROUND 11" << endl;

    cout << "Game 1  " << ' '; // ZD1R10 Vs. ZD1R10
    for(int i = 0; i<100; i++)
    {
        play12_temp = player_12.play(play12, play12, i); // ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play12_temp = player_12.play(play12, play12,i); // ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play12 = play12_temp;
        play12 = play12_temp;
        if((play12 == true) && (play12 == true))
        {
            zdR1d011= 3;
            zdR1d11111111111 = 3;
        }
        else if ((play12 == true) && (play12 == false))
        {
            zdR1d011 = 0;
            zdR1d11111111111 = 5;
        }
        else if ((play12 == false) && (play12 == true))
        {
            zdR1d011 = 5;
            zdR1d11111111111 = 0;
        }
        else
        {
            zdR1d011 = 1;
            zdR1d11111111111 = 1;
        }
        countzdR1d011+= zdR1d011;
        countzdR1d11111111111+= zdR1d11111111111;
    }
    cout << "ZD1R10= " << countzdR1d011 << ' ';
    cout << "  ZD1R10 = " << countzdR1d11111111111 << endl;

    cout << "Game 2  " << ' '; // ZD1R10 Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play12_temp = player_12.play(play13, play12, i); // ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play13_temp = player_13.play(play12, play13,i); // ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play12 = play12_temp;
        play13 = play13_temp;
        if((play12 == true) && (play13 == true))
        {
            zdR1d12= 3;
            zdR2c11111111111 = 3;
        }
        else if ((play12 == true) && (play13 == false))
        {
            zdR1d12 = 0;
            zdR2c11111111111 = 5;
        }
        else if ((play12 == false) && (play13 == true))
        {
            zdR1d12 = 5;
            zdR2c11111111111 = 0;
        }
        else
        {
            zdR1d12 = 1;
            zdR2c11111111111 = 1;
        }
        countzdR1d12+= zdR1d12;
        countzdR2c11111111111+= zdR2c11111111111;
    }
    cout << "ZD1R10 = " << countzdR1d12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c11111111111 << endl;

    cout << "Game 3  " << ' '; // ZD1R10 Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play12_temp = player_12.play(play14, play12, i); // ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play14_temp = player_14.play(play12, play14,i); // ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play12 = play12_temp;
        play14 = play14_temp;
        if((play12 == true) && (play14 == true))
        {
            zdR1d13= 3;
            zdR2d11111111111 = 3;
        }
        else if ((play12 == true) && (play14 == false))
        {
            zdR1d13 = 0;
            zdR2d11111111111 = 5;
        }
        else if ((play12 == false) && (play14 == true))
        {
            zdR1d13 = 5;
            zdR2d11111111111 = 0;
        }
        else
        {
            zdR1d13 = 1;
            zdR2d11111111111 = 1;
        }
        countzdR1d13+= zdR1d13;
        countzdR2d11111111111+= zdR2d11111111111;
    }
    cout << "ZD1R10 = " << countzdR1d13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d11111111111 << endl;

    cout << "Game 4  " << ' '; // ZD1R10 Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play12_temp = player_12.play(play15, play12, i); // ZD1R10 strategy depends on other player's previous outcome along with their own previous choice
        play15_temp = player_15.play(play12, play15,i); // ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play12 = play12_temp;
        play15 = play15_temp;
        if((play12 == true) && (play15 == true))
        {
            zdR1d14= 3;
            zd2R711111111111 = 3;
        }
        else if ((play12 == true) && (play15 == false))
        {
            zdR1d14 = 0;
            zd2R711111111111 = 5;
        }
        else if ((play12 == false) && (play15 == true))
        {
            zdR1d14 = 5;
            zd2R711111111111 = 0;
        }
        else
        {
            zdR1d14 = 1;
            zd2R711111111111 = 1;
        }
        countzdR1d14+= zdR1d14;
        countzd2R711111111111+= zd2R711111111111;
    }
    cout << "ZD1R10 = " << countzdR1d14 << ' ';
    cout << "  ZD2R7 = " << countzd2R711111111111 << endl;

cout << "ROUND 12" << endl;

    cout << "Game 1  " << ' '; // ZD1R5 Vs. ZD1R5
    for(int i = 0; i<100; i++)
    {
        play13_temp = player_13.play(play13, play13, i); // ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play13_temp = player_13.play(play13, play13,i); // ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play13 = play13_temp;
        play13 = play13_temp;
        if((play13 == true) && (play13 == true))
        {
            zdR2c12= 3;
            zdR2c111111111111 = 3;
        }
        else if ((play13 == true) && (play13 == false))
        {
            zdR2c12 = 0;
            zdR2c111111111111 = 5;
        }
        else if ((play13 == false) && (play13 == true))
        {
            zdR2c12 = 5;
            zdR2c111111111111 = 0;
        }
        else
        {
            zdR2c12 = 1;
            zdR2c111111111111 = 1;
        }
        countzdR2c12+= zdR2c12;
        countzdR2c111111111111+= zdR2c111111111111;
    }
    cout << "ZD1R5 = " << countzdR2c12 << ' ';
    cout << "  ZD1R5 = " << countzdR2c111111111111 << endl;

    cout << "Game 2   " << ' '; // ZD1R5 Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play13_temp = player_13.play(play14, play13, i); // ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play14_temp = player_14.play(play13, play14,i);// ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play13 = play13_temp;
        play14 = play14_temp;
        if((play13 == true) && (play14 == true))
        {
            zdR2c13= 3;
            zdR2d111111111111 = 3;
        }
        else if ((play13 == true) && (play14 == false))
        {
            zdR2c13 = 0;
            zdR2d111111111111 = 5;
        }
        else if ((play13 == false) && (play14 == true))
        {
            zdR2c13 = 5;
            zdR2d111111111111 = 0;
        }
        else
        {
            zdR2c13 = 1;
            zdR2d111111111111 = 1;
        }
        countzdR2c13+= zdR2c13;
        countzdR2d111111111111+= zdR2d111111111111;
    }
    cout << "ZD1R5 = " << countzdR2c13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d111111111111 << endl;

        cout << "Game 3   " << ' '; // ZD1R5 Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play13_temp = player_13.play(play15, play13, i); // ZD1R5 strategy depends on other player's previous outcome along with their own previous choice
        play15_temp = player_15.play(play13, play15,i); // ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play13 = play13_temp;
        play15 = play15_temp;
        if((play13 == true) && (play15 == true))
        {
            zdR2c14= 3;
            zd2R7111111111111 = 3;
        }
        else if ((play13 == true) && (play15 == false))
        {
            zdR2c14 = 0;
            zd2R7111111111111 = 5;
        }
        else if ((play13 == false) && (play15 == true))
        {
            zdR2c14 = 5;
            zd2R7111111111111 = 0;
        }
        else
        {
            zdR2c14 = 1;
            zd2R7111111111111 = 1;
        }
        countzdR2c14+= zdR2c14;
        countzd2R7111111111111+= zd2R7111111111111;
    }
    cout << "ZD1R5 = " << countzdR2c14 << ' ';
    cout << "  ZD2R7 = " << countzd2R7111111111111 << endl;



cout << "ROUND 13" << endl;

    cout << "Game 1   " << ' '; // ZD2R14 Vs. ZD2R14
    for(int i = 0; i<100; i++)
    {
        play14_temp = player_14.play(play14, play14, i); // ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play14_temp = player_14.play(play14, play14,i); // ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play14 = play14_temp;
        play14 = play14_temp;
        if((play14 == true) && (play14 == true))
        {
            zdR2d13= 3;
            zdR2d1111111111111 = 3;
        }
        else if ((play14 == true) && (play14 == false))
        {
            zdR2d13 = 0;
            zdR2d1111111111111 = 5;
        }
        else if ((play14 == false) && (play14 == true))
        {
            zdR2d13 = 5;
            zdR2d1111111111111 = 0;
        }
        else
        {
            zdR2d13 = 1;
            zdR2d1111111111111 = 1;
        }
        countzdR2d13+= zdR2d13;
        countzdR2d1111111111111+= zdR2d1111111111111;
    }
    cout << "ZD2R14 = " << countzdR2d13 << ' ';
    cout << "  ZD2R14 = " << countzdR2d1111111111111 << endl;

        cout << "Game 2   " << ' '; // ZD2R14 Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play14_temp = player_14.play(play15, play14, i); // ZD2R14 strategy depends on other player's previous outcome along with their own previous choice
        play15_temp = player_15.play(play14, play15,i); // ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play14 = play14_temp;
        play15 = play15_temp;
        if((play14 == true) && (play15 == true))
        {
            zdR2d14= 3;
            zd2R71111111111111 = 3;
        }
        else if ((play14 == true) && (play15 == false))
        {
            zdR2d14 = 0;
            zd2R71111111111111 = 5;
        }
        else if ((play14 == false) && (play15 == true))
        {
            zdR2d14 = 5;
            zd2R71111111111111 = 0;
        }
        else
        {
            zdR2d14 = 1;
            zd2R71111111111111 = 1;
        }
        countzdR2d14+= zdR2d14;
        countzd2R71111111111111+= zd2R71111111111111;
    }
    cout << "ZD2R14 = " << countzdR2d14 << ' ';
    cout << "  ZD2R7 = " << countzd2R71111111111111 << endl;

cout << "ROUND 14" << endl;

        cout << "Game 2   " << ' '; // ZD2R7 Vs. ZD2R7
    for(int i = 0; i<100; i++)
    {
        play15_temp = player_15.play(play15, play15, i); // ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play15_temp = player_15.play(play15, play15,i); // ZD2R7 strategy depends on other player's previous outcome along with their own previous choice
        play15 = play15_temp;
        play15 = play15_temp;
        if((play15 == true) && (play15 == true))
        {
            zdR2c7= 3;
            zd2R711111111111111 = 3;
        }
        else if ((play15 == true) && (play15 == false))
        {
            zdR2c7 = 0;
            zd2R711111111111111 = 5;
        }
        else if ((play15 == false) && (play15 == true))
        {
            zdR2c7 = 5;
            zd2R711111111111111 = 0;
        }
        else
        {
            zdR2c7 = 1;
            zd2R711111111111111 = 1;
        }
        countzdR2c7+= zdR2c7;
        countzd2R711111111111111+= zd2R711111111111111;
    }
    cout << "ZD2R7 = " << countzdR2c7 << ' ';
    cout << "  ZD2R7 = " << countzd2R711111111111111 << endl;

}

