# Faça um programa que leia a largura e a altura de uma parede em metros, calcule a sua área e a quantidade de tinta necessária para pintá-la, sabendo que cada litro de tinta pinta uma área de 2 metros quadrados.
# 011

altura = float(input('Digite a altura em metros: '))
largura = float(input('Digite a largura em metros: '))

litrodetinta = 2
area = largura * altura

ldtn = area / litrodetinta

print(f'A área da parede é {area:.2f} m².')
print(f'Você precisa de {ldtn:.1f} Litros de tinta')

