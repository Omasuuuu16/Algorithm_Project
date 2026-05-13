# Triangular Triplet Detection

A comparative implementation of two algorithmic approaches to solve the **Triangular Triplet Detection** problem. The project evaluates both recursive and non-recursive strategies and analyzes their time complexities.

---

## Problem Definition

Given an array of integers `A` of size `N`, determine whether there exists a triplet `(P, Q, R)` such that:

- `0 ≤ P < Q < R < N`
- The triangle inequality holds:
  - `A[P] + A[Q] > A[R]`
  - `A[Q] + A[R] > A[P]`
  - `A[R] + A[P] > A[Q]`

### Output
- Return `1` if at least one valid triplet exists
- Otherwise return `0`

---

##  Example

### Example 1
**Input:** [10, 50, 1]

**Output:** 0

---

### Example 2
**Input:**[10, 2, 5, 1, 8, 20]
**Output:** 1


Valid triplet: `(10, 2, 8)`

---

##  Approach Overview

This project implements two distinct solutions:

- **Non-Recursive Approach**
- **Recursive Approach**

Both approaches rely on sorting first, followed by checking valid triplets.

---

#  1. Non-Recursive Approach

## Idea

- Sort the array using **Insertion Sort**
- Perform a single linear scan
- Check only consecutive triplets

## Algorithm

1. Sort array using Insertion Sort
2. Iterate from `i = 0` to `N - 3`
3. Check: A[i] + A[i+1] > A[i+2]
4. If true → return `1`
5. If no valid triplet found → return `0`

---

##  Time Complexity

### 🔹 Sorting (Insertion Sort)

| Case       | Complexity |
|------------|------------|
| Best Case  | O(N)       |
| Average    | O(N²)      |
| Worst Case | O(N²)      |

### 🔹 Linear Scan

| Case       | Complexity |
|------------|------------|
| Best Case  | O(1)       |
| Worst Case | O(N)       |

### 🔹 Total Complexity

| Case       | Complexity |
|------------|------------|
| Best Case  | O(N)       |
| Average    | O(N²)      |
| Worst Case | O(N²)      |

---

#  2. Recursive Approach

## Idea

- Sort using **Merge Sort**
- Recursively process array to check valid triplets

---

## Algorithm

### Step 1: Merge Sort
- Divide array into halves
- Recursively sort both halves
- Merge sorted results

### Step 2: Recursive Check
- Check condition:A[i] + A[i+1] > A[i+2]
- Move recursively through array

---

##  Time Complexity

### 🔹 Merge Sort

| Case       | Complexity |
|------------|------------|
| Best Case  | O(N log N) |
| Average    | O(N log N) |
| Worst Case | O(N log N) |

### 🔹 Recursive Check

| Case       | Complexity |
|------------|------------|
| Best Case  | O(1)       |
| Worst Case | O(N)       |

### 🔹 Total Complexity

| Case       | Complexity |
|------------|------------|
| Best Case  | O(N log N) |
| Average    | O(N log N) |
| Worst Case | O(N log N) |

---

#  Implementation Notes

## Non-Recursive Version
- Uses **Insertion Sort**
- Uses iterative traversal
- Simpler but less efficient for large inputs

## Recursive Version
- Uses **Merge Sort**
- Uses recursive traversal
- More scalable and efficient

---

#  Key Insight

After sorting the array, it is sufficient to check only consecutive triplets because:

> In a sorted sequence, any valid triangle must be formed by adjacent elements.

---

#  Conclusion

- The **recursive approach** is more efficient and scalable.
- The **non-recursive approach** is simpler but less optimal for large datasets.
- Both correctly solve the problem under the triangle inequality constraint.

---
