# Sorting Algorithms

Sorting algorithms are techniques used to rearrange elements of a collection in a specific order. Sorting is a fundamental operation in computer science and is used extensively in various applications.

## Types of Sorting Algorithms

### 1. Bubble Sort

- **Description**: Bubble sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

- **Example**:
  Initial array: `[5, 3, 8, 4, 2]`
  After one pass: `[3, 5, 4, 2, 8]`
  After two passes: `[3, 4, 2, 5, 8]`
  After three passes: `[3, 2, 4, 5, 8]`
  After four passes: `[2, 3, 4, 5, 8]`

### 2. Selection Sort

- **Description**: Selection sort divides the input list into two parts: a sorted sublist and an unsorted sublist. It repeatedly selects the smallest element from the unsorted sublist and swaps it with the leftmost unsorted element.

- **Example**:
  Initial array: `[5, 3, 8, 4, 2]`
  After first pass: `[2, 3, 8, 4, 5]`
  After second pass: `[2, 3, 8, 4, 5]`
  After third pass: `[2, 3, 4, 8, 5]`
  After fourth pass: `[2, 3, 4, 5, 8]`

### 3. Insertion Sort

- **Description**: Insertion sort builds a sorted array one element at a time by taking elements from the unsorted part and inserting them into their correct positions in the sorted part.

- **Example**:
  Initial array: `[5, 3, 8, 4, 2]`
  After first pass: `[3, 5, 8, 4, 2]`
  After second pass: `[3, 5, 8, 4, 2]`
  After third pass: `[3, 4, 5, 8, 2]`
  After fourth pass: `[2, 3, 4, 5, 8]`

### 4. Merge Sort

- **Description**: Merge sort divides the array into two halves, sorts each half recursively, and then merges the sorted halves to produce a sorted array.

- **Example**:
  Initial array: `[5, 3, 8, 4, 2]`
  After splitting: `[5, 3] [8, 4, 2]`
  After further splitting: `[5] [3] [8] [4, 2]`
  After merging: `[3, 5] [4, 2, 8]`
  After final merge: `[2, 3, 4, 5, 8]`

### 5. Quick Sort

- **Description**: Quick sort picks an element as a pivot and partitions the array around the pivot. It recursively sorts the subarrays on either side of the pivot.

- **Example**:
  Initial array: `[5, 3, 8, 4, 2]`
  After partitioning around pivot `4`: `[3, 2, 4, 5, 8]`
  Recursively sort left of pivot: `[3, 2]`
  Recursively sort right of pivot: `[5, 8]`
  Final sorted array: `[2, 3, 4, 5, 8]`

### 6. Counting Sort

- **Description**: Counting sort is a non-comparison based sorting algorithm that sorts elements by counting the number of occurrences of each unique element and using arithmetic to determine their position in the output sequence.

- **Example**:
  Initial array: `[4, 2, 2, 8, 3, 3, 1]`
  Counting occurrences: `[1: 1, 2: 2, 3: 2, 4: 1, 8: 1]`
  Output array: `[1, 2, 2, 3, 3, 4, 8]`

## Choosing a Sorting Algorithm

- **Selection**:
  - **Bubble Sort**: Simple implementation, suitable for small datasets.
  - **Selection Sort**: Useful for small arrays or when memory space is limited.
  - **Insertion Sort**: Efficient for small datasets or nearly sorted arrays.
  - **Merge Sort**: Efficient for large datasets due to its divide-and-conquer approach.
  - **Quick Sort**: Efficient for large datasets, but may require additional space for recursion.
  - **Counting Sort**: Efficient for sorting integers when the range of elements is known beforehand.

Sorting algorithms vary in efficiency, stability, and suitability for different types of data and constraints.
