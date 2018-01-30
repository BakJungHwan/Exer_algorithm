def strange_sort(strings, n):
    def helper(str_ele):
        return str_ele[n];
    return sorted(strings,key=helper)

print( strange_sort(["sun", "bed", "car"], 1) )