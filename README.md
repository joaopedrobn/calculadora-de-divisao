# ➗ Calculadora de Divisão

Este projeto é um programa em C++ que realiza operações de divisão entre dois números fornecidos pelo usuário. O programa verifica se a divisão é possível e informa o usuário em casos de divisão por zero ou outras situações inválidas.

## 📝 Descrição

O programa solicita ao usuário que insira dois números: o dividendo e o divisor. Em seguida, realiza a divisão e apresenta o resultado. Se a divisão não puder ser realizada (por exemplo, divisão por zero), o programa informa o usuário sobre a impossibilidade da operação.

## 🛠️ Como Compilar e Executar

1. **📥 Clone o repositório:**

   ```bash
   git clone https://github.com/joaopedrobn/calculadora-de-divisao.git
   ```

2. **📂 Navegue até o diretório do projeto:**

   ```bash
   cd calculadora-de-divisao
   ```

3. **⚙️ Compile o código-fonte:**

   Utilize um compilador C++, como o `g++`, para compilar o arquivo `divisao.cpp`:

   ```bash
   g++ divisao.cpp -o calculadora_divisao
   ```

4. **▶️ Execute o programa:**

   ```bash
   ./calculadora_divisao
   ```

## 📋 Exemplo de Uso

Ao executar o programa, você será solicitado a inserir o dividendo e o divisor:

```
Digite o dividendo: 10
Digite o divisor: 2
```

O programa calculará e exibirá o resultado da divisão:

```
O resultado da divisão é: 5
```

Se o usuário tentar dividir por zero:

```
Digite o dividendo: 10
Digite o divisor: 0
```

O programa informará:

```
Erro: divisão por zero não é permitida.
```

## 🖼️ Exemplos

![Exemplo 1](https://github.com/joaopedrobn/calculadora-de-divisao/raw/main/Screenshot_3.png)
*Divisão válida*

![Exemplo 2](https://github.com/joaopedrobn/calculadora-de-divisao/raw/main/Screenshot_4.png)
*Tentativa de divisão por zero*

## 📄 Licença

Este projeto está licenciado sob a Licença MIT. Para mais detalhes, consulte o arquivo [LICENSE](LICENSE).

---
📌 Para mais informações, visite o repositório original: [calculadora-de-divisao](https://github.com/joaopedrobn/calculadora-de-divisao).
