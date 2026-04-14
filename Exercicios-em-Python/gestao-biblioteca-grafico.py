import matplotlib.pyplot as plt

class Livro:
    def __init__(self, titulo, genero):
        self.titulo = titulo
        self.genero = genero

# Simulação de dados
biblioteca = [
    Livro("Dom Casmurro", "Romance"),
    Livro("O Hobbit", "Fantasia"),
    Livro("Sherlock Holmes", "Suspense"),
    Livro("Drácula", "Terror"),
    Livro("Harry Potter", "Fantasia")
]

# Contagem de gêneros
contagem = {}
for livro in biblioteca:
    contagem[livro.genero] = contagem.get(livro.genero, 0) + 1

# Geração do Gráfico
plt.bar(contagem.keys(), contagem.values(), color='skyblue')
plt.title('Distribuição de Livros por Gênero')
plt.xlabel('Gênero')
plt.ylabel('Quantidade')
plt.show()