def noOvertime(n, works):
    for i in range(n):
    	if len(works) == 0:
    		break;
    	works.sort(reverse=True)
    	works[0]-=1
    	while works.count(0)!=0:
	    	works.remove(0)
    return sum([num**2 for num in works])

n = 10
works = [2, 0, 3, 9,7,7,2,5]
print(noOvertime(n,works))