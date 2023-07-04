#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

class BookEntry
{
public:
    string bookName;
    string bookAuthor;
    string publisher;
    int ISBN;
    int edition;
    int publishYear;
    int numberOfBooks;

    void registerBook(int i);
};


class Options : public BookEntry
{
public:
    BookEntry b;
    void options();
};

void BookEntry::registerBook(int i)
{
    cout << "Enter the number of Books this time:\n";
    cin >> numberOfBooks;
    for (int i = 0; i <= numberOfBooks; ++i)
    {
        cout << "===============================\n";
        cout << "     CLI for Book Entry\n";
        cout << "===============================\n";
        cout << "Enter the Name of the Book \n";
        cin >> bookName;
        cout << "Enter the ISBN number of the Book\n";
    }
}

void Options::options()
{
    int opts;
    cout << "===============================\n";
    cout << "      CLI for Options\n";
    cout << "===============================\n";
    cout << "1. To make an Entry of Book\n";
    cout << "2. To Issue Book \n";
    cout << "3. Register a Member \n";
    cin >> opts;
    switch (opts)
    {
    case 1:
        b.registerBook(1);
        break;
    }
}

int main()
{
    Options op;
    op.options();

    return 0;
}
