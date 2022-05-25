// Merge sort in C++

#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int> vec, int p, int q, int r);
void mergeSort(vector<int> vec, int l, int r);
void print(vector<int> vec);


// Hauptprogramm
int main() {

  vector<int> vec = {15, 3, 22, 5, 1, 17, 42, 35};

  mergeSort(vec, 0, vec.size() - 1);

  cout << "Sortierte Liste: \n";
  print(vec);
  return 0;
}


// subarrays L und M nach vec
void merge(vector<int> vec, int p, int q, int r) {

  // erstelle L ← A[p..q] und M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  // erstelle subarrays mit vorgegebener Größe
  vector<int> L(n1), M(n2);
  // int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = vec[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = vec[q + 1 + j];

  // Index des Haupt- und Subarrays
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Laufe bis zum Ende von L oder M und wähle das größere Element aus
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      vec[k] = L[i];
      i++;
    } else {
      vec[k] = M[j];
      j++;
    }
    k++;
  }

  // Wenn man am Ende von L oder M ist,
  // nimmt man die lettzten Elemente und fügt Sie an A[p..r]
  while (i < n1) {
    vec[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    vec[k] = M[j];
    j++;
    k++;
  }
}

// Array in 2 subarrays aufteilen, sortieren und wieder zusammenfügen
void mergeSort(vector<int> vec, int l, int r) {
  if (l < r) {
    // m ist der Mittelpunkt des Arrays zum Teilen
    int m = l + (r - l) / 2;

    mergeSort(vec, l, m);
    mergeSort(vec, m + 1, r);

    // Sortieren arrays zusammenfügen
    merge(vec, l, m, r);
  }
}

// Vector ausgeben
void print(vector<int> vec) {
  for (int i = 0; i < vec.size(); i++)
    cout << vec[i] << " ";
  cout << endl;
}