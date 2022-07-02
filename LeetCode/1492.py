class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        l1= []
        for  i in range(1,n//2+1):
            if n%i==0:
               l1.append(i)
        l1.append(n)
        # print(l1,l2)
        if(k <= len(l1)):
            return l1[k-1]
        else:
            return -1

