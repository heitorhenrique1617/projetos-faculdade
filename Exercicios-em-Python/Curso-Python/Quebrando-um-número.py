# Crie um programa que leia um número Real qualquer pelo teclado e mostre na tela a sua porção Inteira.
# 016
from math import trunc

numero = float(input('Digite um número: '))

print(f'O número {numero} tem a parte inteira {trunc(numero)}')