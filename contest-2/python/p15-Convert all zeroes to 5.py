# You are given an integer N. You need to convert all zeroes of N to 5.

s=input()
for c in s:
    if(c=='0'):
        print('5',end="")
    else:
        print(c,end="")
