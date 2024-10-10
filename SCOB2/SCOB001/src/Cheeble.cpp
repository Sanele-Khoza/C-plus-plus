#include "Cheeble.h"
#include "Math.h"
#include <iostream>
using namespace std;
Cheeble::Cheeble()
{
    Math j;

    cout<<j.fx(gx(4));
    //ctor
}

Cheeble::~Cheeble()
{
    //dtor
}

int Cheeble::gx(int x)
{
    return (x + 1);
}


