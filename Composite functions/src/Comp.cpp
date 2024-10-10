#include "Comp.h"
#include "Site.h"
#include <iostream>

using namespace std;

Comp::Comp()
{
    Site k;
    cout<<k.gx(fx(1));
    //ctor
}

Comp::~Comp()
{
    //dtor
}
int Comp::fx(int x)
{
    return (4*x + 1);
}
