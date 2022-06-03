
#include <iostream>


struct Knoten
{
    int _value;
    Knoten *_left, *_right;

    // Konstruktur des Knotens, wird aufgerufen beim anlegen der Variable vom Typ Knoten
    Knoten(int value = 0, Knoten * left=nullptr, Knoten * right = nullptr) {
        _value = value;
        _left = left;
        _right = right;
    }
    void push_back(int data);
    void print();
    bool empty();
};


/**
 * struct wird hier noch nicht benoetigt
struct baum
{
    Knoten *_head;
};
*/



int main(int argc, char const *argv[])
{
    Knoten _head,
        _head2(5, &_head); // Konstruktor setzt den Wert auf 5 und die Addresse für das linke Element
    std::cout << "_head._value: " << _head._value << "\n";

    std::cout << "_head2._value: " << _head2._value << "\n";
    std::cout << "_head2._left->_value: " << _head2._left->_value << "\n";

    return 0;
}
