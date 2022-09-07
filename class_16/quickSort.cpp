#include<bits/stdc++.h>
using namespace std;

int createPartition(vector<int> &nums, int L, int R)
{
    int pivot = nums[R];
    int i = L - 1;
    for (int j = L; j < R; j++)
    {
        if (nums[j] <= pivot)
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[R]);
    return i + 1;
}

void quickSort(vector<int> &nums, int L, int R)
{
    if(L < R)
    {
        int p = createPartition(nums, L, R); // [L, R] -->[vi] <= Pivoit <= [vj]
        quickSort(nums, L , p -1);
        quickSort(nums, p+1, R);
    }
}


int main(){
    vector<int> nums = {5, 1, 2, 7, 3, 10, 6};
    //int p = createPartition(nums, 0, nums.size() - 1);
    //cout << p << "\n";
    quickSort(nums, 0, nums.size() - 1);

    for(auto it : nums)
        cout << it << " ";

    return 0;
}
