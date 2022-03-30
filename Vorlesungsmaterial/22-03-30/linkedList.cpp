#include <iostream>
#include <vector>
#include <queue>

/*
struct dyn_array
{
    int * arr;
    int anzahl_elemente;
    int speicherGroesse;

    int get (unsigned int el) {
        if (el < anzahl_elemente)
            return arr[el];
        else
            return EXIT_FAILURE;
    }
};
*/


struct linkedListElement
{
    /* data */
    int _data;
    linkedListElement * _next;

    linkedListElement(int data = 0, linkedListElement *next = nullptr) {
        _data = data;
        _next = next;
    }
    void insert(int data) {
        _data = data;
        _next = new linkedListElement();
    }
    void push_back(int data) {
        if(empty()) {
            insert(data);
            return;
        }
        _next->push_back(data);
    }
    bool empty() {
        return _next == nullptr;
    }
};

struct linkedList
{
    /* data */
    linkedListElement *_head; // zeigt auf den Anfang der Liste
    linkedListElement *_tail; // zeigt auf das Ende der Liste

    //  Konstruktor wird einmal beim intialisieren der Variable aufgerufen
    linkedList() {
        _head = new linkedListElement();
    }
    void push_back(int data) {
        _head->push_back(data);
    }
    void print() {
        linkedListElement *temp = _head;
        while(!temp->empty()) {
            std::cout << temp->_data << " -> ";
            temp = temp->_next;
        }
        std::cout << "nullptr";
    }
};

int main(int argc, char const *argv[])
{
    // linkedListElement el3(3), el2(2, &el3), el1(1, &el2);
    // el1._data = 1;
    // el1._next = &el2;
    // el2._data = 2;
    // el2._next = &el3;
    // el3._data = 3;
    // el3._next = nullptr;
    linkedList llist;       // Konstruktor Aufruf
    // llist._head = &el1;
    // llist._tail = &el3;
    llist.push_back(1);
    llist.push_back(2);
    llist.push_back(3);

    std::cout << "Hello Linked List \n";
    // std::cout << llist._head->_data << " -> " << llist._head->_next->_data  <<
    //     " -> " << llist._head->_next->_next->_data << " -> " << std::endl;
    llist.print();
    return 0;
}
