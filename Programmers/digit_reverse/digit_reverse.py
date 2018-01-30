# _*_ coding: Latin-1 _*_

def digit_reverse(n):
    return [int(c) for c in str(n)[::-1]]

# ¾Æ·¡´Â Å×½ºÆ®·Î Ãâ·ÂÇØ º¸±â À§ÇÑ ÄÚµåÀÔ´Ï´Ù.
print("°á°ú : {}".format(digit_reverse(12345)));