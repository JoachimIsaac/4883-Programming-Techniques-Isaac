
import sys

# For getting input
sys.stdin = open('input1.txt', 'r')
# sys.stdin = open('input2.txt', 'r')
# sys.stdin = open('input3.txt', 'r')
#
# Printing the Output
sys.stdout = open('result1.txt', 'w')
# sys.stdout = open('result2.txt', 'w')
# sys.stdout = open('result3.txt', 'w')


while True:
    number_of_test_cases = int(sys.stdin.readline())

    if number_of_test_cases == 0:
        break

    dX, dY = map(int, sys.stdin.readline().split())

    for case in range(number_of_test_cases):

        current_cordinates = map(int, sys.stdin.readline().split())

        currX, currY = current_cordinates

        if dX == currX or dY == currY:
            sys.stdout.write("divisa" + "\n")
        elif dX < currX and dY < currY:
            sys.stdout.write("NE" + "\n")
        elif dX > currX and dY < currY:
            sys.stdout.write("NO" + "\n")
        elif dX > currX and dY > currY:
            sys.stdout.write("SO" + "\n")
        elif dX < currX and dY > currY:
            sys.stdout.write("SE" + "\n")
