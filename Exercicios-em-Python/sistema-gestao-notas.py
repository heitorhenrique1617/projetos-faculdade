def cadastrar_notas():
    try:
        nota1 = float(input("Digite a 1ª nota: "))
        nota2 = float(input("Digite a 2ª nota: "))
        return nota1, nota2
    except ValueError:
        print("Erro: Insira apenas números.")
        return None

def calcular_media(n1, n2):
    return (n1 + n2) / 2

def verificar_status(media):
    if media >= 7:
        return "Aprovado"
    elif 5 <= media < 7:
        return "Recuperação"
    else:
        return "Reprovado"

# Execução principal
notas = cadastrar_notas()
if notas:
    m = calcular_media(notas[0], notas[1])
    status = verificar_status(m)
    print(f"Média: {m:.2f} - Status: {status}")