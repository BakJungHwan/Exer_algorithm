def eatCookie(cookies):
    dp = [1 for i in range(len(cookies))]
    for i in range(1,len(cookies)):
    	for j in range(0,i):
    		if cookies[i] > cookies[j]:
    			if dp[i] < dp[j] + 1 :
    				dp[i] = dp[j] + 1
    return max(dp)



# 아래는 테스트로 출력해 보기 위한 코드입니다.
print(eatCookie([946, 485, 430, 347, 735, 332, 720, 908, 901, 886, 640, 441, 664, 963, 963, 792, 325, 552, 497, 287, 182, 791, 108, 118, 2, 561, 913, 793, 239, 97, 877, 891, 531, 874, 424, 616, 103, 538, 721, 473, 276, 345, 153, 737, 736, 961, 92, 321, 122, 656]))