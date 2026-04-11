# Problema do Ternario
O problema e direto e consiste na ideia de converter um numero inteiro N qualquer para a base 3 (como se fosse na base 2).

Para resolver este problema, divida o numero por 3, o resto dessa divisão é o bit que queremos salvar, o resultado da divisão é o proximo N que iremos dividir e assim suscetivamenete.

```bash
Exemplo: 
44/3
Resto: 2 N: 14
Resto: 2 N: 4
Resto: 1 N: 1
Resto: 1 N: 0
```

1122 é a nossa representação do numero 44 na base 3 (ternario).

para garantir que na nossa variavel `soma` o resultado sera o conjunto de bits correto, devemos preservar a posição de cada bit encontrado, para isso, devemos ter uma variavel que preserva a quantidade de casas que vamor elevar a potencia de 10 e multiplicar pelo nosso resto, assim:

```cpp
int soma = (n%3) * pow(10,c);
```

onde `c` e a qual numero queremos elevar o 10, para cada pontencia de 10 é considerado uma casa decimal a esquerda.

