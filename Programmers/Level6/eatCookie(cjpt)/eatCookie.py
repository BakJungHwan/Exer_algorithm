def eatCookie(cookies):
    answer = 0
    now = []
    def helper(cookies):
        nonlocal answer        
        for i, e in enumerate(cookies):
            if not bool(now) or now[-1] < e:
                now.append(e)
                helper(cookies[i+1:])
                now.pop()
        answer = max(answer,len(now))
        return
    helper(cookies)
    return answer



# 아래는 테스트로 출력해 보기 위한 코드입니다.
print(eatCookie([1, 4, 2, 6, 3, 4, 1, 5]))