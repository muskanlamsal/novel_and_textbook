#include <iostream>
#include "Novel.h"
#include <string>

using namespace std;

Novel::Novel(string bookName, Author authorName, float bookPrice, bool novelCover, string novelGenre, string novelPublisher)
:Book( bookName, authorName, bookPrice)
{
    isHardCover = novelCover;
    genre = novelGenre;
    publisher = novelPublisher;

}

bool Novel::getCover()
{
    return isHardCover;
}

string Novel::getGenre()
{
    return genre;
}

string Novel::getPublisher()
{
    return publisher;
}

string Novel:: novelInfo()
{
    string cover;
    if (getCover() == 1)
        cover = "Yes";
    else
        cover = "no";

    return "Cover " + cover + "Genre " + getGenre() + "Publisher " + getPublisher();
}
