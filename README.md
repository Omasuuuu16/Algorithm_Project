# Triangle Triplet Problem

This project solves the **Triangle Triplet Problem** using two different algorithms:

- Non-Recursive Algorithm (Bubble Sort)
- Recursive Algorithm (Merge Sort)

---

# Problem Statement

Given an array `A` containing `N` integers, determine whether there exists a triangular triplet.

A triplet `(P, Q, R)` is triangular if:

```text
0 ≤ P < Q < R < N
```

and:

```text
A[P] + A[Q] > A[R]
A[Q] + A[R] > A[P]
A[R] + A[P] > A[Q]
```

The function should return:

- `1` if a triangular triplet exists
- `0` otherwise

---

# Example

## Input

```text
[10, 2, 5, 1, 8, 20]
```

## Output

```text
1
```

Explanation:

```text
5 + 8 > 10
```

Therefore, a triangle can be formed.

---

# Algorithm 1: Non-Recursive Algorithm

## Bubble Sort + Triangle Check

### Idea

1. Sort the array using Bubble Sort
2. Check every 3 consecutive elements
3. If:

```text
A[i] + A[i+1] > A[i+2]
```

then a triangle exists.

---

## Pseudocode

```text
FUNCTION Triangle_Bubble(A)

    N ← length(A)

    // Bubble Sort
    FOR i = 0 TO N-2 DO
        FOR j = 0 TO N-2-i DO

            IF A[j] > A[j+1] THEN
                SWAP A[j], A[j+1]
            END IF

        END FOR
    END FOR

    // Triangle Check
    FOR i = 0 TO N-3 DO

        IF A[i] + A[i+1] > A[i+2] THEN
            RETURN 1
        END IF

    END FOR

    RETURN 0

END FUNCTION
```

---

## Analysis

- Bubble Sort arranges the array in ascending order.
- After sorting, checking only consecutive elements is enough.
- If the sum of two smaller elements is greater than the third element, then a triangle exists.

---

## Time Complexity

| Operation | Complexity |
|---|---|
| Bubble Sort | O(n²) |
| Triangle Check | O(n) |
| Total | O(n²) |

---

# Algorithm 2: Recursive Algorithm

## Merge Sort + Triangle Check

### Idea

1. Sort the array using Merge Sort (Recursive)
2. Check every 3 consecutive elements
3. If:

```text
A[i] + A[i+1] > A[i+2]
```

then a triangle exists.

---

## Pseudocode

### Merge Sort

```text
FUNCTION MergeSort(A, left, right)

    IF left >= right THEN
        RETURN
    END IF

    mid ← (left + right) / 2

    MergeSort(A, left, mid)
    MergeSort(A, mid+1, right)

    Merge(A, left, mid, right)

END FUNCTION
```

### Triangle Check

```text
FUNCTION Triangle_Merge(A)

    MergeSort(A)

    FOR i = 0 TO length(A)-3 DO

        IF A[i] + A[i+1] > A[i+2] THEN
            RETURN 1
        END IF

    END FOR

    RETURN 0

END FUNCTION
```

---

## Analysis

- Merge Sort uses recursion and Divide & Conquer.
- The array is divided into smaller parts, sorted, then merged again.
- After sorting, the triangle condition is checked using consecutive elements.

---

## Time Complexity

| Operation | Complexity |
|---|---|
| Merge Sort | O(n log n) |
| Triangle Check | O(n) |
| Total | O(n log n) |

---

# Comparison Between Algorithms

| Feature | Bubble Sort | Merge Sort |
|---|---|---|
| Type | Non-Recursive | Recursive |
| Time Complexity | O(n²) | O(n log n) |
| Speed | Slower | Faster |
| Memory Usage | Lower | Higher |
| Best For | Small arrays | Large arrays |

---

# Conclusion

- Bubble Sort is simple and easy to understand but slower.
- Merge Sort is more efficient and performs better with large arrays.
- Sorting simplifies the process of checking the triangle condition.

---
