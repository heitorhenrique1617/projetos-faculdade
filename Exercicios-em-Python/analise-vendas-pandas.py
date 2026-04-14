import pandas as pd
import sqlite3
import seaborn as sns
import matplotlib.pyplot as plt

# Conexão com Banco de Dados
conn = sqlite3.connect('vendas.db')

# Exemplo de carregamento e análise
# df = pd.read_sql_query("SELECT * FROM vendas", conn)

# Simulação de DataFrame para o exemplo
dados = {
    'Produto': ['Eletrônicos', 'Roupas', 'Alimentos', 'Eletrônicos'],
    'Valor': [1200.50, 450.00, 150.00, 800.00],
    'Data': ['2024-01-01', '2024-01-02', '2024-01-03', '2024-01-04']
}
df = pd.DataFrame(dados)

# Agregação
vendas_por_categoria = df.groupby('Produto')['Valor'].sum()
print("Vendas totais por categoria:\n", vendas_por_categoria)

# Visualização com Seaborn
sns.barplot(x=vendas_por_categoria.index, y=vendas_por_categoria.values)
plt.title('Total de Vendas por Categoria')
plt.show()