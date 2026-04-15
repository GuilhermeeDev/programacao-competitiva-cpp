n = int(input())
cont,i = 1,n

while (cont <= n):
    while (i>=cont):
        print(i, end = " ")
        i-=1
    print(" ")
    i = n
    cont+=1
