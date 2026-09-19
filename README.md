# Swastik_DSA_Task_ASPER

DSA Recruitment Task solutions for ASPER — 4 problems covering core data structures and algorithms concepts.

## Task 1 — Binary Search
**Approach:** Standard iterative binary search on a sorted array. Array is sorted using `sort()` before searching. Repeatedly compares target with the middle element and eliminates half the search space each time.

**Time Complexity:** O(log n)  
**Space Complexity:** O(1)

## Task 2 — Two Sum
**Approach:** Uses an `unordered_map` to store each number and its index while traversing the array. For each element, checks if its complement (target - current number) already exists in the map.

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

## Task 3 — Power of a Number (Binary Exponentiation)
**Approach:** Uses binary exponentiation to calculate x^n efficiently without using the built-in `pow()` function. At each step, the exponent is halved; if it's odd, the base is multiplied into the result.

**Time Complexity:** O(log n)  
**Space Complexity:** O(1)

## Task 4 — Maximum Subarray Sum (Kadane's Algorithm)
**Approach:** Uses Kadane's Algorithm to find the maximum sum of any contiguous subarray. At each element, decides whether to extend the previous subarray or start a new one, based on whichever gives a larger sum.

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

## Language Used
C++

## How to Run
Each file can be compiled and run individually:
```
g++ filename.cpp -o output
./output
```
