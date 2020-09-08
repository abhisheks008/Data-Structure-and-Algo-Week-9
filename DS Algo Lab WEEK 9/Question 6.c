n = int(input())
key = int(input())
arr = []
ar = input()
s=0
arr = ar.split(sep = " ")
for i in range (0,n,1):
    if (int(arr[i])== key):
        print("found")
        break
    else:
        s += 1

if (s>n-1):
    print ("not found")
