## Vetores, Matrizes e Estruturas de Dados

Esta unidade marca a transição para conceitos de gerenciamento de memória e organização de dados estruturados, fundamentais para o desenvolvimento de sistemas mais robustos em C.

### Exercícios Desenvolvidos

#### 1. Padronização de CPF (`padronizacao-cpf-vetores.c`)
* **Descrição**: Um programa que recebe um CPF formatado (com pontos e traços) e utiliza a lógica de vetores para extrair apenas os caracteres numéricos.
* **Conceitos Aplicados**:
    * Manipulação de strings como vetores de `char`.
    * Filtragem de caracteres via tabela ASCII.
    * Gerenciamento do terminador de string `\0`.

#### 2. Processamento de Notas com Matrizes (`processamento-notas-matriz.c`)
* **Descrição**: Sistema que organiza notas de diversos alunos em múltiplas disciplinas usando uma estrutura bidimensional.
* **Conceitos Aplicados**:
    * Matrizes (`float notas[L][C]`).
    * Uso de diretivas `#define` para facilitar a manutenção do código.
    * Laços de repetição aninhados para navegação em tabelas.

#### 3. Manipulação de Memória com Ponteiros (`manipulacao-vetor-ponteiros.c`)
* **Descrição**: Demonstração de como acessar e modificar valores de um vetor diretamente na memória através de ponteiros.
* **Conceitos Aplicados**:
    * Aritmética de ponteiros (`p++` para avançar endereços).
    * Desreferenciação (`*p`) para alteração de valores originais.
    * Entendimento da relação entre arrays e endereços de memória.

#### 4. Gestão de Biblioteca com Structs (`gestao-biblioteca-structs.c`)
* **Descrição**: Um simulador de estoque de livraria que agrupa diferentes tipos de dados em uma única estrutura.
* **Conceitos Aplicados**:
    * Definição e uso de `struct`.
    * Manipulação de strings com a biblioteca `<string.h>` (`strcpy` e `strcmp`).
    * Lógica de busca e atualização de campos específicos dentro de um array de estruturas.
