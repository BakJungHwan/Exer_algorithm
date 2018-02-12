# __*__ coding:Latin-1 __*__

def nextBigNumber(n):
    if n==0:
        return 1;

    bin_n = bin(n)[2:]
    bin_n_r = bin_n[::-1]
    first = 0
    end = len(bin_n_r)
    chk = False
    for i,c in enumerate(bin_n_r):
        if c=="1":
            if chk==False:
                first = i
                chk = True
        if c=="0" and chk:
            end = i
            break;
    ans_bin_r = "1"*(end-first-1) + "0"*(first+1) + "1" + bin_n_r[end+1:]
    print(ans_bin_r[::-1])
    return int(ans_bin_r[::-1],2)

#¾Æ·¡ ÄÚµå´Â Å×½ºÆ®¸¦ À§ÇÑ Ãâ·Â ÄÚµåÀÔ´Ï´Ù.
print(nextBigNumber(777))