#include <iostream>

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
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


    int digits[20];
    int size = 0;


    long long temp = n;
    while (temp != 0) {
        digits[size++] = temp % 10;
        temp /= 10;
    }

    std::cout << "Original array: ";
    for (int i = size - 1; i >= 0; --i) {
        std::cout << digits[i] << " ";
    }
    std::cout << std::endl;


    sortArray(digits, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << digits[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
