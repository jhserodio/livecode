#include <iostream>
#include <vector>
#include <cstdlib>

static bool is_sorted(const std::vector<int>& array) {
    for (size_t i = 1; i < array.size(); i++) {
        if (array[i - 1] > array[i]) {
            return false;
        }
    }
    return true;
}

static int binary_search(const std::vector<int>& array, int target) {
    int left = 0;
    int right = array.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == target) {
            return mid;
        }
        if (array[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int size;
    std::cout << "Array size: ";
    
    // std::cin avalia como falso se a leitura falhar
    if (!(std::cin >> size) || size <= 0) {
        std::cerr << "Invalid size.\n";
        return EXIT_FAILURE;
    }

    std::vector<int> array(size);
    
    std::cout << "Enter " << size << " sorted elements: ";
    for (int i = 0; i < size; i++) {
        if (!(std::cin >> array[i])) {
            std::cerr << "Invalid input.\n";
            return EXIT_FAILURE;
        }
    }

    if (!is_sorted(array)) {
        std::cerr << "The array must be sorted.\n";
        return EXIT_FAILURE;
    }

    int target;
    std::cout << "Target: ";
    if (!(std::cin >> target)) {
        std::cerr << "Invalid input.\n";
        return EXIT_FAILURE;
    }

    int index = binary_search(array, target);
    if (index >= 0) {
        std::cout << "Value " << target << " found at index " << index << ".\n";
    } else {
        std::cout << "Value " << target << " not found.\n";
    }

    return EXIT_SUCCESS;
}
