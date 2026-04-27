# Escreva um programa que leia um valor em metros e o exiba convertido em centímetros e em milímetros
medida = float(input('Uma distância em metros: '))
centimetro = medida * 100
milimetro = medida * 1000
print(f'A medida de centímetro é de: {centimetro}cm')
print(f'A medida de milímetro é de: {milimetro}mm')