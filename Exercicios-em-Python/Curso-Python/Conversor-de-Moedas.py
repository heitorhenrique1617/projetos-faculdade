# Crie um programa que leia quanto dinheiro uma pessoa tem na carteira e mostre quantos dólares ela pode comprar.
# 010
CarteiraBRL = float(input("Digite Quantos reais você possui: "))
PrecoDolar = 5.00

convertido = CarteiraBRL / PrecoDolar
print(f"Convertendo em dolar você possui: {convertido:.2f} $")
