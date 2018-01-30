# _*_ coding: Latin-1 _*_

def sum_digit(number):
    return sum([int(i) for i in str(number)])

print("°á°ú : {}".format(sum_digit(123)));