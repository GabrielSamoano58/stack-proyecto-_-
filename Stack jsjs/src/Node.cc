#include "Node.hh"

Node::Node(Book*& book)
{
  this->book = book;
}

Node::~Node()
{
}

Book* Node::GetBook() const
{
  return book;
}