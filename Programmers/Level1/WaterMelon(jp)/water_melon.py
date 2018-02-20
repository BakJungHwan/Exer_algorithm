def water_melon(n):
    return "수박"*int(n/2) + "수"*(n%2)


# 실행을 위한 테스트코드입니다.
print("n이 3인 경우: " + water_melon(3));
print("n이 4인 경우: " + water_melon(4));