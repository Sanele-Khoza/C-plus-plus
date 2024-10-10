#include <iostream>

using namespace std;

int main()

{
   string username = "SCOB";
   string password = "practical";

   while (true)
   {
    cout << "Enter your username" << endl;
    cin >> username;
    cout << "Enter your password" << endl;
    cin >> password;

    if(username == "SCOB" && password == "practical"){
        cout << "You have logged in your account" << endl;
        break;
    }
     else{
        cout << "You have entered incorrect details" << endl;
        cout << "2 attempts left" << endl;


    while (true)
   {
    cout << "Enter your username" << endl;
    cin >> username;
    cout << "Enter your password" << endl;
    cin >> password;

    if(username == "SCOB" && password == "practical"){
        cout << "You have logged in your account" << endl;
        break;
    }
     else{
        cout << "You have entered incorrect details" << endl;
        cout << "1 attempts left" << endl;


    while (true)
   {
    cout << "Enter your username" << endl;
    cin >> username;
    cout << "Enter your password" << endl;
    cin >> password;

    if(username == "SCOB" && password == "practical"){
        cout << "You have logged in your account" << endl;
        break;
    }
     else{
        cout << "You have entered incorrect details" << endl;
        cout << "Your account is currently blocked try again later." << endl;
        break;
     }
   }

     }
   }

     }
   }


    return 0;
}
