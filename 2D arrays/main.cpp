#include <iostream>
#include <iomanip>

using namespace std;

void BubbleSort();

int main()
{
    BubbleSort();
}

void BubbleSort()
{
    int age[5]={20, 19, 33, 12, 23};
    int tempStorage;

    for (int i = 0; i<5; i++)
    {
        for (int k = i + 1; k<5; k++)
        {
            if(age[i] > age[k])
            {
                tempStorage = age[i];
                age[i] = age[k];
                age[k] = tempStorage;
            }
        }
    }

    for(int k = 0; k<5; k++)
        cout<<setw(4)<<":"<<age[k]<<endl;
}
