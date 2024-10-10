#include <iostream>
#include <string>

using namespace std;

int fac(int);

int main()
{
    cout << fac(5) << endl;
}

int fac(int n)
{

      if (n==0 || n==1)
      {
          return 1;
      }else
      {
        return n*fac(n-1);
      }

}
