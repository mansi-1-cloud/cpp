// JCODEBOOK KA CODE HAI ISME JO COPY CONSTRUCTOR K LIYE HOTA HAI
#include<iostream>
#include<string>
using namespace std;
 
class Book {
private:
    string title;
    string author;
    int pages;
 
public:
    // Parameterized Constructor
    Book(string t, string a, int p) : title(t), author(a), pages(p) {}
 
    // Copy Constructor
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        pages = b.pages;
        cout << "Copy constructor called for Book: " << title << endl;
    }
 
    // Function to display book details
    void display() const {
        cout << "Title: " << title << ", Author: " << author 
            << ", Pages: " << pages << endl;
    }
};
 
int main() {
    // Create a Book object using the parameterized constructor
    Book book1("1984", "George Orwell", 328);
 
    // Use the copy constructor to create a new Book object
    Book book2 = book1; // Copy constructor is called here
 
    // Display details of both books
    cout << "Book 1 Details:" << endl;
    book1.display();
 
    cout << "Book 2 Details:" << endl;
    book2.display();
 
    return 0;
}