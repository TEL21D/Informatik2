#include <iostream>
#include "lambda.hpp"
#include "io.hpp"

#define LAMBDA 0
#define IO_FILE 1

using namespace std;

int main() {
  #if LAMBDA
   cout << "Lambda\n";
   lambda();

   cout << "\nLambda captures\n";
   lambda_captures();

   cout << "\nLambda params\n";
   lambda_params();
  #endif /* LAMBDA */

  #if IO_FILE
  // write_file();

  // read_file();

  cout << "csv mit Aktienkurs einlesen\n";
  read_stock();
  #endif /* IO_FILE */
}
