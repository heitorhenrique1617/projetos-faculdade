# Escreva um programa que converta uma temperatura digitando em graus Celsius e converta para graus Fahrenheit.
# 014

C = float(input('Digite a temperatura em C: '))

F = ((9/5 * C) + 32)

print(f'{C:.1f}C equivale a {F:.1f}F')