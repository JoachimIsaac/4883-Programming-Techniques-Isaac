"""

plan:
1. We need to first grab the number of test cases we need to loop through.
2. Then we need to check each pair of numbers and run them based on our conditions
3. if a < b we print("<"), if a > b we print(">") and if they are equal we print("=")


"""


"""
We need these files to read from the input and to generate the result.txt files.
UVA online only accepts the output for python when you print it to the screen and not a file .


To get it accepted on UVA you need to comment these out:

--> sys.stdin = open('input1.txt', 'r')


--> sys.stdout = open('result1.txt', 'w')

"""


# For getting input
import sys
sys.stdin = open('input1.txt', 'r')
# sys.stdin = open('input2.txt', 'r')
# sys.stdin = open('input3.txt', 'r')


# Printing the Output to text file
sys.stdout = open('result1.txt', 'w')
# sys.stdout = open('result2.txt', 'w')
# sys.stdout = open('result3.txt', 'w')


number_of_test_cases = int(sys.stdin.readline())

for test_case in range(number_of_test_cases):

    number1, number2 = map(int, sys.stdin.readline().split())

    if number1 < number2:
        sys.stdout.write("<\n")

    elif number1 > number2:
        sys.stdout.write(">\n")

    else:
        sys.stdout.write("=\n")
