# n,k = int(input())
# k = int(input())

a = [int(x) for x in input().split(' ')]
n, k = a
# print("n is ",n)
# print("k is ",k)
na = []
arr = []
arr = [int(x) for x in input().split(' ')]
# print(arr)
for i in range(0,len(arr)-k+1):
    na = arr[i:i+k]
    print(max(na), end =" ")
    