#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> v1, vector<int> v2)
{
    v1.shrink_to_fit();
    v2.shrink_to_fit();
    for (int i = 0; i < v2.size(); i++)
    {
        v1.push_back(v2[i]);
    }
    return v1;
}

vector<int> mergeSort(int arr[], int l, int r)
{
    vector<int> v1, v2;
    int m = (l + r) / 2;
    v1 = mergeSort(arr, l, m);
    v2 = mergeSort(arr, m + 1, r);

    return merge(v1, v2);
    // v1= arr[l:r];
}

int main()
{
    vector<int> v = {12, 11, 13, 5, 6, 7};
    // Insert code here
    return 0;
}