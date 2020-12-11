#!/usr/bin/python3
"""
  Check if cratess can be opened.
"""


def canUnlockAll(boxes):
    """ Checks if box can be opened """
    unlock = [False] * len(boxes)
    unlock[0] = True
    keys = []

    for key in boxes[0]:
        keys.append(key)

    for key in keys:
        if ((key < len(boxes)) and (unlock[key] is False)):
            unlock[key] = True
            for i in boxes[key]:
                if i not in keys:
                    keys.append(i)

    if False in unlock:
        return False
    else:
        return True
