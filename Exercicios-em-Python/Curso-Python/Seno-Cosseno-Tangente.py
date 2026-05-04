# Faça um programa que leia um ângulo qualquer e mostre na tela o valor do seno, cosseno e tangente desse ângulo.
# 018
from math import sin, cos, tan, radians

angulo = float(input('Digite um ângulo:  '))

angulo = radians(angulo)

seno = sin(angulo)
cosseno = cos(angulo)
tangente = tan(angulo)

print(f'seno: {seno:.3f}\n coesseno: {cosseno:.3f}\n tangente: {tangente:.3f}')