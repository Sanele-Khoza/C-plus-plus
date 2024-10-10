#include <iostream>


using namespace std;
//search for index//
int main()
{
    string result="Not in range";
    int x;

    const int lists[]={3,5,9,6,4};
        cout<<"enter number"<<endl;
        cin>>x;

    for(int i=0 ; i<5; i++)
    {


      if(lists[i]==x)
       {
            result= "within range";
            //cout << "index is "<< result << " to be "<< x <<endl;//

       }

    }

            cout << result << endl;

}
