# Data Structures and Algorithms in C++

A collection of my C++ solutions to selected LeetCode and GeeksforGeeks problems. The repository currently focuses on **Linked Lists**.

## Repository structure

```text
DSA/
└── Linked-List/
    ├── 19-Remove-Nth-Node-From-End-of-List.cpp
    ├── 21-Merge-Two-Sorted-Lists.cpp
    ├── 206-Reverse-Linked-List.cpp
    ├── 237-Delete-Node-in-a-Linked-List.cpp
    ├── 328-Odd-Even-Linked-List.cpp
    └── 876-Middle-of-the-Linked-List.cpp
```

## Problem index

| Problem | Platform | Main technique |
|---|---|---|
| [19. Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | LeetCode | Two pointers |
| [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | LeetCode | Iterative pointer manipulation |
| [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | LeetCode | Iterative reversal |
| [237. Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/) | LeetCode | Node value replacement |
| [328. Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/) | LeetCode | Relative-position grouping |
| [876. Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) | LeetCode | Slow and fast pointers |

## Solution conventions

Each solution is intended to include:
- The problem ID and descriptive title in its filename.
- A clear C++ implementation compatible with the platform's expected function signature.
- Time and auxiliary-space complexity.
- A short explanation of the key idea where useful.

Complexity depends on the specific implementation. Refer to each solution when reviewing its exact approach.

## Running locally

Many files use the LeetCode-provided `ListNode` definition. To compile them independently, add a small local driver and the required node structure, or submit the solution directly to the corresponding platform.

## Progress

This repository is being built incrementally. Only the six Linked List problems listed above are currently tracked; other DSA topics will be added as solutions are completed and reviewed.

## License

See [LICENSE](LICENSE).
