
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
    void push_back(int data) {
        if (empty()) {
            _value = data;
            _left = new Knoten();
            _right = new Knoten(data);
            return;
        }
        if (data < _value) {
            _left->push_back(data);
        }
        else {
            _right->push_back(data);
        }
    }
    void print_in_order() {
        if (empty()) return;
        _left->print_in_order();
        std::cout << " " << _value << " ";
        _right->print_in_order();

    }
    bool empty() {
        return _left == nullptr && _right == nullptr;
    }
};


struct baum
{
    Knoten *_head;
};



int main(int argc, char const *argv[])
{
    Knoten head;
    head.push_back(8);
    head.push_back(5);
    head.push_back(20);
    head.push_back(10);
    head.push_back(2);

    head.print_in_order();
    std::cout << "\n";
    return 0;
}
