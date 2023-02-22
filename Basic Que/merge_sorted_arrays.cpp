#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> nums1, int m, vector<int> nums2, int n)
{
    vector<int> merge;
    int i = 0;
    int j = 0;

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            merge.push_back(nums1[i]);
            i++;
        }
        else
        {
            merge.push_back(nums2[j]);
            j++;
        }
    }

    while (i < m)
    {
        merge.push_back(nums1[i]);
        i++;
    }
    while (j < n)
    {
        merge.push_back(nums2[j]);
        j++;
    }
    return merge;
}

main()
{
    vector<int> nums1 = {1, 5, 8, 12};
    vector<int> nums2 = {2, 3, 6, 9};
    vector<int> mergeArray = merge(nums1, nums1.size(), nums2, nums2.size());

    for (int i = 0; i < mergeArray.size(); i++)
    {
        cout << mergeArray[i] << " ";
    }
}