# Binary Trees.

This project covers my learning track on DSA, precisely binary trees.  
The concepts covered include:

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Data Structures

The following data structures and types of binary trees are used for this project.  

### Basic Binary Tree

```c

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

```

### Binary Search Tree

```c

typedef struct binary_tree_s bst_t;

```

### AVL Tree

```c

typedef struct binary_tree_s avl_t;

```

### Max Binary Heap

```c

typedef struct binary_tree_s heap_t;

```

### Print function

A custom print function is used in this project for visualization purposes.
The function is defined in [this](binary_tree_print.c) file
