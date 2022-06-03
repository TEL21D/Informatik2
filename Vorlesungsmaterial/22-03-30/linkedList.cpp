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

    unsigned int _size;


    //  Konstruktor wird einmal beim intialisieren der Variable aufgerufen
    linkedList() {
        _head = new linkedListElement();
        _size = 0;
    }
    int size() {
        // Gibt die Anzahl der Elemente in der Liste zurueck
        return _size;
    }
    bool empty() {
        // Gibt zurueck ob die Liste leer ist
        return _size == 0;
    }
    void push_back(int data) {
        // Fuegt ein Element ans Ende der Liste
        _head->push_back(data);
        _size++;
    }
    int get() {
        // Gibt das letzte Element der Liste zurueck
        // -1 wenn die Liste leer ist
        if (_head->empty())
        {
            return -1;
        }
        linkedListElement *temp = _head;
        while(!temp->_next->empty()) {
            // gehe bis ans ende der Liste
            temp = temp->_next;
        }
        return temp->_data;
    }
    int pop_back() {
        // Gibt das letzte Element der Liste zurueck und loescht es
        // -1 wenn die Liste leer ist
        if (_head->empty())
        {
            return -1;
        }

        linkedListElement *temp = _head, *prev = nullptr;
        while(!temp->_next->empty()) {
            // gehe bis ans ende der Liste
            prev = temp;
            temp = temp->_next;
        }
        int temp_data = temp->_data;
        if (prev == nullptr)
        {
            _head = temp->_next;
        }
        else {
            prev->_next = temp->_next;
        }
        delete temp;
        _size--;

        return temp_data;

    }
    void print() {
        // Gibt den Inhalt der Liste auf der Konsole aus
        linkedListElement *temp = _head;

        while(!temp->empty()) {
            std::cout << temp->_data << " -> ";
            temp = temp->_next;
        }
        std::cout << "DummyElement\n";
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
    std::cout << "llist.empty(): " << llist.empty() << "\n";
    std::cout << "llist.size(): " << llist.size() << "\n";
    // llist._head = &el1;
    // llist._tail = &el3;
    llist.push_back(1);
    llist.push_back(2);
    llist.push_back(3);


    std::cout << "Hello Linked List \n";
    // std::cout << llist._head->_data << " -> " << llist._head->_next->_data  <<
    //     " -> " << llist._head->_next->_next->_data << " -> " << std::endl;
    llist.print();
    std::cout << "llist.size(): " << llist.size() << "\n";
    llist.push_back(5);
    llist.print();
    std::cout << "llist.empty(): " << llist.empty() << "\n";
    std::cout << "llist.size(): " << llist.size() << "\n";

    std::cout << "\nllist.popback(): " << llist.pop_back() << "\n";
    std::cout << "\nllist.get(): " << llist.get() << "\n";

    std::cout << "llist.size(): " << llist.size() << "\n";

    // liste mit popback verkleinern
    std::cout << "\nllist.popback(): " << llist.pop_back() << "\n";
    std::cout << "\nllist.popback(): " << llist.pop_back() << "\n";
    std::cout << "\nllist.popback(): " << llist.pop_back() << "\n";
    std::cout << "llist.size(): " << llist.size() << "\n";

    std::cout << "\nllist.get(): " << llist.get() << "\n";
    llist.print();
    return 0;
}
