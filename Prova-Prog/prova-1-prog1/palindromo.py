n = int(input())

if (n<0): print("Nao")
else:
    invertido = 0
    original = n
    while n > 0:
        dig = n%10
        print(dig)
        invertido = invertido * 10 + dig
        print(invertido)
        n //= 10
        print(n)
    
    if (original == invertido): print("Sim")
    else: print("Nao")