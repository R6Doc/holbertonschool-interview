#!/usr/bin/python3
""" Validate utf-8"""


def validUTF8(data):
    """checks if data given is utf8 valid"""
    bytes = 0
    for base10 in data:
        binary = format(base10, '#010b')[-8:]
        if bytes == 0:
            for bit in binary:
                if bit == '0':
                    break
                bytes += 1
            if bytes == 0:
                continue
            if bytes == 1 or bytes > 4:
                return False
        else:
            if not (binary[0] == '1' and binary[1] == '0'):
                return False
        bytes -= 1
    return bytes == 0
