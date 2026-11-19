# Missão Orbital

## Sobre o projeto

Projeto acadêmico desenvolvido em linguagem C para simular um sistema de avaliação de cadetes em uma missão orbital.

O programa solicita o código de identificação do cadete e recebe suas pontuações em três etapas. Após validar os valores informados, calcula a pontuação total e a média, atribuindo uma classificação de acordo com o desempenho.

O sistema também permite realizar a avaliação de vários cadetes em sequência.

## Funcionalidades

- Identificação do cadete por código.
- Registro de pontuações em três etapas.
- Validação das pontuações, permitindo somente valores entre 0 e 100.
- Cálculo da pontuação total e da média.
- Classificação do cadete conforme o desempenho.
- Repetição do processo para avaliar outros cadetes.

## Critérios de classificação

| Média | Classificação |
|---|---|
| 85 ou mais | Comandante da missão |
| 70 a 84,99 | Piloto aprovado |
| 50 a 69,99 | Cadete em recuperação |
| Abaixo de 50 | Treinamento reiniciado |

## Conceitos utilizados

- Variáveis e tipos de dados.
- Entrada e saída de dados com `scanf` e `printf`.
- Estruturas condicionais (`if`, `else if` e `else`).
- Estrutura de repetição `for`.
- Estruturas de repetição `while` e `do-while`.
- Validação de dados.
- Vetores de caracteres e manipulação de strings com `strcpy()`.
- Operações matemáticas e conversão de tipos.

## Tecnologias

- Linguagem C
- Biblioteca padrão `stdio.h`
- Biblioteca `string.h`

## Execução

O código pode ser compilado utilizando GCC:

```bash
gcc missaoOrbital.c -o missao_orbital
```

Para executar:

```bash
./missao_orbital
```

No Windows, utilizando o terminal:

```powershell
.\missao_orbital.exe
```

## Finalidade acadêmica

Projeto desenvolvido como atividade de estudo e avaliação da disciplina de Algoritmos e Pensamento Computacional, com foco na aplicação de estruturas condicionais, estruturas de repetição, validação de dados e manipulação de strings.