s = input()
def check(a):
    if (len(a))%2==0:
        half_len = len(a)//2;
        for i in range(half_len):
            if a[i] != a[i+half_len]:
                return False
        return True
    return False
r = len(s)
while (not check(s[0:r])):
    r-=1
    if (r %2==1): r-=1
print(r)
