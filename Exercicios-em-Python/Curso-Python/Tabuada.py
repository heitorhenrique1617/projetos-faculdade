# Faça um programa que leia um número Inteiro qualquer e mostre na tela a sua tabuada.
# 009
numero = int(input("Digite um número para ver sua tabuada: "))

for i in range(1,11):
    print(f"{numero} x {i} = {numero*i}")