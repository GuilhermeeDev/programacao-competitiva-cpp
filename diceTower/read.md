## 1. DiceTower 1266 B.
O problema diceTower consiste na ideia de responder se é possivel ou não é possivel se obter o numero recebido, um inteiro n qualquer, representado pela soma de todas as faces visiveis de dados, sendo possivel utilizar n dados, dado que n é um numero inteiro.

Para essa resolução deve se notar que:
- 1. Dado que independente do numero q estiver com a face para cima, a soma de suas laterais sera igual a 14.
exemplo: 
```
Se a face do topo for 6, obviamente a de baixo se 1, e se somarmos as faces laterais restantes: 2 + 3 + 4 + 5 = 14, e essa regra vale para toda face de um dado de 6 lados.
```
- 2. Com base em '1.' oq influencia a soma para um resultado é o numero que esta com a face para cima (ou para baixo).
- 3. Dado que podemos usar N dados para alcançar o resultado da soma, e que devemos retornar apenas se é possivel ou não é possivel

```
#include <iostream>
using namespace std;

int main(){
    // é possivel diminuir a quantidade de expressoes a calcular tentando reduzir o numero de entrada para N%14 (N resto da divisão por 14).
    int N, resto;
    N = 38;
    // é possivel saber a quantidade minima de dados com N//14;
    resto = N % 14;
    cout << resto << endl;

    // Verifica se o resto é menor que 6 (numero de face que simplesmente se poe para cima e ta tudo resolvido)
    if (resto <= 6){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
``
