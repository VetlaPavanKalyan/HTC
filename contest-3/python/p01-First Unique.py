# Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

s=input()
y=0
for c in s:
    x=s.count(c)
    if(x==1):
        print(y)
        break
    y+=1
if(y==len(s)):
    print("-1")
