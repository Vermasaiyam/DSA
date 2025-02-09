#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // create 2 arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // merge 2 arrays
    int i = 0, j = 0;
    k = s;

    while (i < len1 && j < len2)
    {
        if (first[i] > second[j])
        {
            arr[k++] = second[j++];
        }
        else
        {
            arr[k++] = first[i++];
        }
    }
    while (i < len1)
    {
        arr[k++] = first[i++];
    }
    while (j < len2)
    {
        arr[k++] = second[j++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    while (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // left part sort krna hai
    mergeSort(arr, s, mid);
    // left part sort krna hai
    mergeSort(arr, mid + 1, e);

    // merge krdo
    merge(arr, s, e);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}