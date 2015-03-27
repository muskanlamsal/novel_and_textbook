#include <iostream>
#include "TextBook.h"

using namespace std;

TextBook::TextBook(string bookName, Author authorName, float bookPrice, string textSubject,string textPublisher,string textEdition)
    :Book( bookName, authorName, bookPrice)
{
    setSubject(textSubject);
    setEdition(textEdition);
    publisher = textPublisher;
}

void TextBook::setSubject(string textSubject)
{
    subject = textSubject;
}

void TextBook::setEdition(string textEdition)
{
    edition = textEdition;
}

string TextBook::getSubject()
{
    return subject;
}

string TextBook::getPublisher()
{
    return publisher;
}

string TextBook::getEdition()
{
    return edition;
}

string TextBook::textBookInfo()
{
    return "Subject " + subject + "publisher " + publisher + "edition " + edition;
}
