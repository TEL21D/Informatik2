#include <iostream>
#include <vector>

struct element
{
  /* data */
  int _data;
  element *_next;

  element(int data = 0, element *next = nullptr)
  {
    _data = data;
    _next = next;
  }
  bool empty()
  {
    return _next == nullptr;
  }
};

struct s_stack
{
  // Member Variablen
  int _size = 0;
  element *_head = new element();

  // Methoden
  void push(int data)
  {
    element *newEl = new element(data, _head);
    _head = newEl;
    _size++;
  }
  int pop()
  {
    /**
     * gibt das oberste Elemente zurueck und entfernt es
     *
     */
    // pruefen ob der Stack Element hat ansonsten `-1`
    if (_size > 0)
    {
      int temp = _head->_data;
      element * curr_head = _head;
      _head = curr_head->_next;
      delete curr_head;
      _size--;
      return temp;
    }
    return -1;
  }
  int top()
  {
    if (_size > 0)
      return _head->_data;
    return -1;
  }
  int size()
  {
    return _size;
  }
  void print()
  {
    element * curr = _head;
    while (!curr->empty())
    {
      std::cout << curr->_data << " ";
      curr = curr->_next;
    }
    std::cout  << "\n";
  }
};

int main(int argc, char const *argv[])
{
  s_stack stack;


  std::cout << stack.pop() << "\n";

  stack.push(3);
  stack.push(2);
  stack.push(1);
  stack.push(6);

  stack.print();
  std::cout << stack.pop() << "\n";
  stack.print();

  return 0;
}
