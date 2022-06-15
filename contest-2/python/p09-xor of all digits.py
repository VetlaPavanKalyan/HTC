# Given a string having 0's and 1's only. And it is also a palindrome too. Find the xor of all digits.

s=input()
l=len(s)
i=0;
for j in range(l):
    if(s[j]=='1'):
        i+=1

print(i%2)
