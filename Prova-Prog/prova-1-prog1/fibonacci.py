n = int(input())
cont = 0
val1, val2 = 0,1

while (cont<=n):
    # print(val1, end = " ")

    # Logica de Fibonacci resumida em uma linha
    val1, val2 = val2, val1 + val2 
    
    cont+=1
print(val1)