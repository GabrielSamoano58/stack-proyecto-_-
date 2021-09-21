#pragma once
#include "Node.hh"
#include "Book.hh"

class Stack
{
private:
  Node* head{nullptr};
public:
  Stack();
  ~Stack();
  Node* GetTop() const;// Peek, toma el top/head y lo muetras, pero no lo borra
  void Pop(); //elimina lo que hay en head, osea lo atiende.
  void Push(Book*& book);
  bool IsEmpty() const;
  void Print();
};