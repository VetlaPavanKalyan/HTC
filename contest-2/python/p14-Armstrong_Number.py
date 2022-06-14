# write a program to check whether the given input is armstrong or not.

# Note : A number is called armstrong number, if the sum of its own digits raised to the power number of digits gives the number itself .

s=input()
l=len(s)
x=0
for c in s:
    i=int(c)
    x+=i**l
y=int(s)
if(x==y):
    print("yes")
else:
    print("no")
