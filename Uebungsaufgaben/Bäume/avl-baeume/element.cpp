#include "element.hpp"

#include <sstream>
using namespace std;

bool Element::empty()
{
  return _left == nullptr && _right == nullptr;
}

void Element::set(int key_)
{
  _key = key_;
  if (empty())
  {
    _left = new Element();
    _right = new Element();
    _height = 1;
  }
}

void Element::insert(int key_)
{
  if (empty())
  {
    set(key_);
    return;
  }
  if (key_ < _key)
  {
    _left->insert(key_);
  }
  else
  {
    _right->insert(key_);
  }
}

string Element::inOrderValues()
{
  if (empty())
  {
    return "";
  }

  ostringstream out;
  out << _left->inOrderValues() << " "
      << _key << " "
      << _right->inOrderValues();
  return out.str();
}

string Element::dotString()
{
  if (empty())
  {
    return "";
  }

  ostringstream out;
  if (!_left->empty())
  {
    out << "  " << _key << " -> " << _left->_key << "\n";
  }
  if (!_right->empty())
  {
    out << "  " << _key << " -> " << _right->_key << "\n";
  }
  out << _left->dotString();
  out << _right->dotString();
  return out.str();
}

void Element::update_height()
{
  // TODO: Implementieren
}

int Element::balanceFactor()
{
  // TODO: Implementieren
  return 0;
}

// TODO: Implentieren
Element *rotateLeft(Element *root);
// TODO: Implentieren
Element *rotateRight(Element *root);
// TODO: Implentieren
Element *rotateLeftRight(Element *root);
// TODO: Implentieren
Element *rotateRightLeft(Element *root);

// Prüft, ob eine Rotation notwendig ist und führt die richtige Rotation ggf. durch.
// TODO: Implentieren
Element *rotate(Element *root);