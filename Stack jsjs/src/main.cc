#include<iostream>
#include "Book.hh"
#include "Stack.hh"

int main()
{
  Book* book1{new Book("book1", "uno", 300)};
  Book* book2{new Book("book2", "dos", 500)};
  Book* book3{new Book("book3", "tres", 1000)};
  Book* book4{new Book("book4", "cuatro", 100)};

  Stack* stack{new Stack()};
  stack->Push(book1);
  stack->Push(book2);
  stack->Push(book3);
  stack->Push(book4);
  stack->Print();

  stack->Pop();
  //stack->Pop();
  //stack->Pop();
  //stack->Pop();

  stack->Print();

  std::cout << "Book top name: " << stack->GetTop()->GetBook()->GetName() << std::endl;

  std::cin.get();

  delete stack;
  return EXIT_SUCCESS;//es igual que poner return 0, esto es de c++
}