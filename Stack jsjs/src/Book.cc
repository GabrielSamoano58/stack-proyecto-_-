#include "Book.hh"

Book::Book(std::string name, std::string author, unsigned int pagesCount)
{
  this->name = name;
  this->author = author;
  this->pagesCount = pagesCount;
}

Book::~Book()
{
}

std::string Book::GetName() const
{
  return name;
}

std::string Book::GetAuthor() const
{
  return author;
}

unsigned int Book::GetPagesCount() const
{
  return pagesCount;
}