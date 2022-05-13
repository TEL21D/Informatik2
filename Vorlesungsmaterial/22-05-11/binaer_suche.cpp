#include <iostream>
#include <vector>

using namespace std;

int binaerSuche(vector<int> &vec, int zahl);

int main(int argc, char const *argv[])
{
    vector<int> vec1 = {1,2,3,5,8,9,10};
    int ziel = 8;

    cout << "Stelle von 8: " <<  binaerSuche(vec1, 8) << endl; // 4
    cout << "Stelle von 4: " <<  binaerSuche(vec1, 4) << endl; // -1
    cout << "Stelle von 3: " <<  binaerSuche(vec1, 3) << endl; // 2

    return 0;
}

int binaerSuche(vector<int> &vec, int zahl) {
    int l = 0, r = vec.size()-1;
    int i;
    while(l<=r){
        i = l+(r-l)/2; // 4
        if(vec[i] == zahl) {
            return i;
        }
        if (vec[i] > zahl) {
            // größer aus gesuchtes Element
            r = i - 1;
        }
        else {
            // kleiner
            l = i + 1;
        }
    }
    return -1;
}