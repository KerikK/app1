#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

void Random(int* arr, int size);
void Maximum(int* arr, int size);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(static_cast<unsigned>(time(0)));

    const int size = 7;
    int arr[size];
    cout << "Заповнення масиву: ";
    Random(arr, size);

    cout << "\nMAX: ";
    Maximum(arr, size);

    cout << "\nМасив після заміни максимального значення на 0: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}

void Random(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = -10 + rand() % 21;
        cout << *(arr + i) << ' ';
    }
}

void Maximum(int* arr, int size) {
    int max = arr[0];
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (max < *(arr + i)) {
            max = *(arr + i);
            index = i;
        }
    }
    cout << max;
    arr[index] = 0;
}
//github