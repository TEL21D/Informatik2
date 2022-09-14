#include<iostream>
#include<string>

class Knoten
{
private:
    int data;
    Knoten * links = nullptr;
    Knoten * rechts = nullptr;

public:
    bool empty()
    {
        return links == nullptr && rechts == nullptr;
    }

    void insert(int x)
    {
        if (empty())
        {
            data = x;
            links = new Knoten();
            rechts = new Knoten();
            return;
        }
        if (x <= data) links->insert(x);
        else rechts->insert(x);
    }

    void print()
    {
        if (empty()) return;

        links->print();
        std::cout << " " << data << " ";
        rechts->print();
    }

    // Aufgabe 01
    int get_sum(std::string s);
};

template<typename T>
void print_vector(std::vector<T> const & v) {
  for (auto el : v) { std::cout << el << " "; }
  std::cout << std::endl;
}

/**
 * @brief Hilfsfunktione zum Testen der Loesung
 */
template<typename T>
void check_result(T result, T erwartet){
    if (result == erwartet)
    {
        std::cout << result << " == " << erwartet << " ... OK\n";
    }
    else {
        std::cout << result << " != " << erwartet << " ... NOK\n";
    }
}
