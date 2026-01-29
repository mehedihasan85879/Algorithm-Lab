#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j <= high - 1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quicksort(vector<int> &arr, int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

void printArr(vector<int> &arr)
{
    for(int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {23, 16, 24, 30, 14, 40};

    cout << "Quick Sort" << endl;

    cout << "Original array: ";
    printArr(arr);

    quicksort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    printArr(arr);

    return 0;
}
