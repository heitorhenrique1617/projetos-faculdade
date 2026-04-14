import tensorflow as tf
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler

# Carregar dados
iris = load_iris()
X, y = iris.data, iris.target

# Pré-processamento
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)
X_train, X_test, y_train, y_test = train_test_split(X_scaled, y, test_size=0.2, random_state=42)

# Construção do Modelo (Rede Neural)
model = tf.keras.Sequential([
    tf.keras.layers.Dense(10, activation='relu', input_shape=(4,)),
    tf.keras.layers.Dense(3, activation='softmax') # 3 classes de flores
])

model.compile(optimizer='adam', loss='sparse_categorical_crossentropy', metrics=['accuracy'])

# Treinamento
model.fit(X_train, y_train, epochs=50, verbose=0)

# Avaliação
loss, accuracy = model.evaluate(X_test, y_test)
print(f"Acurácia do Modelo: {accuracy * 100:.2f}%")