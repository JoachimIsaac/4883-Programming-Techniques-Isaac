##  A04 Folder

| # | Folder Link                               | Assignment Description |
|:-:|-------------------------------------------| ---------------------- |
| 1 |[122](./122)                              |[Trees_on_the_level](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=58)|
| 2 |[12347](./12347)                           |[Binary_Search_Tree](https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3769)|


```Python



class newNode:  
  
    # Constructor to create a new node  
    def __init__(self, data):  
        self.data = data  
        self.left = None
        self.right = None
  
  
  
# Function to check the given  
# key exist or not  
    def iterativeSearch(root, key): 
      
      # Traverse untill root reaches  
      # to dead end  
      while root != None: 

          # pass right subtree as new tree  
          if key > root.data:  
              root = root.right 

          # pass left subtree as new tree 
          elif key < root.data: 
              root = root.left  
          else: 
              return True # if the key is found return 1  
      return False
  
  
  
# A utility function to insert a  
# new Node with given key in BST  
    def insert(Node, data): 
      
      # If the tree is empty, return  
      # a new Node  
      if Node == None: 
          return newNode(data)  

      # Otherwise, recur down the tree  
      if data < Node.data:  
          Node.left = insert(Node.left, data)  
      elif data > Node.data:  
          Node.right = insert(Node.right, data) 

      # return the (unchanged) Node pointer  
      return Node 





```
