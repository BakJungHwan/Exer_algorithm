def reverseInt(n):
    list_n = [c for c in str(n)]
    list_n.reverse()
    return "".join(list_n)

print(reverseInt(118372))