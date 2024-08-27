// ordered_array.hpp

#include <vector>
#include <algorithm>
#include <stdexcept>

class ordered_array {
private:
    std::vector<int> arr;
    int capacity;

public:
    // Constructor
    ordered_array(int cap) : capacity(cap) {}

    // Destructor
    ~ordered_array() {}

    // Get the size of the array
    int size() {
        return arr.size();
    }

    // Get the capacity of the array
    int capacity() {
        return capacity;
    }

    // Insert a value into the array
    void insert(int elem);

    // Remove a value from the array
    void remove(int elem);

    // Check if a value exists in the array
    bool exists(int elem);

    // Get the value at a specific index
    int at(int i);
};


