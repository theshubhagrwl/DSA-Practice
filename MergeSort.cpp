#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    //size for new arrays
    int n1 = m - l + 1;
    int n2 = r - m;

    int leftArr[n1], rightArr[n2];

    //filling new arrays
    for (i = 0; i < n1; i++)
        leftArr[i] = a[l + i];
    for (j = 0; j < n2; j++)
        rightArr[j] = a[m + 1 + j];

    //i and j are for iterating over new arrays
    // k is used to fill data int the main array
    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            a[k] = leftArr[i];
            i++;
        }
        else
        {
            a[k] = rightArr[j];
            j++;
        }
        k++;
    }
    //copying leftovers if any
    while (i < n1)
    {
        a[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        // int mid = (l + r) / 2;
        int mid = l + (r - l) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);

        merge(a, l, mid, r);
    }
}

void printArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int arr[6] = {2, 11, 23, 5, 6, 7};

    printf("Given array is \n");
    printArray(arr, 6);

    mergeSort(arr, 0, 6 - 1);

    printf("\nSorted array is \n");
    printArray(arr, 6);
    return 0;
}
