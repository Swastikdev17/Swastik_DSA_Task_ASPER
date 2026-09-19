#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function for Two Sum:
// Time Complexity = O(n)
// Space Complexity = O(n)
vector<int> Two_sum(vector<int> &arr, int target)
{
    unordered_map<int, int> m;
    for (int i = 0; i < arr.size(); i++)
    {
        int needed = target - arr[i];
        if (m.find(needed) != m.end())
        {
            return {m[needed], i};
        }
        m[arr[i]] = i;
    }
    return {-1, -1}; // If not found.
}

int main()
{
    int n;
    cout<< "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter "<< n<< " elements: \n";
    for (int i = 0; i < n; i++) // To take the input array.
    {
        cin>> nums[i];
    }
    int target;
    cout<< "Enter the target number:";
    cin>> target;
    vector<int> result = Two_sum(nums, target);
    cout << "Indices: [" << result[0] << " " << result[1] << "]\n";
    return 0;
}