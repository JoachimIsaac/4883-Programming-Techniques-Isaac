
import sys


class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


# Create a binary search tree with our input
def insert(node, val):
    if node == None:
        return Node(val)
    if val < node.val:
        node.left = insert(node.left, val)
    elif val > node.val:
        node.right = insert(node.right, val)
    return node


# Print in postorder
def postorder(root):
    if not root:
        return

    postorder(root.left)
    postorder(root.right)
    print(root.val)


# Take in root value
root_val = int(input())

# create root node
root = Node(root_val)

# Read in the rest of the vlaues
for value in sys.stdin:
    # insert each vlaue into the tree
    insert(root, int(value))


# Do the post order traversal on the tree
postorder(root)
