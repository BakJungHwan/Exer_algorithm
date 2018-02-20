def change124(n):
    def digit3(n):
        d3_arr = []
        while n>0:
            d3_arr.append(n%3)
            n//=3
        return d3_arr
    d3_arr = digit3(n)
    def exeChange(d3_arr):
        for i,v in enumerate(d3_arr):
            if i==len(d3_arr)-1:
                return d3_arr
            if v==0:
                d3_arr[i]=4
                d3_arr[i+1]-=1
            if v==-1:
                d3_arr[i]=2
                d3_arr[i+1]-=1
    if all(d3_arr):
    	d3_arr.reverse()
    	return "".join(map(str,d3_arr))
    exeChange(d3_arr)
    if d3_arr[-1] == 0:
        d3_arr.pop()
    d3_arr.reverse()
    return "".join(map(str,d3_arr))
print(change124())