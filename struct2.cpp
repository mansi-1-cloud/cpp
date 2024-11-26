#include <iostream>
#include <string>
using namespace std;

class book {
private:
    string title;
    int id;
    string author;

public:
    // Constructor
    book(string n, string m, int a) : title(n), author(m), id(a) {}

    // Setter function to set details of the book
    void setDetails(string t, string a, int i) {
        title = t;
        author = a;
        id = i;
    }

    // Display function to show book details
    void display() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ID: " << id << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    // Create an array of 3 book pointers
    book* books[3];

    // Input details for each book
    for (int i = 0; i < 3; i++) {
        int id;
        string title, author;

        cout << "Enter details for Book " << (i + 1) << ":\n";

        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore(); // Clear the input buffer

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        // Dynamically create a book object and store it in the array
        books[i] = new book(title, author, id);
        cout << "-----------------------------" << endl;
    }

    // Display details of all books
    cout << "Details of all books:\n";
    for (int i = 0; i < 3; i++) {
        books[i]->display();
    }

    // Free dynamically allocated memory
    for (int i = 0; i < 3; i++) {
        delete books[i];
    }

    return 0;
}
