#include <iostream>
#include <bits/stdc++.h>
using namespace std;

main()
{
    int nums[8] = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans;
    for (int i : nums)
    {
        i = abs(i);
        if (nums[i - 1] > 0)
            nums[i - 1] *= -1;
        else
            ans.push_back(i);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}