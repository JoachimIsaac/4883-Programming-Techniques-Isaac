Approach:

We are given nodes in a pre-order format. (node, left , right)
We want to get the nodes in post order format. (left, right, node)

We also need to represent these nodes in a binary search.
In this case a binart search tree is a tree that all the nodes to the left 
are strictly left than the root and all the nodes to the right are strictly great than the root.
This also hold for all sub trees since all the subtrees of a binary search tree has to be binary search trees.


Knowing the order for preorder traversal ad post order traversal and the fact that our nodes are to be housed in
a binary search tree, this tells us a few things. 

Since we are not given a root node that links to the entire tree and we are only given numbers, we have to build our own BST.
Or atleast this is what I think would be a decent approach.

Why build the tree? Well after building the tree we cabn simply traverse it in post order fashion and we will have the output of
the tree in post-order format.

```
Steps: 
1. We build the binary search tree with our input.
2. After building the tree we need to traverse from the root in post order fashion and print each node value. 
(left, right, print)
```

```
Language used: Python 

Problem solving paradigm: Traversal / Iteration
```

```
Data structures chosen and why:
I chose a tree, because it would allow us to do the traversal very easily, either iteratively or recursively.
Using an array or priority queue may have had more of a benefit in actual runtime , but I opted to go with a solution/Data structure,
which had a simpler implementation for the traversal.

With a tree DFS/BFS is like bread and butter and so I thought it would be trivial to write up DFS in Post-order fashion.
```

```
Did speed factor in to previous choices:
Interms of speed, I look at time compleixty

N is the number of nodes.
Interms of building the tree we would take O(N) time to iterate and each insertion would be O(log(N)) time
The traversal would ultimately just be O(n) time where N.

Since the maximum amount of nodes expected is 10,000 and computers are very fast now a days.
I decided to get a solution with a decent time complexity and a simple and readable impelemntation rather
than a solution that is obsure and might have alot of edge cases to deal with.
```

```
Could any speed ups be included but were not:
For my specific solution no.
Thinking of alternative ways to get the answer using diffrent data structures like arrays or priority queues may have
gotten us a fast solution interms of runtime.
```





