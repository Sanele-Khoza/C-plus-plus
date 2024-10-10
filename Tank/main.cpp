#include <iostream>

using namespace std;

int main()
{
    double Km, L, totalKm=0, totalL=0;
    double avarage;
    double overallavarage;
    int tanks = 3;

    while (tanks >0)
    {
        cout << "Enter the litres used: "<<endl;
        cin >> L;

        if(L == -1)
        {
            break;
        }else

           cout << "Enter the Kilometers use: "<<endl;
           cin >> Km;

           avarage=Km/L;
           cout << "The Kilometres per litres: " << avarage <<endl;

           totalL += L;
           totalKm += Km;

    }
        if(totalL >0)
        {
            overallavarage = totalKm/totalL;
            cout << "The overall avarage is: "<< overallavarage<<endl;
        }

    return 0;
}
