# DSA Assignment-1

## Question-2 (k-th Largest Element)

### Using Quickselect Approach

- **Submission Link:** [LeetCode Submission](https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1148371798)
- **Status:** Didn't pass all test cases on LeetCode due to a worst-case scenario.
- **Time Complexity:** O(n) (Average and Best case), O(n^2) (Worst Case)
- **Space Complexity:** O(1)
- **Explanation:** First the left and right boundaries of the array are initialized.Then select right boundary as a pivot element. Then elements smaller than the pivot are moved to its left, and larger elements to its right. The algorithm then checks the position of the pivot. If it matches the desired k-th largest index, the pivot is returned. Otherwise, the algorithm adjusts the boundaries based on the pivot's position, either narrowing down the search space to the left or right, and repeats the process until the k-th largest element is identified. 
![Submission Photo](<./Ques-2/Screenshot from 2024-01-17 08-02-57.png>)


### Using Heap (Priority Queue)

- **Submission Link:** [LeetCode Submission](https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1148365508)
- **Status:** Passed all test cases
- **Time Complexity:** O(nlogk)
- **Space Complexity:** O(k)
- **Explanation:**  A priority-queue (heap) of k elements is maintained and then interates across elements of n sized array ensuring that only largest k elements encounterred till now remain in the heap. So after iterating through whole array the top element of the priority queue will be the smallest element among largest k elements of the array which is the required answers.
![Submission Photo](<./Ques-2/Screenshot from 2024-01-17 07-53-22.png>)

### Using STL

- **Submission Link:** [LeetCode Submission](https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1148381898)
- **Status:** Passed all test cases
- **Time Complexity:** O(nlogk)
- **Space Complexity:** O(1)
- **Explanation:** Utilizes the C++ STL function `nth_element` to efficiently find the k-th largest element in the array.
![Submission Photo](<./Ques-2/Screenshot from 2024-01-17 08-21-14.png>)

## Question-3 (3-Sum Closest)

- **Submission Link:** [LeetCode Submission](https://leetcode.com/problems/3sum-closest/submissions/1149059401)
- **Status:** Passed all test cases
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
- **Explanation:** First sort the given vector and then iterate over the vector we get a new target sum i.e target-current value ,now we use the two pointer approach to get the closest possible value to the new target and keep updating the answer when the absolute diiference of answer is greater than the current totalsum i.e. newtarget + current value.
![Submission Photo](./Ques-3/image.png)

## Question-4 (Jump-Game)

- **Submission Link:** [LeetCode Submission](https://leetcode.com/problems/jump-game/submissions/1141328105)
- **Status:** Passed all test cases
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)
- **Explanation:** The algorithm maintains a variable, maxi, representing the maximum reachable index from the current position. It starts from the first element of the array, iterates through each element, and updates maxi to be the maximum of its current value and the sum of the current element's value and its index. The loop breaks if the iteration exceeds the current maxi, indicating that further progress is not possible. After the loop, the code checks if the updated maxi is greater than or equal to the last index of the array. If true, it returns true, indicating that reaching the end is possible; otherwise, it returns false. 
![Submission Photo](./Ques-4/image.png)

## Question-5 (Design Front Middle Back Queue)

- **Submission Link:** [LeetCode Submission](https://leetcode.com/problems/design-front-middle-back-queue/submissions/1150753372/)
- **Status:** Passed all test cases
- **Time Complexity:** O(1) for all operations
- **Explanation:**
    - `pushFront(int value)`: Adds a node to the front, adjusting the middle pointer if needed.
    - `pushMiddle(int value)`: Inserts a node in the middle, adjusting the middle pointer based on the count.
    - `pushBack(int value)`: Appends a node to the back, adjusting the middle pointer if the count is even.
    - `popFront()`: Removes and returns the front node, adjusting the middle pointer if necessary.
    - `popMiddle()`: Removes and returns the middle node, adjusting the middle pointer based on the remaining elements.
    - `popBack()`: Removes and returns the back node, adjusting the middle pointer if the count is odd.
![Submission Photo](<./Ques-5/Screenshot from 2024-01-19 21-01-15.png>)
