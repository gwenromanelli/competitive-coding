# Enter your code here. Read input from STDIN. Print output to STDOUT
#https://www.hackerrank.com/challenges/one-week-preparation-kit-queue-using-two-stacks/problem

n = int(input())
top = []
bottom = []
while (n):
    n -= 1
    # print("Top: ",top)
    # print("Bottom: ",bottom)
    string = input()
    if " " in string:
        q, x = map(int, string.split())
    else:
        q = int(string)
    if (q == 1):
        # enqueue input x
        top.append(x)
    elif (q == 2):
        # dequeue front element
        if (len(bottom) == 0):
            while (len(top)):
                bottom.append(top.pop())
        bottom.pop()
    else:
        # print front element:
        if (len(bottom) == 0):
            while (len(top)):
                bottom.append(top.pop())
        temp = bottom.pop()
        print(temp)
        bottom.append(temp)