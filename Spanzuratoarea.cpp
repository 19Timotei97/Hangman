#include "Spanzuratoarea.h"
#include<locale>
#include<string.h>

Spanzuratoarea::Spanzuratoarea()
{
    Reset();
}

void Spanzuratoarea::Intro()
{
    cout<<"      ___________     "<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           "<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"   __|__"<<endl<<endl;

    cout<<"\t\tIncercati sa ghiciti cuvantul secret! "<<endl<<endl;
    for(int i=0;i<getL_cuv();i++)
        cout<<"\t__ ";

    cout<<endl;
}

void Spanzuratoarea::Greseala()
{
    if(greseli == 1)
    {
        cout<<"      ___________     "<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           O"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"   __|__"<<endl<<endl;
    }

    else if(greseli == 2)
    {
        cout<<"      ___________     "<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           O"<<endl;
    cout<<"     |           :"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"   __|__"<<endl<<endl;
    }

    else if(greseli == 3)
    {
        cout<<"      ___________     "<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           O"<<endl;
    cout<<"     |           :"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"   __|__"<<endl<<endl;
    }

    else if(greseli == 4)
    {
        cout<<"      ___________     "<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           O"<<endl;
    cout<<"     |           :"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |          /"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"   __|__"<<endl<<endl;
    }

    else if(greseli == 5)
    {
        cout<<"      ___________     "<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           O"<<endl;
    cout<<"     |           :"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |          / \\"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"   __|__"<<endl<<endl;
    }

    else if(greseli == 6)
    {
        cout<<"      ___________     "<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           O"<<endl;
    cout<<"     |          \\:"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |          / \\"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"   __|__"<<endl<<endl;
    }

     else if(greseli == 7)
    {
        cout<<"      ___________     "<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           O"<<endl;
    cout<<"     |          \\:/"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |          / \\"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"   __|__"<<endl<<endl;
    }

     else if(greseli == 8)
    {
        cout<<"      ___________     "<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           O"<<endl;
    cout<<"     |          \\:/"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |         _/ \\"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"   __|__"<<endl<<endl;
    }

    else if(greseli == 9)
    {
        cout<<"      ___________     "<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |           O"<<endl;
    cout<<"     |          \\:/"<<endl;
    cout<<"     |           |"<<endl;
    cout<<"     |         _/ \\_"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"   __|__"<<endl<<endl;

    cout<<"\tAi pierdut! :("<<endl;
    return;
    }
}

void Spanzuratoarea::Reset()
{
    cuv = "fotbal";
    //incercare_curenta = 1;
    greseli = 0;
    joc_castigat = false;
}

void Spanzuratoarea::Castigator()
{
    if(joc_castigat)
    {
        cout<<endl<<"\tCuvantul a fost ghicit! Felicitari!"<<endl;
        cin.get();
        return;
    }
    else
    {
        cout<<"\t\nMai mult noroc data viitoare! "<<endl;
        return;
    }
}

bool Spanzuratoarea::Verif_incercare(char Incerc)
{
    if(isalpha(Incerc))
        if(islower(Incerc)!=false || isupper(Incerc)!=false)
            return true;

    return false;
}

void Spanzuratoarea::getIncercare()
{
    char c;

    int poz;

    int dim = getL_cuv();

    string temp = cuv;

    temp.resize(dim);

    for(int i=0;i<dim;i++)
        temp[i] = '_';

    //incercare_curenta++;

    while(greseli<9 && temp.compare(cuv)!=0)
    {
        again : cout<<"\n\tIntroduceti o litera: "<<endl;
        cin>>c;

        bool test = Verif_incercare(c);

        if(!test)
        {
            cout<<"\tNu este o litera!";
            goto again;
        }
        else
        {
            if(isupper(c))
                c = tolower(c);

            poz = cuv.find(c);

            if(poz != string::npos)
            {
                //char x = toupper(c);

                if(temp[poz] == c)
                {
                    cout<<"\tDeja ai ghicit litera "<<c<<endl;
                    continue;
                }

                temp[poz] = c;

            if(temp.compare(cuv) == 0)
            {
                joc_castigat = true;

                cout<<"Cuvantul este: "<<endl;
                for(int i=0;i<temp.size();i++)
                    cout<<"\t"<<temp[i];

                break;
            }

            for(int i=0;i<dim;i++)
                cout<<"\t"<<temp[i];
            cout<<endl;
            }

            else
            {
                cout<<"\tLitera gresita!"<<endl;
                greseli++;
                cout<<endl;
                Greseala();
                for(int i=0;i<temp.size();i++)
                    cout<<"\t"<<temp[i];
            }

        }
    }

    Castigator();

}

bool Spanzuratoarea::Joc_nou()
{
    string rasp;

    cout<<endl;
    cout<<"Vreti sa jucati din nou?(D/N)"<<endl;
    cin>>rasp;

    if(rasp[0] == 'D' || rasp[0] == 'd')
    {
        Reset();
        return true;
    }
    else
        return false;
}
