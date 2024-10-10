//Tutorial 4

//1. Data_Type *Pointer_Name;
//2. int* ptr;
//3. string* ptr;
//4. int num;
//   int* num_ptr = &num;
//5. string variable_name;
//   string* variable_name_ptr = &variable_name;
//6.
/*
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string (*ptr_array)[4];
    string array_name[4]={"element1","element2","element3","element4",};
    ptr_array = &array_name;
}

}

//7.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string (*ptr_array)[4];
    string array_name[4]={"","","","",};
    ptr_array = &array_name;

    (*ptr_array)[0]="Sanele";
    (*ptr_array)[1]="Rondo";
    (*ptr_array)[2]="Khoza";
    (*ptr_array)[3]="BabyBoy";

}

//8
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string (*ptr_array)[4];
    string array_name[4];
    ptr_array = &array_name;

    (*ptr_array)[0]="Sanele";
    (*ptr_array)[1]="Rondo";
    (*ptr_array)[2]="Khoza";
    (*ptr_array)[3]="BabyBoy";

    for(int i =0; i < 4; i++)
    {
        cout << (*ptr_array)[i] << endl;
    }

}

//9
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string value;
    string (*ptr_array)[4];
    string array_name[4];
    ptr_array = &array_name;

    cout << "Enter elements: " << endl;
    for(int i =0; i < 4; i++)
    {
        cout << i;
        value = (*ptr_array)[i];
        cout << value << endl;
        cin >> value;

    }


}

//9
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string value;
    string (*ptr_array)[4];
    string array_name[4];
    ptr_array = &array_name;

    cout << "Enter elements: " << endl;
    for(int i =0; i < 4; i++)
    {
        cout << "element " << i + 1 << ": ";
        cin >> (*ptr_array)[i];

    }
}

//10
#include <iostream>

using namespace std;

int main()
{
    int (*pointer_to_num)[5];  // pointer to an array of 5 integers
    int num[5] = {0};

    pointer_to_num = &num;

    for (int i = 0; i < 5; ++i)
        {
            (*pointer_to_num)[i] = i * 2;  // initialize elements with values 0, 2, 4, 6, 8
        }
    const int (*const_pointer_to_num)[5] = pointer_to_num;

    for (int i = 0; i < 5; ++i)
        {
        cout << (*const_pointer_to_num)[i] << " ";
        }

}

//11
// Declare an array of pointers of DataType
    DataType *array_name[ArraySize];

//12
// Declare an array of 10 pointers of type int
    int *intPtrArray[10];

//13
// Initialize each element of the array
    for (int i = 0; i < 10; i++)
        {
            intPtrArray[i] = new int;
        }
//14
// Initialize the content of each pointer in the array
    for (int i = 0; i < 10; i++)
        {
            *(intPtrArray[i]) = i;
        }


*/
//15
#include <iostream>

using namespace std;

int main()
{
    //a
    // Declare array of 4 pointers of type int
    int *numbers[4];

    //b
    // Initialize the array elements
    for (int i = 0; i < 4; i++)
        {
            numbers[i] = new int;
        }
    //c
    // Initialize the contents of the array
    for (int i = 0; i < 4; i++)
        {
            *numbers[i] = i;
        }
    //d
    // Print the contents of the array
    for (int i = 0; i < 4; i++)
        {
            cout << *numbers[i] << endl;
        }



}
