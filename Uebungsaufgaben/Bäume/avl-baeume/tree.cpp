#include "tree.hpp"

#include "element.hpp"
using namespace std;

Tree::Tree() : root{new Element()} {}

void Tree::insert(int key) {
  root->insert(key);
}

string Tree::inOrderValues() {
  return root->inOrderValues();
}

string Tree::pathToElement(int key) {
  string out;
  Element * current = root;

  while (current->_key != key) {
    if (current->empty()) { return "X"; }
    if (current->_key > key) {
      current = current->_left;
      out += "l";
    }
    else {
      current = current->_right;
      out += "r";
    }
  }

  return out;
}

string Tree::dotString() {
  string out = "digraph G {\n";
  out += root->dotString();
  out += "}\n";
  return out;
}