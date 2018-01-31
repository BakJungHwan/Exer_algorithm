def alpha_string46(s):
    return all([len(s)==4 or len(s)==6, s.isnumeric()])

print(alpha_string46("a123"))
print(alpha_string46("1234"))