//Set and Get
#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
    public:
        //function that sets the course name
        void setCourseName(string name)
        {
            courseName = name; //store the course name in the object
        }
        // function that gets the coursename
        string getCourseName()
        {
            return courseName; //return theobjects name
        }
        //function displays the welcome message
        void displaymsg()
        {
            //print and get the course name
            cout << "Welcome to the grade book for: "<< getCourseName() <<"!" <<endl;
        }
    private:
        string courseName; //coursename for the gradebook
};

int main()
{
    string nameOfCourse;//to store the course name
    GradeBook myBook; //object to access the data members and member function of the class

    //display the initial name
    cout << "Initial course name is: " <<myBook.getCourseName()<<endl;

    cout << "Enter your Course name: "<< endl;
    getline(cin, nameOfCourse);
    myBook.setCourseName(nameOfCourse);

    cout<< endl;
    myBook.displaymsg();

}
