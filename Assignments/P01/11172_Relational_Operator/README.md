
## 11172 - Relational Operator

### Joachim Isaac 

### Description:
Given two numerical values your job is just to find out the relationship between them
that is (i) First one is greater than the second (ii) First one is less than the second or (iii) First and second one is equal.

Based on these results we output <, > or =


### Files

|   #   | File                        | Description                                                |
| :---: | --------------------------  | ---------------------------------------------------------- |
|   1   | [main.py](./main.py)        | solution file.                                             |
|   2   | [input1.txt](./input1.txt)  | input1                                                     |
|   3   | [input2.txt](./input2.txt)  | input2                                                     |
|   4   | [input3.txt](./input3.txt)  | input3                                                     |
|   5   | [result1.txt](./result1.txt)| result1                                                    |
|   6   | [result2.txt](./result2.txt)| result2                                                    |
|   7   | [result3.txt](./result3.txt)| result3                                                    |





### Instructions

-In the terminal you just have to type in python or python3 and the file name, then press enter

-If you want it to be print to a specific text file uncomment that specific text file, result1.txt, result2.txt ... etc.

###############################################################################################

We need these files to read from the input and to generate the result.txt files.
UVA online only accepts the output for python when you print it to the screen and not a file .


To get it accepted on UVA you need to comment these out:

--> sys.stdin = open('input1.txt', 'r')


--> sys.stdout = open('result1.txt', 'w')

##############################################################################################

### Sources
input/ouput operations for competitive programming (Geeks for Geeks):
https://www.geeksforgeeks.org/python-input-methods-competitive-programming/
