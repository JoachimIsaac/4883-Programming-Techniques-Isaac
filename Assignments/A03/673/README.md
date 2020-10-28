Approach:
In this question we need to fid out if the string per test case consisting of "(" ,")" or "[" , "]" 
are correct.

What does it mean exactly to be correct in this context? This question is very important.

--> It is said that a testcase is correct if the string within that test case is empty.
--> If each open bracket is closed by the correct postion closed bracket with in the string.

I.E 

([]) is correct 

([()[]()])() is correct 

([]) is not correct 

We also can assume that the maximum length of a string is 128 characters.

Input is the number of testcases and the string per testcase.

Output is "Yes" when a string is correct and "No" when a string is not correct.


Key things to notice:
-> If a string is empty we know it is True, We can print Yes right away 

-> If a string is odd in length we know that it will be missing either a closing bracket 
or an opening bracket. This means it has no chance of being correct. So we can print 
no right away.

-> If we iterate through the string we need to check whether the closing braces are in a
specific order. That signal either the use of a stack or a queue because of their properties.
Let's use a stack.

-> I prefer readability in my solutions mainly because of having to pratice for interviews.
Where during interviews readability is important, it is a big contrast to Competitive programming.
I opted to use a hash table to represent our corresponding closing braces.


```
#Steps: 

1. We need to check if we have an empty string, if we do we print Yes
and move on to the next testcase, if not we keep going.

2. If it wasn't an empty string, we now check if the string's length is odd. If it is odd
we print No right away and , move on to the next testcase. Otherwise we move and start to 
process it.

3. Processing goes like this: 

Iterate through each testcase:    

    Iterate through each bracket:

        if bracket is an opening bracket:
            load bracket to stack

        else if the stack has values:

            if current_bracket is a closing bracket and the top of the stack is an opening bracket:
                pop of the top of the stack 

        else:# if none of the other cases hold:

            set our flag to 1


    #After processing:
    If our flag has been change to 1 or the stack is still full:
        Print(No)
    else:
        Print(Yes) 


```

```
#Language used: Python 

Problem solving paradigm: Traversal / Iteration

```

```
#Data structures chosen and why:

I chose the hash table/dictionary for readability , looks cleaner to me than just using hard coded strings
of the brackets . It also doesn't affect space or time complexity in any real way.

Time will still be O(T * N) where T is the number of testcases and N is the length of each 
case. The access to the dictionary is O(1) time so doesn't add on anything to our time.

Space is still O(1) time since the values in the dictionary never change.

We use a stack for it's LIFO property, based of tracing through it this is the way the
pattern works. The last bracket is the most relevant because the last bracket's closing 
bracket will be closer than the first. 

s   t z   e
|   | |   |
( ( ( ) ) )
The first opening bracket's closing bracket is at the end  "s" and "e".

Where as with the last opening bracket's ("t") closing bracket comes long before
"e". "z" comes before "e". 
```

```
#Did speed factor in to previous choices:
```
I went mainly for readability but speed was not given up, atleast interms of time complexity.
In terms of actual runtime some speed may have been given ip but it is negligible.


```
#Could any speed ups be included but were not:
Not that I know of.
Interms of the nature of the question
we would have to iterate thorugh each character other wise there is no real way of telling 
if the string has already been validated for whether it was empty or if it was odd.

We know that the nature of the problem, atleast the processing part is O(n) linear time.
The only thing better that could be done is log(n) but we would be missing information
if we cut our search by half.

Since we accounted for the empty string and odd length input I thing the solution is optimized 
as much as it can be.

```





