## Question-2 (k-th Largest Element)

### Using Quickselect Approach

- **Submission Link:** [LeetCode Submission](https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1148371798)
- **Status:** Didn't pass all test cases on LeetCode due to a worst-case scenario.
- **Time Complexity:** O(n) (Average and Best case), O(n^2) (Worst Case)
- **Space Complexity:** O(1)
- **Explanation:** First the left and right boundaries of the array are initialized.Then select right boundary as a pivot element. Then elements smaller than the pivot are moved to its left, and larger elements to its right. The algorithm then checks the position of the pivot. If it matches the desired k-th largest index, the pivot is returned. Otherwise, the algorithm adjusts the boundaries based on the pivot's position, either narrowing down the search space to the left or right, and repeats the process until the k-th largest element is identified.
  ![Submission Photo](<Screenshot from 2024-01-17 08-02-57.png>)

### Using Heap (Priority Queue)

- **Submission Link:** [LeetCode Submission](https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1148365508)
- **Status:** Passed all test cases
- **Time Complexity:** O(nlogk)
- **Space Complexity:** O(k)
- **Explanation:** A priority-queue (heap) of k elements is maintained and then interates across elements of n sized array ensuring that only largest k elements encounterred till now remain in the heap. So after iterating through whole array the top element of the priority queue will be the smallest element among largest k elements of the array which is the required answers.
  ![Submission Photo](<Screenshot from 2024-01-17 07-53-22.png>)

### Using STL

- **Submission Link:** [LeetCode Submission](https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1148381898)
- **Status:** Passed all test cases
- **Time Complexity:** O(nlogk)
- **Space Complexity:** O(1)
- **Explanation:** Utilizes the C++ STL function `nth_element` to efficiently find the k-th largest element in the array.
  ![Submission Photo](<Screenshot from 2024-01-17 08-21-14.png>)
