#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> &arr)
{
    int i = 0;
    int j = arr.size() - 1;

    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

main()
{
    vector<int> arr = {10, 9, 8, 5, 4};

    reverse(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}