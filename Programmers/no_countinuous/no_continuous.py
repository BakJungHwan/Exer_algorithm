# _*_ coding: Latin-1 _*_

def no_continuous(s):
    return [c for i,c in enumerate(s) if i==0 or s[i-1]!=s[i]]

# ¾Æ·¡´Â Å×½ºÆ®·Î Ãâ·ÂÇØ º¸±â À§ÇÑ ÄÚµåÀÔ´Ï´Ù.
print( no_continuous( "133303" ))