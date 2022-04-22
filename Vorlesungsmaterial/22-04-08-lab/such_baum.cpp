
#include <iostream>


struct Knoten
{
    int _value; // Wert der im Knoten gespeichert wird
    Knoten *_left, *_right; // Zeiger auf linken und rechten Knoten

    /*
    * Konstruktur des Knotens, wird aufgerufen beim Anlegen der Variable vom Typ Knoten.
    * Beim Initialisieren können Werte übergeben werden
    * Knoten el(4, nullptr, nullptr)
    * Wenn nichts angegeben wird, werden die vordefinierten Werte genutzt
    */
    Knoten(int value = 0, Knoten * left=nullptr, Knoten * right = nullptr) {
        _value = value;
        _left = left;
        _right = right;
    }
    void push_back(int data) {
        if (empty()) {
            // Überprüft ob der Knoten leer ist und fügt gegenfalls daten ein
            _value = data;
            _left = new Knoten();
            _right = new Knoten();
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
