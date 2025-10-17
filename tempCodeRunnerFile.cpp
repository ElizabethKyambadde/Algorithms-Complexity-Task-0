#include <iostream>

void fillArray(float a[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter an integer number: ";
        std::cin >> a[i];
    }
}

void printArray(float a[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void printArrayInReverseOrder(float a[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    float floatArr[5] = {0};
    fillArray(floatArr, 5);
    printArray(floatArr, 5);
    printArrayInReverseOrder(floatArr, 5);
}
