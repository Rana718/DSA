# 🌳 Tree Data Structure

## 📚 Introduction
A **tree** is a widely used abstract data type that simulates a hierarchical tree structure with a set of connected nodes. Each node stores a value and a list of references to other nodes (the "children"). Trees are an essential part of various algorithms and data structures.

## 📖 Basic Terminology
- **Node**: An individual element in a tree.
- **Root**: The topmost node of a tree, where the tree starts.
- **Edge**: The connection between two nodes.
- **Parent**: The node directly above another node connected by an edge.
- **Child**: The node directly below another node connected by an edge.
- **Leaf**: A node with no children.
- **Subtree**: A tree consisting of a node and all its descendants.
- **Depth**: The number of edges from the root to the node.
- **Height**: The number of edges on the longest path from the node to a leaf.
- **Degree**: The number of children a node has.

## 🏷️ Properties of Trees
1. **Acyclic**: Trees do not contain cycles.
2. **Connected**: There is exactly one path between any two nodes.
3. **Directed/Undirected**: Trees can be directed or undirected.

## 🌲 Types of Trees
- **Binary Tree**: Each node has at most two children.
- **Binary Search Tree (BST)**: A binary tree where the left child contains only nodes with values less than the parent node, and the right child only nodes with values greater than the parent node.
- **Balanced Tree**: A tree where the height difference between left and right subtrees for any node is no more than one.
- **Full Tree**: A tree where every node has 0 or 2 children.
- **Complete Tree**: A binary tree where all levels are completely filled except possibly for the last level, which is filled from left to right.

## 🔍 Applications of Trees
- **Hierarchical Data Representation**: Organizational structures, file systems.
- **Binary Search Trees**: Efficient searching, insertion, and deletion operations.
- **Heaps**: Priority queues.
- **Syntax Trees**: Representing expressions in compilers and interpreters.

## 🌿 Example Tree
Below is an example image of a simple tree structure:

![Tree Structure](https://upload.wikimedia.org/wikipedia/commons/f/f7/Binary_tree.svg)

## 📝 Conclusion
Trees are fundamental data structures in computer science. Understanding their properties and applications is crucial for designing efficient algorithms and managing hierarchical data.

