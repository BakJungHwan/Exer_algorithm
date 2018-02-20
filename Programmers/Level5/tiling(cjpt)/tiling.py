def tiling(n):
    tiletemp = [0,1,2]
    for i in range(3,n+1):
        tiletemp.append(tiletemp[i-1]+tiletemp[i-2])
    return tiletemp[-1]
print(tiling(2))