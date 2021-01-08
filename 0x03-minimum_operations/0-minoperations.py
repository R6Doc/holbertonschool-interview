#!/usr/bin/python3


""" Calculate fewest number of Operations """


def minOperations(n):
    """ calculates number of operations needed for n H character """
    if n <= 1:
        return 0
    count = 2
    chars = 2
    temp = 1

    while chars < n:
        if n % chars == 0:
            temp = chars
            count += 1
        chars += temp
        count += 1
    return count
