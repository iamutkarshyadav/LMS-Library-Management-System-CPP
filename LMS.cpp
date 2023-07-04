#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

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
    vector<BookEntry> books; // Store multiple books

    void printData();
    void registerBook();
};

void BookEntry::registerBook()
{
    cout << "Enter the number of Books this time:\n";
    cin >> numberOfBooks;

    for (int i = 0; i < numberOfBooks; ++i)
    {
        cout << "===============================\n";
        cout << "     CLI for Book Entry\n";
        cout << "===============================\n";
        cout << "Enter the Name of the Book: ";
        cin >> bookName;
        cout << "Enter the Author of the Book: ";
        cin >> bookAuthor;
        cout << "Enter the Publisher: ";
        cin >> publisher;
        cout << "Enter the ISBN number of the Book: ";
        cin >> ISBN;
        cout << "Enter the Edition (numbers only): ";
        cin >> edition;

        // Create a book object and add it to the vector of books
        BookEntry book;
        book.bookName = bookName;
        book.bookAuthor = bookAuthor;
        book.publisher = publisher;
        book.ISBN = ISBN;
        book.edition = edition;
        books.push_back(book);
    }
}

void BookEntry::printData()
{
    cout << "=========================================\n";
    cout << "           Books in Library\n";
    cout << "=========================================\n";

    if (books.empty())
    {
        cout << "No books available.\n";
        return;
    }

    cout << left << setw(25) << "Title"
         << setw(25) << "Author"
         << setw(25) << "Publication"
         << setw(15) << "ISBN"
         << setw(10) << "Edition"
         << "\n";

    for (const auto &book : books)
    {
        cout << left << setw(25) << book.bookName
             << setw(25) << book.bookAuthor
             << setw(25) << book.publisher
             << setw(15) << book.ISBN
             << setw(10) << book.edition
             << "\n";
    }
}

class Options : public BookEntry
{
public:
    void options();
};

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
        registerBook();
        printData();
        break;
    }
}

int main()
{
    Options op;
    op.options();

    return 0;
}
