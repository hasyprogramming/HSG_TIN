def fac(r):
    l = []
    for i in range(1, int((r)**0.5)+1):
        if (r%i==0):
            if (i*i==r):
                l.append(i)
            else:
                l.append(i)
                l.append(r/i)


a, b = [int(x) for x in input().split()]
a *= b
b *= b
factor = fac(b)
sorted(factor, reverse=True)
cnt = 0
ans = []
while (a > 0):
    while(a >= factor[cnt]):
        a-=factor[cnt]
        ans.append(b/factor[cnt])
    cnt+=1
print(len(ans))
s = ""
for i in range(0, len(ans)):
    s += ans[i]
    s += " "
print(s)