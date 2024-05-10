#include <iostream>
#include <vector>

void sortArray(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        for (int j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    long long n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    std::vector<int> digits;
    while (n != 0) {
        digits.push_back(n % 10);
        n /= 10;
    }

    std::cout << "Original array: ";
    for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    sortArray(digits);

    std::cout << "Sorted array: ";
    for (int digit : digits) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;

    return 0;
}
