
import bisect
from _bisect import bisect_left, bisect_right


def GenerateFibNumbers(n):
    a, b = 1, 1
    while b < n:
        yield b
        a, b = b, a + b


FibNumbers = list(GenerateFibNumbers(10 ** 100))


while True:
    start, end = map(int, input().split())

    if start == 0 and end == 0:  # invalid input
        break

    left = bisect_left(FibNumbers, f)  # finds start position
    right = bisect_right(FibNumbers, s)  # finds end position

    # calculate the difference to get the number of values bewtween them
    print(right - left)
