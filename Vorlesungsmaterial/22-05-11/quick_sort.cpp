#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<int> &vec, int l, int r);
int partition(vector<int> &vec, int l, int r);
int partition_2(vector<int> &vec, int l, int r);

int main(int argc, char const *argv[])
{
    // vector<int> vec1 = {2, 6, 5, 3, 8, 7, 1, 0};
    vector<int> vec1 = {7, 1, 3, 2, 4, 5, 6};
    quickSort(vec1, 0, vec1.size() - 1);

    for (auto el: vec1)
    {
        cout << el << " ";
    }
    cout << endl;

    return 0;
}

void quickSort(vector<int> &vec, int l, int r)
{
    if (l >= r)
        return;

    int index = partition_2(vec, l, r);

    quickSort(vec, l, index-1); // geht weiter in der Liste links vom Index/Pivot
    quickSort(vec, index + 1, r); // geht weiter in der Liste rechts vom Index/Pivot
}

int partition_2(vector<int> &vec, int l, int r)
{
    int index = l+(r-l)/2;
    int pivot = vec[index];
    swap(vec[l], vec[index]);
    int lstart = l++;

    while (l <= r)
    {
        while (vec[l] < pivot)
            l++;
        while (vec[r] > pivot)
            r--;

        if (l <= r)
        {
            swap(vec[l], vec[r]);
            l++;
            r--;
        }
    }
    swap(vec[r], vec[lstart]);

    return r;
}
int partition(vector<int> &vec, int l, int r)
{
    // int index = (r-l)/2;
    int pivot = vec[l];
    int lstart = l++;

    while (l <= r)
    {
        while (vec[l] < pivot)
            l++;
        while (vec[r] > pivot)
            r--;

        if (l <= r)
        {
            swap(vec[l], vec[r]);
            l++;
            r--;
        }
    }
    swap(vec[r], vec[lstart]);

    return r;
}
