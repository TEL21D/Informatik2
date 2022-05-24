#include <iostream>
#include "tree.hpp"
using namespace std;

void test_insertions();
void test_insertions2();

int main() {
  test_insertions();
  test_insertions2();

  return 0;
}

void test_insertions2() {
  Tree t1;
  t1.insert(10);
  t1.insert(9);
  t1.insert(11);
  t1.insert(8);
  t1.insert(12);
  t1.insert(7);
  cout << t1.dotString() << endl;
  t1.insert(13);
  cout << t1.dotString() << endl;
  t1.insert(6);
  cout << t1.dotString() << endl;
  // t1.insert(14);
  // t1.insert(5);
  // t1.insert(15);
  // t1.insert(4);
  // t1.insert(17);

  cout << t1.inOrderValues() << endl;
  cout << t1.dotString() << endl;
}
void test_insertions() {
  Tree t1;

  t1.insert(42);    /*         42                23           */
  t1.insert(23);    /*        /  \              /  \          */
  t1.insert(77);    /*       23  77            5    42        */
  t1.insert(5);     /*      /  \       ==>    /    /  \       */
  t1.insert(38);    /*     5    38           1    38   77     */
  t1.insert(1);     /*    /                                   */
                    /*   1                                    */
  cout << t1.dotString() << endl;
}
