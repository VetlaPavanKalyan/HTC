
import math
n=int(input())
while(n):
    n-=1
    s=input()
    s=s[1:]
    l=len(s)
    c=0
    for i in range(l):
        x=ord(s[i])
        if(x<=90):
            y=90-x
            y=65+y
            z=y+32
            z=abs(z-x)
            a=int(math.pow(z,l-i))
            c+=a
        else:
            y=122-x
            y=97+y
            z=y-32
            z=abs(z-x)
            a=int(math.pow(z,l-i))
            c+=a
        c%=62
    
    if(c<=25):
        c+=65
    elif(c<=51):
        c+=97-26
    else:
        c-=52
        c+=48
    print(chr(c),end="")
    
    
