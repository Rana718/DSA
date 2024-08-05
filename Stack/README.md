# Stack Data Structure

A **stack** is a linear data structure that follows the Last In, First Out (LIFO) principle. It operates on a basis where elements are added and removed from the top of the stack.

## Operations in a Stack

- **Push**: Adds an element to the top of the stack.
- **Pop**: Removes and returns the element from the top of the stack.
- **Peek or Top**: Returns the element at the top of the stack without removing it.
- **isEmpty**: Checks if the stack is empty.

## Example of a Stack

Consider a stack initialized as empty:

- **Push(5)**: Stack becomes `[5]`.
- **Push(3)**: Stack becomes `[5, 3]`.
- **Push(8)**: Stack becomes `[5, 3, 8]`.
- **Pop()**: Removes `8` from the top. Stack becomes `[5, 3]`.
- **Peek()**: Returns `3` without removing it.
- **Pop()**: Removes `3` from the top. Stack becomes `[5]`.
- **isEmpty()**: Returns `false`.
- **Pop()**: Removes `5` from the top. Stack becomes empty.

## Visual Representation

![Stack Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221219100314/stack.drawio2.png)

## Applications of Stacks

- **Function Call Stack**: Used by the compiler to keep track of function calls.
- **Undo Mechanisms**: Allows users to undo actions by storing previous states.
- **Expression Evaluation**: Used in evaluating postfix expressions (Reverse Polish Notation).
- **Backtracking**: Used in algorithms that explore multiple paths.

Stacks are efficient for operations that involve adding and removing elements from one end, especially when the order of operation is important or needs to be reversed.
