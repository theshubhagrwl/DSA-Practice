a = [9, 5, 1, 4, 4, 23, 432, 4]

for i in range(1, len(a)):
    value = a[i]
    flag = i
    while(flag > 0 and a[flag-1] > value):
        a[flag] = a[flag-1]
        flag -= 1

    a[flag] = value

print(a)
