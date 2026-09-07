#include <iostream>
using namespace std;

class LibraryBook
{
private:
    string bookName;
    string author;
    bool issued;

public:
    // Constructor
    LibraryBook(string b, string a)
    {
        bookName = b;
        author = a;
        issued = false;
    }

    // Issue book
    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "Book issued successfully." << endl;
        }
        else
        {
            cout << "Book is already issued." << endl;
        }
    }

    // Return book
    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "Book returned successfully." << endl;
        }
        else
        {
            cout << "Book was not issued." << endl;
        }
    }

    // Display book details
    void display()
    {
        cout << "\n--- Book Details ---" << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Author: " << author << endl;

        if (issued)
            cout << "Status: Issued" << endl;
        else
            cout << "Status: Available" << endl;
    }
};

int main()
{
    LibraryBook book("C++ Programming", "Bjarne Stroustrup");

    book.display();

    book.issueBook();
    book.display();

    book.returnBook();
    book.display();

    return 0;
}
