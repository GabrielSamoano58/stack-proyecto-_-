#include<iostream>
#include "Stack.hh"

Stack::Stack()
{
}

Stack::~Stack()
{
}

Node* Stack::GetTop() const
{
  return head;
}

void Stack::Pop()
{
  if(IsEmpty())
  {
    std::cout << "Stack is empty" << std::endl;
  }
  else
  {
    Node* current{head};
    head = head->next;
    delete current;
  }
}

bool Stack::IsEmpty() const
{
  return head == nullptr;
}

void Stack::Push(Book*& book)
{
  if(IsEmpty())
  {
    head = new Node(book);
  }
  else
  {
    Node* back{head};
    head = new Node(book);
    head->next = back;
  }
}

void Stack::Print()
{
  if(IsEmpty())
  {
    std::cout << "Stack is empty" << std::endl;
  }
  else
  {
    Node* current{head};

    std::cout << "Books list:"<< std::endl;
    std::cout << std::endl;
    while (current)
    {
      std::cout << "Book name: " << current->GetBook()->GetName() << std::endl;
      std::cout << "Book Author: " << current->GetBook()->GetAuthor() << std::endl;
      std::cout << "Book pages: " << current->GetBook()->GetPagesCount() << std::endl;
      std::cout << std::endl;
      current = current->next;
    }
  }
}