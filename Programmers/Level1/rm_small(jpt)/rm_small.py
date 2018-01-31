# _*_ coding: Latin-1 _*_

def rm_small(mylist):
    return [el for el in mylist if el != sorted(mylist)[0]]

# ¾Æ·¡´Â Å×½ºÆ®·Î Ãâ·ÂÇØ º¸±â À§ÇÑ ÄÚµåÀÔ´Ï´Ù.
my_list = [4, 3, 2, 1]
print("°á°ú {} ".format(rm_small(my_list)))