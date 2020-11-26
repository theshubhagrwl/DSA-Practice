#include <iostream>
using namespace std;

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertionSort(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int value = a[i];
        int flag = i;
        while (flag > 0 && a[flag - 1] > value)
        {
            a[flag] = a[flag - 1];
            flag--;
        }
        a[flag] = value;
    }
}

int main()
{
    int data[] = {9, 5, 1, 4, 4, 23, 432, 4};
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data, size);
    cout << "Sorted array in ascending order:\n";
    printArray(data, size);
}