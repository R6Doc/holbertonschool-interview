#!/usr/bin/python3


""" Calculate fewest number of Operations"""


def minOperations(n):
    """ calculates number of operations needed for n H character """
    if n <= 1:
        return 0
    count = 2
    char_number = 2
    copy = 1

    while char_number < n:
        if n % char_number == 0:
            copy = char_number
            count += 1
        char_number += copy
        count += 1
    return count
    