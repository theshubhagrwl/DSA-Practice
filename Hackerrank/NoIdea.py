# Enter your code here. Read input from STDIN. Print output to STDOUT
nandm = [int(x) for x in input().split()]
n = nandm[0]
m = nandm[1]

nums = [int(x) for x in input().split()]

a = {int(x) for x in input().split()}
b = {int(x) for x in input().split()}

ans = 0
for i in nums:
    if i in a:
        ans += 1
    elif i in b:
        ans -= 1

print(ans)
