#pragma once
#include "Book.hh"

class Node
{
private:
  Book* book{nullptr};
public:
  Node* next{nullptr};
  Node(Book*& book);
  ~Node();

  Book* GetBook() const;
};