#!/bin/python3
#https://www.hackerrank.com/challenges/dijkstrashortreach/problem

import math
import os
import random
import re
import sys

#
# Complete the 'shortestReach' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER n
#  2. 2D_INTEGER_ARRAY edges
#  3. INTEGER s
#

def shortestReach(n, edges, s):
    from queue import PriorityQueue
    from math import inf
    
    # graph construction   
    graph = {}
    for i in range(n+1):
        graph [i] = set()
    for u,v,d in edges:
        graph[u].add((v,d))
        graph[v].add((u,d))
        
    # initializing
    distances = [inf]*n
    que = PriorityQueue()
    
    #starting vertex
    distances[s-1] = 0
    for node in graph:
        que.put((node,distances[node-1]))
    
    #Algorithm
    while que.qsize():
        node, dist = que.get()
        for neighbor, weight in graph[node]:
            if distances[neighbor-1] > dist + weight:
                distances[neighbor-1] = dist + weight
                que.put((neighbor, distances[neighbor-1]))
    for i,_ in enumerate(distances):
        if distances[i] == inf:
            distances[i] = -1
        
    del distances[s-1]
    return distances

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    t = int(input())
    for t_itr in range(t):
        nm = input().split()
        n = int(nm[0])
        m = int(nm[1])
        edges = set()
        for _ in range(m):
            edges.add(tuple(map(int, sys.stdin.readline().rstrip().split())))
        s = int(input())
        result = shortestReach(n, edges, s)
        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')
    fptr.close()