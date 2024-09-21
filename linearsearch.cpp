#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> vec, int target) {
    for (int i = 0; i < vec.size(); i++){
        if (vec[i] > target) {
            return vec[i];
        }
    }
    return -1;
}
//Purpose: To find the target element in the vector

int main() {
    vector<int> vec = {5, 2, 9, 7, 4, 6}; 
    int target = 5;

    int result = linearSearch(vec, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found in the array" << result<< endl;
    }
    return 0;
}

