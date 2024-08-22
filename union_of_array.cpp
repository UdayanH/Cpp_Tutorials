// cpp  code for finding out the union of two arrays
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    vector<int> ab;
    int i =0;
    int j=0;
    int n = a.size();
    int m = b.size();
    while(i < n && j < m){
        if(a[i] < b[j]){
            ab.push_back(a[i]);
            i++;
        }else if(a[i] > b[j]){
            ab.push_back(b[j]);
            j++;
        }else{
            ab.push_back(a[i]);
            i++;
            j++;
        }
    }
    while(i < n){
        ab.push_back(a[i]);
        i++;
    }
    while(j < m){
        ab.push_back(b[j]);
        j++;
    }
    //ab.unique(ab.begin(), ab.end());
    ab.erase(unique(ab.begin(), ab.end()), ab.end());
    return ab;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 6,2,3,4,5,8,9};
    vector<int> b = {2, 3, 5};
    vector<int> result = sortedArray(a, b);

    cout << "Union of a and b: [";
    for (size_t i = 0; i < result.size(); i++){
        std::cout << result[i];
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << std::endl;

    return 0;
}
