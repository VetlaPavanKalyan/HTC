# Print palindromes between the range.

l=[]
l=list(input().split())
a=int(l[0])
b=int(l[1])
x=0
for i in range(a+1,b):
    s=str(i)
    s1=""
    l=len(s)
    for j in range(1,l+1):
        s1=s1+s[l-j]
    if(s==s1):
        x+=1
        print(i,end=" ")
if(x==0):
    print("No Palindrome Numbers")
