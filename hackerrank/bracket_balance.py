#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'isBalanced' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def isBalanced(s):
    brackets = []
    left_brackets = ['(', '{', '[']
    my_dict = {')':'(', '}':'{', ']':'['}
    for c in s:
        if c in left_brackets:
            brackets.append(c)
        else:
            if len(brackets) == 0:
                return 'NO'
            top = brackets.pop()
            if top != my_dict[c]:
                return 'NO'
    if len(brackets) != 0:
        return 'NO'
    return 'YES'

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        s = input()

        result = isBalanced(s)

        fptr.write(result + '\n')

    fptr.close()
