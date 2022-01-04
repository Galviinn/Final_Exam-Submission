#include <array>
#include <iostream>
#include <algorithm>

using namespace std;

template <typename T, size_t size>
int binarySearch(const array < T, size > & items, const T & key){
    int low = 0; 
    int high = items.size() -1;
    int middle = (low + high + 1) / 2;
    int location = -1;

    do {
        if (key == items[middle]) {
            location = middle;
        } else if (key < items[middle]) {
            high = middle - 1;
        } else {
            low = middle + 1;
        } middle = (low + high + 1) / 2;
    } while ((low <= high) && (location == -1));
    return location;
}


int main() {
    int searchKey;
    const size_t arraySize = 10;
    array <int, arraySize> data;
    data = {
        8129978, 8113274, 8129444, 8963596, 8712178, 8123611, 8136475, 8136545, 8112045, 8775469};
    cout << "Enter your phone number:  "; cin >> searchKey;

    sort(data.begin(), data.end());
    int element = binarySearch (data, searchKey);
    if (element != -1) {
        cout << "Found in element: " << element << endl;
    } else {
        cout << "Sorry value not found!" << endl;
    }
}