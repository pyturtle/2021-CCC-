
from operator import mod


solve = int(input())
numOfWays = 0
one_to_tweenty = [5,4,8,9,10,13,12,14,16,17,15,19,18]


if solve == 20:
    numOfWays += 2
elif solve > 20 and solve%20 == 0:
    numOfWays = numOfWays + (solve - solve%20)/20 + 1
elif solve%20  not in one_to_tweenty and solve > 20:
    numOfWays = numOfWays + 1 + (solve - solve%20)/20 - 1
elif solve > 20 :
    numOfWays = numOfWays + (solve - solve%20)/20
if solve%20 in one_to_tweenty:
        numOfWays += 1

print (str(int(numOfWays)))