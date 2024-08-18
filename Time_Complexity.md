# Time Complexity

Time complexity is a computational complexity that describes the amount of time it takes to run an algorithm as a function of the length of the input. It's a key concept in computer science for analyzing the efficiency of algorithms.

## Big O Notation

Big O notation is used to classify algorithms according to how their run time or space requirements grow as the input size grows.

### Common Time Complexities

1. **O(1) - Constant Time:**
    - The time complexity is constant, regardless of the size of the input.
    ```math
    T(n) = O(1)
    ```

2. **O(log n) - Logarithmic Time:**
    - The time complexity grows logarithmically as the input size increases.
    ```math
    T(n) = O(\log n)
    ```

3. **O(n) - Linear Time:**
    - The time complexity grows linearly with the input size.
    ```math
    T(n) = O(n)
    ```

4. **O(n log n) - Linearithmic Time:**
    - The time complexity grows in a combination of linear and logarithmic.
    ```math
    T(n) = O(n \log n)
    ```

5. **O(n^2) - Quadratic Time:**
    - The time complexity grows quadratically with the input size.
    ```math
    T(n) = O(n^2)
    ```

6. **O(2^n) - Exponential Time:**
    - The time complexity grows exponentially with the input size.
    ```math
    T(n) = O(2^n)
    ```

7. **O(n!) - Factorial Time:**
    - The time complexity grows factorially with the input size.
    ```math
    T(n) = O(n!)
    ```

## Graph of Common Time Complexities

Here's a graph to visualize the growth rates of different time complexities:

![Time Complexity Graph](https://miro.medium.com/v2/resize:fit:828/format:webp/1*6mpaXFsrRPFXSKXK5Qgm8w.png)

In the graph above:
- **x-axis**: Represents the input size \( n \)
- **y-axis**: Represents the time \( T(n) \)

The graph shows how different time complexities grow as the input size increases. From the bottom to the top:
- **O(1)**: A horizontal line, indicating constant time.
- **O(log n)**: A logarithmic curve, growing slowly.
- **O(n)**: A straight line, growing linearly.
- **O(n log n)**: A linearithmic curve.
- **O(n^2)**: A quadratic curve.
- **O(2^n)**: An exponential curve, growing very quickly.
- **O(n!)**: A factorial curve, growing extremely fast.

## Example Equations

### O(1) - Constant Time
```math
T(n) = c
```
Example: Accessing an array element by index.

### O(log n) - Logarithmic Time
```math
T(n)=clogn
```
Example: Binary search.

### O(n) - Linear Time
```math
T(n)=cn
```
Example: Iterating through an array.

### O(n log n) - Linearithmic Time
```math
T(n)=cnlogn
```
Example: Merge sort.

### O(n^2) - Quadratic Time
```math
T(n)=cn^2
```
Example: Bubble sort.

### O(2^n) - Exponential Time
```math
T(n)=c2^n
```
Example: Solving the Tower of Hanoi.

### O(n!) - Factorial Time
```math
T(n)=cn!
```
Example: Solving the traveling salesman problem with a brute-force approach.


## summary
Understanding time complexity is crucial for designing efficient algorithms. By analyzing the time complexity, we can predict how an algorithm will scale and choose the best approach for the problem at hand.
