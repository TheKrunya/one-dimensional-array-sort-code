#include <iostream>

using namespace std;

void sortingHigh(int* arr, int size);
void sortingLow(int* arr, int size);
int main()
{
    int* arr;
    int size; 
    do
    {
    cout << "size = ";
    cin >> size;
    if (size <= 0) cerr << "Invalid size" << endl;
    } while (size <= 0);

    arr = new int[size];
    cout << "initial array\n";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl<<"high sorting\n";

    sortingHigh(arr, size);

    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl<< "low sorting\n";

    sortingLow(arr, size);

    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
    delete[] arr;
    return 0;
}

void sortingHigh(int* arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void sortingLow(int* arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
