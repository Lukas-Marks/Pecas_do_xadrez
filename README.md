# ♟️ Desafio de Xadrez – MateCheck

Este projeto foi desenvolvido como parte do **Desafio de Xadrez da MateCheck**, com o objetivo de aplicar estruturas de repetição, funções recursivas e lógica condicional em linguagem C. O desafio é dividido em três níveis de complexidade — **Novato**, **Aventureiro** e **Mestre** — e todos foram concluídos com sucesso neste repositório.

---

## 🏅 Nível Novato – Estruturas de Repetição

Neste nível, foram implementadas movimentações básicas das peças:

- **Bispo**: 5 casas na diagonal superior direita
- **Torre**: 5 casas para a direita
- **Rainha**: 8 casas para a esquerda

Cada movimento foi representado com `printf()` exibindo a direção correspondente, utilizando **loops simples** (`for`, `while`) para repetir os comandos conforme o número de casas.

---

## 🏅 Nível Aventureiro – Loops Aninhados

Neste estágio, a movimentação do **Cavalo** foi implementada com **loops aninhados**, simulando seu deslocamento em "L":

- O cavalo realiza dois movimentos verticais seguidos de um horizontal.
- Foram utilizadas estruturas `for` e `while` para garantir a lógica de repetição exigida.
- O usuário pode escolher entre dois tipos de movimento: para a direita ou para a esquerda.

---

## 🥇 Nível Mestre – Funções Recursivas e Controle Avançado

No nível final, o projeto foi aprimorado com o uso de **funções recursivas** para as peças que antes usavam loops simples:

- **Bispo**, **Torre** e **Rainha** agora utilizam recursão para realizar seus movimentos.
- A movimentação do **Cavalo** foi refinada com **condições múltiplas**, uso de `continue` e `break`, e controle de fluxo mais elaborado.
- O código foi modularizado, com funções separadas para cada peça e lógica clara para entrada e saída de dados.

---

## ✅ Requisitos Atendidos

- Entrada de dados via `scanf` e variáveis constantes
- Saída clara e organizada com direções (`Cima`, `Direita`, `Esquerda`)
- Uso de diferentes estruturas de repetição e recursão
- Código documentado e de fácil manutenção
- Execução rápida e sem atrasos perceptíveis

---

## 📁 Tecnologias Utilizadas

- Linguagem C
- Terminal para entrada e saída
- Visual Studio Code (VS Code)

---

## 🚀 Aprendizados

Este projeto proporcionou uma imersão prática em estruturas de controle, recursividade e lógica de programação aplicada a jogos. Além de consolidar conceitos fundamentais, também simulou situações reais de desenvolvimento e testes de desempenho.

---

Sinta-se à vontade para clonar, estudar ou adaptar este projeto. Feedbacks e sugestões são sempre bem-vindos!
