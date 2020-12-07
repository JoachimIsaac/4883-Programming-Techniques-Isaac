## Parentheses Balance

### Joachim Isaac 

### Description:
You are given a string consisting of parentheses () and []. A string of this type is said to be correct:
(a) if it is the empty string
(b) if A and B are correct, AB is correct,
(c) if A is correct, (A) and [A] is correct.
Write a program that takes a sequence of strings of this type and check their correctness. Your
program can assume that the maximum string length is 128.



Breaking down the problem:
Basically the problem is just asking us to cheack whether the current parenthesis are match.
What is matching or what makes the match? 
Well we need each opening bracket to have a closing bracket in the right postion e.g like this open( "(" )  and close( ")" )
this refers to this input : "()" this is correct.

Here are some things I noticed that helped with addressing the problem
--> We know that an empty string is considered correct, so this edge case can be handled right away.
--> We can see that if something is odd there will be no chance for the input to have a balanced open and closed pairs.
--> The fact that a specific pattern a sequence was needed was apparent because we found out that we need to 
check the first open bracket with the latest closed bracket   e.g  "(())"   this-->(<-- ( ) -->)<-- with that.

programming paradigms that came to mind was, linear scan and using the stack data structure .
The stack data structure follows the LIFO pattern which helps process the brackets in the order we want.



The input was fine, we just have to read  a line which is just one test case.
the test case it self is just a string and we just have to iterate over it.

There were a few testcases that wasn't in the example input set:
([] )
(
(]



The order of the output played no role in the solution.
the output format it self didn't cause any problems.



### Files

|   #   | File                        | Description                                                |
| :---: | --------------------------  | ---------------------------------------------------------- |
|   1   | [main.cpp](./main.py)       | solution file.                                             |
|   2   | [input1](./input1)          | input1                                                     | 
|   3   | [input2](./input2)          | input2                                                     |   





### Instructions

-In the terminal you just have to type in python or python3 and the file name, then press enter


##############################################################################################

### Sources
