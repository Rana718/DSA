# Linked Lists, Circular Lists, and Doubly Linked Lists

## Linked Lists

A **linked list** is a linear data structure where each element (node) is a separate object. Each node contains data and a reference (link) to the next node in the sequence. Linked lists allow for efficient insertion and deletion of elements compared to arrays.

### Types of Linked Lists

#### Singly Linked List
- Each node contains data and a single link to the next node.
- Operations: Insertion and deletion are efficient (O(1) for head and tail insertion/deletion).

#### Doubly Linked List
- Each node contains data, a link to the next node, and a link to the previous node.
- Operations: Allows traversal in both directions, but requires more memory per node.

## Circular Linked Lists

A **circular linked list** is a linked list where the last node points back to the first node instead of null. This forms a circle and can be singly or doubly linked.

### Types of Circular Linked Lists

#### Singly Circular Linked List
- Last node points back to the first node forming a circle.
- Operations: Similar to a singly linked list but with circular traversal.

#### Doubly Circular Linked List
- Both the head's previous node and the tail's next node are connected in a circle.
- Operations: Allows traversal in both directions within a circular arrangement.

## Doubly Linked Lists

A **doubly linked list** is a type of linked list where each node contains a data element and two links. The first link points to the previous node in the sequence, and the second link points to the next node in the sequence.

### Advantages of Doubly Linked Lists
- **Bidirectional traversal**: Allows traversal in both forward and backward directions.
- **Insertion and deletion**: More efficient than singly linked lists for some operations, like deleting a node when given a pointer to it.

### Disadvantages of Doubly Linked Lists
- **Memory overhead**: Requires more memory per node due to the extra pointer.
- **Complexity**: More complex to implement and maintain compared to singly linked lists.

