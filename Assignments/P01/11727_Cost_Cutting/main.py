import sys

# For getting input
# sys.stdin = open('input1.txt', 'r')
# sys.stdin = open('input2.txt', 'r')
sys.stdin = open('input3.txt', 'r')
#
# Printing the Output
# sys.stdout = open('result1.txt', 'w')
# sys.stdout = open('result2.txt', 'w')
sys.stdout = open('result3.txt', 'w')

number_of_test_cases = number_of_test_cases = int(sys.stdin.readline())
counter = 1

for group in range(number_of_test_cases):

    employee1, employee2, employee3 = map(int, sys.stdin.readline().split())

    current_sum = employee1 + employee2 + employee3

    current_max = max(employee1, employee2, employee3)

    current_min = min(employee1, employee2, employee3)

    chosen_employee = current_sum - current_max - current_min

    sys.stdout.write(f"Case {counter}: {chosen_employee}\n")

    counter += 1
