## 04. Funções e Passagem de Parâmetros
Nesta unidade, o foco foi a **modularização** do código, aprendendo a dividir problemas complexos em funções menores, reutilizáveis e organizadas.

### Exercícios Desenvolvidos

#### Seleção de Guindastes (Logística)
* **Arquivo:** `calculo-logistica-guindastes-funcoes.c`
* **Conceitos:** Funções com retorno (`float` e `int`) e passagem de parâmetros por valor.
* **Descrição:** O programa calcula o volume e o peso de uma carga e, através de uma função de decisão, recomenda o guindaste ideal (G1, G2 ou G3) usando uma estrutura `switch`.

#### Massa de Compostos Químicos
* **Arquivo:** `calculo-massa-compostos-funcao.c`
* **Conceitos:** Reutilização de código e múltiplos parâmetros.
* **Descrição:** Demonstra como uma única função matemática pode ser chamada várias vezes com argumentos diferentes (valores fixos e entradas do usuário), eliminando a repetição de fórmulas no código principal.

#### Cálculo de Preço (Passagem por Referência)
* **Arquivo:** `calculo-preco-passagem-referencia.c`
* **Conceitos:** Passagem por referência, ponteiros e funções `void`.
* **Descrição:** Este é um exemplo avançado onde a função não retorna um valor explicitamente, mas altera diretamente uma variável da `main` através de seu endereço de memória (ponteiro).
