## 11498 -  Division of Nlogonia

### Joachim Isaac 

### Description:
We get a division point for each test case and then we compare the division point with the other cordinates within each testcase. 
Each testcase has it's own division point and it's own sets of cordinates.
Based on the cordinates and the division point we print:
"divisa"
"NE" 
"NO"
"SO"
"SE" 





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
