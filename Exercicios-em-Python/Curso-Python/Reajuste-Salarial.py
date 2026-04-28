# Faça um algoritmo que leia o salário de um funcionário e mostre seu novo salário, com 15% de aumento.
# 013

salario = float(input('Qual o salário do funcionário em R$'))

aumento = (salario * (15/100))
salarioReajustado = salario + aumento

print(f'O reajuste do salário do funcionário foi de R${aumento:.2f}, sendo assim o novo salário é de R${salarioReajustado:.2f}')