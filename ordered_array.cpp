// ordered_array.cpp
#include "ordered_array.hpp"

void ordered_array::insert(int elem) {
    // If size() == n, the time complexity is O(n log n) due to sorting.
    // The reason is that every time we insert an element, we need to sort the array.
    if (elem == -2147483648 || size() == capacity) {
        return;
    }
    arr.push_back(elem);
    std::sort(arr.begin(), arr.end());
}

void ordered_array::remove(int elem) {
    // If size() == n, the time complexity is O(n) due to the find operation.
    // The reason is that we need to find the element in the array which requires scanning through the array.
    if (elem == -2147483648) {
        return;
    }
    auto it = std::find(arr.begin(), arr.end(), elem);
    if (it != arr.end()) {
        arr.erase(it);
    }
}

bool ordered_array::exists(int elem) {
    // If size() == n, the time complexity is O(n) due to the find operation.
    // The reason is that we need to find the element in the array which requires scanning through the array.
    if (elem == -2147483648) {
        return false;
    }
    return std::find(arr.begin(), arr.end(), elem) != arr.end();
}

int ordered_array::at(int i) {
    if (i < 0 || i >= size()) {
        throw std::out_of_range("Index out of range");
    }
    return arr[i];
}
