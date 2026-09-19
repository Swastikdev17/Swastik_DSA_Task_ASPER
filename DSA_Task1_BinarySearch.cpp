#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function for Binary Search:
    // Returns index of target if found, else -1
    // Time Complexity: O(log n), Space Complexity: O(1)
int binary_search(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low)/ 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            low = mid +1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<< "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter "<< n<< " elements: \n";
    for (int i = 0; i < n; i++) // To take the input array.
    {
        cin>> arr[i];
    }
    sort(arr.begin(),arr.end()); // Binary search requires a sorted array.
    cout<<"The sorted array is:\n[";
    for (int j = 0; j < n; j++) // To display  the sorted array.
    {
        cout<< " "<<arr[j];
    }
    cout<<"]\n";
    int target;
    cout<< "Enter the number to be searched:";
    cin>> target;
    int Result = binary_search(arr, target);
    cout << "Target value was found at index: " << Result << "\n";
    return 0;
}