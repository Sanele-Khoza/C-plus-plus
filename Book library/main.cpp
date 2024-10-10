#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

class  Book
{
public:
    string title; //Title of th book
    string author; //Author of the book
    bool IsAvailable; //Availability status of the book

    //Constructo to initialize a book object
    Book(string t, string a) : title(t), author(a), IsAvailable(true)
    {}

    //Method to borrow the book object
    void borrowBook()
    {
        if(IsAvailable)
        {
            IsAvailable = false;
            cout << "You have succefully borrowed the book: " << title << endl;
        }else
        {
            cout << "Sorry, the book is currently not available."<<endl;
        }
    }

    ///Method to Return a book
    void returnBook()
    {
        IsAvailable = true;
        cout << "You have successfully returned the book: " << title << endl;
    }

};
class Library
{
public:
    string name; //name of the library
    string address; //address of the library
    vector<Book> collection;//collection of book in the library

    //constructor to initialize a library object
    Library(string n, string a) : name(n), address(a)
    {}

    bool isLibraryOpen()
    {
        time_t now = time(0);
        tm *loctm = localtime(&now);
        int hour = loctm->tm_hour;

        if(hour >=9 && hour <17)
        {
            return true;
        }else
        {
            cout << "The library is closed. Operating hours are 9 AM to 5 PM." << endl;
            return false;
        }
    }

    //method to list all available books in the library
    void ListOfBooks()
    {
        if(isLibraryOpen()){
            cout << "Available Books at " << name << endl;
            for(auto &book : collection)
            {
                if (book.IsAvailable)
                {
                    cout << book.title << " by " << book.author << endl;
                }
            }
        }
    }

    //method to add a book to the library's collection
    void addBook(Book book)
    {
        collection.push_back(book);
    }

    //method to borrow a book from the library by it's tittle
    void borrowBook(string bookTitle)
    {
        if(isLibraryOpen()){
            for (auto &book : collection)
            {
                if (book.title == bookTitle && book.IsAvailable)
                {
                    book.borrowBook();
                    return;
                }
            }
            cout << "Book not found or not available." << endl;
        }
    }
    //method to retuen a book to the library by its title
    void returnBook(string bookTitle)
    {
        if(isLibraryOpen()){
            for (auto &book : collection)
            {
                if (book.title == bookTitle && book.IsAvailable)
                {
                    book.returnBook();
                    return;
                }
            }
            cout << "Book not found or not Borrowed" << endl;
        }
    }
};

int main()
{
    Library library1("Mountain Caves Library 1", "1459 Mount st");//library object for MC

    //adding books to the library's collection
    library1.addBook(Book("One Piece", "Eiichiro Oda"));
    library1.addBook(Book("Solo leveling", "Ch'ugong"));
    library1.addBook(Book("Jujutsu Kaisen", "Gege Akutami"));
    library1.addBook(Book("Kaiju No 8", "Naoya Matsumoto"));

    //listing available books
    library1.ListOfBooks();
    cout << '\n';
    //borrowing a book by its tittle
    //cout << "Which book do you wanna borrow.";
    //library1.borrowBook("One Piece");

    //returning a book by it tittle
   // library1.returnBook("");
    return 0;
}
