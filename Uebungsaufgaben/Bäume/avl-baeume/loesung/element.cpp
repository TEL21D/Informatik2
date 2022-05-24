#include "element.hpp"

#include <sstream>
using namespace std;


bool Element::empty() {
  return _left == nullptr && _right == nullptr;
}

void Element::set(int key_) {
  _key = key_;
  if (empty()) {
    _left = new Element();
    _right = new Element();
    _height = 1;
  }
}

void Element::insert(int key_) {
  if (empty()) { set(key_); return; }
  if (key_ < _key) {
    _left->insert(key_);
    _left = rotate(_left);
  }
  else {
    _right->insert(key_);
    _right = rotate(_right);
  }
  update_height();
}

string Element::inOrderValues() {
  if (empty()) { return ""; }

  ostringstream out;
  out << _left->inOrderValues() << " "
      << _key << " "
      << _right->inOrderValues();
  return out.str();
}

string Element::dotString() {
  if (empty()) { return ""; }

  ostringstream out;
  if (!_left->empty()) {
    out << "  " << _key << " -> " << _left->_key << "\n";
  }
  if (!_right->empty()) {
    out << "  " << _key << " -> " << _right->_key << "\n";
  }
  out << _left->dotString();
  out << _right->dotString();
  return out.str();
}

void Element::update_height() {
  if (empty()) { return; }
  int const lheight = _left->_height;
  int const rheight = _right->_height;
  _height = (lheight > rheight ? lheight : rheight) + 1;
}

int Element::balanceFactor() {
  if (empty()) { return 0; }
  return _right->_height - _left->_height;
}

Element * rotateRight(Element * root) {
  /* Folgende Rotation wird durchgeführt:

       A                 B
      / \               / \
     B   C      ==>    D   A
    / \                   / \
   D   E                 E   C
  */

  Element * A = root;
  Element * B = A->_left;
  Element * E = B->_right;

  B->_right = A;
  A->_left = E;
  A->update_height();
  B->update_height();
  return B;
}

Element * rotateLeft(Element * root) {
  /* Folgende Rotation wird durchgeführt:

       A                 C
      / \               / \
     B   C      ==>    A   E
        / \           / \
       D   E         B   D
  */

  Element * A = root;
  Element * C = A->_right;
  Element * D = C->_left;

  C->_left = A;
  A->_right = D;
  A->update_height();
  C->update_height();
  return C;
}

Element * rotateLeftRight(Element * root) {
  Element * A = root;
  Element * B = A->_left;

  B = rotateLeft(B);
  A = rotateRight(A);
  return A;
}

Element * rotateRightLeft(Element * root) {
  Element * A = root;
  Element * C = A->_right;

  C = rotateRight(C);
  A = rotateLeft(A);
  return A;
}

Element * rotate(Element * root) {
  if (root->empty()) { return root; }
  int bf_root = root->balanceFactor();
  int bf_left = root->_left->balanceFactor();
  int bf_right = root->_right->balanceFactor();

  if (bf_root == -2 && bf_left == -1) { return rotateRight(root); }
  if (bf_root == -2 && bf_left == 1) { return rotateLeftRight(root); }
  if (bf_root == 2 && bf_right == 1) { return rotateLeft(root); }
  if (bf_root == 2 && bf_right == -1) { return rotateRightLeft(root); }
  return root;
}