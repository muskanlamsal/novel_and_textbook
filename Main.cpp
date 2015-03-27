#include <iostream>
#include <string>
#include "Book.h"
#include "TextBook.h"
#include "Novel.h"

using namespace std;

int main()
{
    string author, email, gender;
    string subject;
    string name;
    string edition, publisher, genre;
    int choice;
    bool cover;
    int quantity;
    float price;

   
    cout<<"Enter the name of author:";
    getline(cin,author);
    cout<<"Enter the gender of author:";
    cin >> gender;
    cin.get();
    cout<<"Enter the email address of author:";
    getline(cin,email);

   
    cout<<"Enter the name of book:";
    getline(cin, name);
    cout<<"Enter the price of book:";
    cin>> price;
    cout<<"Enter the quantity of book:";
    cin>> quantity;

    Author newAuthor(author, gender, email);
    
    Book book2 (name, newAuthor, price, quantity);

    cout<<"Press \n 1 for Novel \n 2 for TextBook: ";
    cin>> choice;

    if(choice == 1)
    {
       
        cout<<"Is novel a hardcover:";
        cin>> cover;
        cin.get();
        cout<<"Enter the genre:";
        getline(cin,genre);
        
        cout<<"Enter the publisher of novel:";
        getline(cin,publisher);

        Novel novel (name, newAuthor, price, cover, genre, publisher);
        cout<< novel.novelInfo();
    }
    else
    {
       
        cout<<"Enter the subject of book:";
        cin>> subject;
        cout<<"Enter the edition of book:";
        cin>>edition;
        cin.get();
        cout<<"Enter the publisher of book:";
        cin>> publisher;

        TextBook text (name, newAuthor, price, subject, publisher, edition);
        cout<< text.textBookInfo();
    }


  

}

