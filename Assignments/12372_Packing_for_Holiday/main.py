
import sys

# For getting input
# sys.stdin = open('input1.txt', 'r')
# sys.stdin = open('input2.txt', 'r')
sys.stdin = open('input3.txt', 'r')

# Printing the Output
# sys.stdout = open('result1.txt', 'w')
# sys.stdout = open('result2.txt', 'w')
sys.stdout = open('result3.txt', 'w')

number_of_test_cases = number_of_test_cases = int(sys.stdin.readline())

case = 1

for box in range(number_of_test_cases):
    length, width, height = map(int, sys.stdin.readline().split())

    if length > 20:
        sys.stdout.write(f"Case {case}: bad" + "\n")
    elif width > 20:
        sys.stdout.write(f"Case {case}: bad" + "\n")
    elif height > 20:
        sys.stdout.write(f"Case {case}: bad" + "\n")
    else:
        sys.stdout.write(f"Case {case}: good" + "\n")

    case += 1
