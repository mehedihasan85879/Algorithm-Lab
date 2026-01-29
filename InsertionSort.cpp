#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

    cout << "Selection Sort" << endl;

    cout << "Original array: ";
    printArr(arr);

    insertionSort(arr);

    cout << "Sorted array: ";
    printArr(arr);

    return 0;
}
