# Global
precedence = [0 for _ in range(1000)]


def infix_to_prefix(expression):

    stack = []
    result = ""

    for index in range(len(expression)):

        if expression[index] == "(":
            stack.append(expression[index])

        if expression[index] == ")":

            while stack[-1] != "(":
                current_character = stack.pop()
                result += current_character

            stack.pop()

        if expression[index] == '/' or expression[index] == '*' or expression[index] == '+' or expression[index] == '-':

            if not stack or stack[-1] == '(':
                stack.append(expression[index])

            else:

                while stack and precedence[ord(expression[index])] <= precedence[ord(stack[-1])]:
                    current_character = stack.pop()
                    result += current_character

                stack.append(expression[index])

        if expression[index].isnumeric():
            result += expression[index]

    while stack:
        if stack[-1] != "(":
            result += stack[-1]

        stack.pop()

    return result


cases = int(input())


precedence[ord("/")] = 3
precedence[ord("*")] = 3
precedence[ord("-")] = 1
precedence[ord("+")] = 1


values = sys.stdin.read().split("\n")


start = 0


for index in range(cases):

    end = start + 1

    # Helps iterate through input.
    while values[end] != "":
        end += 1

    # This holds a test case
    test_case_values = values[start+1:end]

    start = end

    if index < cases - 1:
        print(infix_to_prefix(test_case_values)+"\n")
    else:
        print(infix_to_prefix(test_case_values))
