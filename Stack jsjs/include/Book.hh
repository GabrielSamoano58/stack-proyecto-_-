#pragma once

#include<string>

class Book
{
private:
  std::string name;
  std::string author;
  unsigned int pagesCount;
public:
  Book(std::string name, std::string author, unsigned int pagesCount);
  ~Book();
  std::string GetName() const;
  std::string GetAuthor() const;
  unsigned int GetPagesCount() const;
};