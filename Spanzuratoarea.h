#pragma once

#include<string>
#include<iostream>

using namespace std;

class Spanzuratoarea
{
    string cuv;
    int incercare_curenta;
    bool joc_castigat;
    int greseli;

public:
        Spanzuratoarea();

        void Intro();

        void Greseala();

        void getIncercare();

        void Reset();

        void Castigator();

        bool Verif_incercare(char Incerc);

//        inline int getInc_curenta() const
//        {
//            return incercare_curenta;
//        }

        inline int getL_cuv() const
        {
            return cuv.size();
        }

        bool Joc_nou();

};
