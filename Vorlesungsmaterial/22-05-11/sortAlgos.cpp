#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> list);
void bubbleSort(vector<int> list);
void selectionSort(vector<int> list);

int main()
{
   vector<int> list = {15, 3, 22, 5, 1, 17, 42, 35};
   cout << "Zu sortierende Liste:\n";
   for (auto el : list)
      cout << el << " ";

   cout << "\n\nMit InsertionSort sortierte Liste:\n";
   // vector<int> list2 = {2, 8, 5, 3, 9, 4};
   vector<int> list2 = {15, 3, 22, 5, 1, 17, 42, 35};
   insertionSort(list2);

   cout << "\n\nMit BubbleSort sortierte Liste:\n";
   bubbleSort(list);

   cout << "\n\nMit selectionSort sortierte Liste:\n";
   selectionSort(list);
}

void insertionSort(vector<int> list)
{
   for (int i = 0; i < list.size(); i++)
   {
      // Äußere Schleife
      int j = i;
      while (j > 0 && list[j - 1] > list[j])
      {
         // Innere Schleife
         swap(list[j - 1], list[j]);
         j--;
         // for (auto el : list)
         //    cout << el << " ";
         // cout << endl;
      }
      // Ausgabe der Äußeren Schleifendurchlaufs
      cout << endl;
      for (auto el : list)
         cout << el << " ";
      cout << endl;
   }
   for (auto el : list)
      cout << el << " ";
   cout << endl;
}
void bubbleSort(vector<int> list)
{
   for (int i = 1; i < list.size(); i++)
   {
      for (int j = 0; j < list.size() - 1; j++)
      {
         if (list[j] > list[j + 1])
            swap(list[j], list[j + 1]);
      }
   }
   for (auto el : list)
      cout << el << " ";
   cout << endl;
}

void selectionSort(vector<int> list)
{
   for (int j = 0; j < list.size() - 1; j++)
   {
      int iMin = j;
      for (int i = j+1; i < list.size(); i++)
      {
         if (list[i] < list[iMin])
            iMin = i;
      }
      if (iMin != j)
         swap(list[j], list[iMin]);
   }
   for (auto el : list)
      cout << el << " ";
   cout << endl;
}