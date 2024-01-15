#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Book{
private:
    string title;
    string author;

protected:
    string getTitle() const {
        return title;
    }
    
    string getAuthor() const {
        return author;
    }
    
public:
    Book(string title, string author) :
    title(title), author(author) {}
    
    virtual void display() = 0;
};


class MyBook: Book{
private:
    int price;
public:
    MyBook(string title, string author, int price) :
    Book(title, author), price(price) {}
    
    void display() {
        cout << "Title: " << getTitle() << endl
        << "Author: " << getAuthor() << endl
        << "Price: " << price << endl;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string title,author;
    getline(cin,title);
    getline(cin,author);
    
    int price;
    cin >> price;
    
    MyBook b(title,author,price);
    b.display(); 
    return 0;
}
