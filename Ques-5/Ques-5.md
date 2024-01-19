
## Question-5 (Design Front Middle Back Queue)

- **Submission Link:** [LeetCode Submission](https://leetcode.com/problems/)
- **Status:** Passed all test cases
- **Time Complexity:** O(1) for all operations
- **Explanation:**
    - `pushFront(int value)`: Adds a node to the front, adjusting the middle pointer if needed.
    - `pushMiddle(int value)`: Inserts a node in the middle, adjusting the middle pointer based on the count.
    - `pushBack(int value)`: Appends a node to the back, adjusting the middle pointer if the count is even.
    - `popFront()`: Removes and returns the front node, adjusting the middle pointer if necessary.
    - `popMiddle()`: Removes and returns the middle node, adjusting the middle pointer based on the remaining elements.
    - `popBack()`: Removes and returns the back node, adjusting the middle pointer if the count is odd.
![Submission Photo](<Screenshot from 2024-01-19 21-01-15.png>)