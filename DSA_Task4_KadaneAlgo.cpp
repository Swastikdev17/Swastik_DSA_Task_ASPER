#include <iostream>
#include <vector>
using namespace std;

// Kadane's Algorithm
// Time Complexity: O(n), Space Complexity: O(1)
int maxSubArray(vector<int> &nums)
{
    int current_sum = nums[0];
    int max_sum = nums[0];
    
    for (int i = 1; i < nums.size(); i++)
    {
        current_sum = max(nums[i], current_sum + nums[i]);
        max_sum = max(max_sum, current_sum);
    }
    
    return max_sum;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter " << n << " elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    int result = maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << result << "\n";
    
    return 0;
}