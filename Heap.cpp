#include <iostream>

using namespace std;

void maxHeapify(int arr[], int i, int n)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, largest, n);
    }
}

void buildMaxHeap(int arr[], int n)
{
    for (int i = n / 2; i >= 0; i--)
    {
        maxHeapify(arr, i, n);
    }
}

void minHeapify(int arr[], int i, int n)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left <= n && arr[left] < arr[i])
        smallest = left;

    if (right <= n && arr[right] < arr[i])
        smallest = right;

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        minHeapify(arr, smallest, n);
    }
}

void buildMinHeap(int a[], int n)
{
    for (int i = n / 2; i >= 0; i--)
        minHeapify(a, i, n);
}

int main()
{
    int a[8] = {11, 4, 7, 8, 3, 2, 6, 5};
    int len = sizeof(a) / sizeof(a[0]);

    buildMaxHeap(a, len);

    for (auto it : a)
        cout << it << " ";

    buildMaxHeap(a, len);

    return 0;
}