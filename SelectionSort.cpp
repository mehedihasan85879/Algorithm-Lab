#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{
    for(int i = 0; i < arr.size() - 1; i++)
    {
        int min_idx = i;
        for(int j = i + 1; j < arr.size(); j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
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

    selectionSort(arr);

    cout << "Sorted array: ";
    printArr(arr);

    return 0;
}
