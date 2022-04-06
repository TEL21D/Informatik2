
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


struct baum
{
    Knoten *_head;
};



int main(int argc, char const *argv[])
{
    Knoten _head;

    std::cout << "_head._value: " << _head._value << "\n";
    return 0;
}
