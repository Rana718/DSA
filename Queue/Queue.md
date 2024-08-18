# Queue and Dequeue (Double-Ended Queue)

## Queue

A **queue** is a linear data structure that follows the First In, First Out (FIFO) principle. It operates on a basis where elements are added from one end (rear) and removed from the other end (front).

### Example of a Queue

Consider a queue with elements `[10, 20, 30, 40]`. Operations:
- **Enqueue(50)** adds `50` to the rear: `[10, 20, 30, 40, 50]`.
- **Dequeue()** removes `10` from the front: `[20, 30, 40, 50]`.
- **Peek()** returns `20` without removing it.
- **isEmpty()** checks if the queue is empty.

## Dequeue (Double-Ended Queue)

A **double-ended queue (deque)** is a generalized queue data structure that allows insertion and deletion of elements from both ends. It can operate in both FIFO and LIFO (Last In, First Out) manners.

### Example of a Dequeue

Consider a dequeue with elements `[10, 20, 30, 40]`. Operations:
- **addFront(5)** adds `5` to the front: `[5, 10, 20, 30, 40]`.
- **addRear(50)** adds `50` to the rear: `[5, 10, 20, 30, 40, 50]`.
- **removeFront()** removes `5` from the front: `[10, 20, 30, 40, 50]`.
- **removeRear()** removes `50` from the rear: `[10, 20, 30, 40]`.
- **peekFront()** returns `10` without removing it.
- **peekRear()** returns `40` without removing it.
- **isEmpty()** checks if the dequeue is empty.
