#include <iostream>
#include "Book.h"

using namespace std;

class Novel : public Book
{
private:
    bool isHardCover;
    string genre;
    string publisher;
public:
    Novel(string, Author , float , bool , string , string);
    bool getCover();
    string getGenre();
    string getPublisher();
    string novelInfo();

};

