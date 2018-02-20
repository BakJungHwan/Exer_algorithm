months = [31,29,31,30,31,30,31,31,30,31,30,31]
weekdays = ["THU","FRI","SAT","SUN","MON","TUE","WED"]

def getDayName(a,b):
    days = b + sum([months[i] for i in range(a-1)])
    return weekdays[days%7]

#아래 코드는 테스트를 위한 출력 코드입니다.
print(getDayName(5,24))