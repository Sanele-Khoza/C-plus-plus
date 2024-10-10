#include <iostream>

using namespace std;

class Base
{
public:
    int publicMember;

protected:
    int protectedMember;

private:
    int privateMember;

public:
    //Constructor
    Base(int pub, int prot, int priv): publicMember(pub), protectedMember(prot), privateMember(priv)
    {
        //publicMember = pub;
       //protectedMember = prot;
        //privateMember = priv;
    }
    //A public function to show private member access since they can be accessed within the Base class's Body
    void showPrivateMember()
    {
        cout << "Private member of Base class: " << privateMember << endl;
    }
};

class Derived : public Base
{
public:
    //constructor for Derived class
    Derived(int pub, int prot, int priv) : Base(pub, prot, priv)
    {
    }
    //Function to access base class members
    void showMembers()
    {
        //Accessing public and protected members directly
        cout << "public member of base class: " << publicMember << endl;
        cout << "protected member of base class: " << protectedMember << endl;

        //we cannnot access private member directly
        showPrivateMember();
    }
    //Redefining a base-class member funcction
    void showPrivateMember()
    {
        cout << "D class calling Base class's showPrivateMember() function." << endl;
        Base::showPrivateMember(); //Accessing base-class function using the scope resolution operator
    }
};

int main()
{
    Derived obj(15, 20, 30);

    cout << obj.publicMember << endl;
    obj.showMembers();
    return 0;
}
