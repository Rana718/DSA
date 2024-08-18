# Introduction to Graph Theory

Graph theory is a branch of mathematics that studies networks of interconnected nodes (vertices) and edges. It has broad applications in various fields, including computer science, biology, social sciences, and more. This document covers fundamental concepts of graph theory, types of graphs, common terms, and detailed examples.

## Basic Definitions

- **Graph**: A graph \( G \) is defined as a pair \( (V, E) \), where \( V \) is a set of vertices (nodes) and \( E \) is a set of edges connecting pairs of vertices. Each edge is a 2-tuple \((u, v)\), where \( u \) and \( v \) are vertices.

- **Vertex (Node)**: An individual point in a graph. Example: In a social network graph, each person can be represented as a vertex.

- **Edge**: A connection between two vertices. Edges can be directed (with a direction) or undirected (without direction).

- **Degree**: The number of edges incident to a vertex. For an undirected graph, it is the total number of edges connected to that vertex. For directed graphs, we distinguish between in-degree (number of incoming edges) and out-degree (number of outgoing edges).

## Types of Graphs

1. **Undirected Graph**: A graph where edges have no direction. The edge \((u, v)\) is identical to \((v, u)\).

   **Example:**
   ![Undirected Graph](https://www.baeldung.com/wp-content/uploads/sites/4/2020/06/network1-1.png)
   
   *Figure 1: Example of an undirected graph*
   
   - **Properties**:
     - Symmetric edges.
     - Can represent mutual relationships (e.g., friendships).

2. **Directed Graph (Digraph)**: A graph where edges have directions. The edge \((u, v)\) is different from \((v, u)\).

   **Example:**
   ![Directed Graph](https://upload.wikimedia.org/wikipedia/commons/1/1c/Directed_graph%2C_cyclic.svg)
   
   *Figure 2: Example of a directed graph*

   - **Properties**:
     - Asymmetric edges.
     - Can represent one-way relationships (e.g., web links).

3. **Weighted Graph**: A graph where edges have weights or costs associated with them.

   **Example:**
   ![Weighted Graph](https://media.geeksforgeeks.org/wp-content/uploads/20220519165117/weightedgraph.png)

   *Figure 3: Example of a weighted graph*

   - **Properties**:
     - Edges are assigned values representing distances, costs, or capacities.
     - Useful for optimization problems (e.g., shortest path).

4. **Unweighted Graph**: A graph where edges do not have weights or costs.

   **Example:**
   ![Unweighted Graph](https://upload.wikimedia.org/wikipedia/commons/b/bc/Undirected_graph_no_background.svg)

   *Figure 4: Example of an unweighted graph*

   - **Properties**:
     - All edges are equal.
     - Focuses on the structure rather than edge properties.

5. **Connected Graph**: An undirected graph where there is a path between every pair of vertices.

   **Example:**
   ![Connected Graph](https://www.baeldung.com/wp-content/uploads/sites/4/2020/06/network1-1.png)

   *Figure 5: Example of a connected graph*

   - **Properties**:
     - No isolated vertices.
     - Ensures that every vertex is reachable from every other vertex.

6. **Cycle**: A path that starts and ends at the same vertex, with no edges or vertices repeated except for the start/end vertex.

   **Properties**:
     - Contains a loop.
     - Used in algorithms to detect loops.

7. **Tree**: A connected acyclic undirected graph. Every two vertices are connected by exactly one path.

   **Example:**
   ![Tree Graph](https://upload.wikimedia.org/wikipedia/commons/2/24/Tree_graph.svg)

   *Figure 7: Example of a tree*

   - **Properties**:
     - Acyclic by definition.
     - Includes hierarchical structures (e.g., organizational charts).


