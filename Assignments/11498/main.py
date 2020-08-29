
import sys

# For getting input
sys.stdin = open('input12.txt', 'r')
# sys.stdin = open('input5.txt', 'r')
# sys.stdin = open('input6.txt', 'r')
#
# Printing the Output
sys.stdout = open('result.txt', 'w')





while True:
  number_of_test_cases = int(sys.stdin.readline())

  if number_of_test_cases == 0:
    break

  dX , dY  = map(int, sys.stdin.readline().split())
  # print(str(dX) +" "+ str(dY))
  for case in range(number_of_test_cases):

    current_cordinates = map(int, sys.stdin.readline().split())
    

    currX,currY = current_cordinates 

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