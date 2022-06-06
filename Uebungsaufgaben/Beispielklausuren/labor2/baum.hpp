#ifndef BAUM_H
#define BAUM_H

#include <iostream>
#include <string>
#include <vector>

struct Knoten
{
    int data;
    Knoten * links = nullptr;
    Knoten * rechts = nullptr;

    bool empty();

    void insert(int x);

    void set(int x);

    void print();

    // Aufgabe 01
    int anzahlElemente();

    // Aufgabe 02
    bool enthaelt(int x);

};

bool Knoten::empty()
{
    return links == nullptr && rechts == nullptr;
}

void Knoten::insert(int x)
{
    if (empty())
    {
        set(x);
        return;
    }
    if (x <= data) links->insert(x);
    else rechts->insert(x);
}

void Knoten::set(int x)
{
    data = x;
    if (empty())
    {
        links = new Knoten();
        rechts = new Knoten();
    }
}

void Knoten::print()
{
    if (empty()) return;

    links->print();
    std::cout << " " << data << " ";
    rechts->print();
}

template<typename T>
void print_vector(std::vector<T> const & v) {
  for (auto el : v) { std::cout << el << " "; }
  std::cout << std::endl;
}

#endif