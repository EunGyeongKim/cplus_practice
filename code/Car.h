#ifndef __CAR_H__
#define __CAR_H___

namespace CAR_CONST
{
    enum{
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10,
    };   
} // namespace CAR_CONST


class Car{
    private :
        char gamerID[CAR_CONST::ID_LEN];
        int fuelGauge;
        int CurSpeed;
    public :
        void initmembers(char * ID, int fuel);
        void showcarstate();
        void accel();
        void Break():
};

#endif