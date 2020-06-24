#include <iostream>
#include <vector>

using namespace std;

void print(const int *const arr, size_t size) {
    cout << "[ ";
    for (int i {0}; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << ']';
    return;
}

int* apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2) {
    int* arr = new int[size1 * size2];

    int position {0};
    for (int i {0}; i < size1; i++) {
        for (int j {0}; j < size2; j++) {
            arr[position] = arr1[i] * arr2[j];
            position++;
        }
    }

    return arr;
}


int main() {

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    print(array1, 5);
    cout << endl;
    print(array2, 3);
    cout << endl;

    int* result = apply_all(array1, 5, array2, 3);
    print(result, 15);
    cout << endl;

    delete [] result;
}