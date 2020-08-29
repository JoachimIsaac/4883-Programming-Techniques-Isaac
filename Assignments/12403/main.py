import sys

# # For getting input
sys.stdin = open('input7.txt', 'r')
# # sys.stdin = open('input5.txt', 'r')
# # sys.stdin = open('input6.txt', 'r')
# #
# # Printing the Output
sys.stdout = open('result.txt', 'w')

number_of_test_cases = number_of_test_cases = int(sys.stdin.readline())

donations_total = 0

for group in range(number_of_test_cases):

    decision = sys.stdin.readline().split()

    if decision[0] == "report":
        sys.stdout.write(str(donations_total) + "\n")
    else:
        donations_total += int(decision[1])
