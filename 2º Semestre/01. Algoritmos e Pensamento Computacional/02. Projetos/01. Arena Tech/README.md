# Arena Tech — Planejador de Maratona Gamer

## Sobre o projeto

Projeto acadêmico desenvolvido em linguagem C para simular o planejamento financeiro de uma maratona gamer.

O programa recebe informações sobre participantes, equipes, computadores, consumo de energia e custos do evento. Com esses dados, realiza cálculos e apresenta um relatório com estimativas financeiras.

## Funcionalidades

- Cálculo da quantidade de times necessários com base no número de participantes.
- Estimativa do consumo de energia dos computadores em kWh.
- Cálculo do custo de energia elétrica.
- Cálculo dos custos com alimentação.
- Soma dos custos totais do evento.
- Cálculo do custo médio por participante.

## Conceitos utilizados

- Variáveis e tipos de dados.
- Entrada e saída de dados com `scanf` e `printf`.
- Operações matemáticas.
- Conversão de tipos.
- Utilização da biblioteca `math.h` e da função `ceil()`.
- Organização de cálculos e apresentação de resultados.

## Tecnologias

- Linguagem C
- Biblioteca padrão `stdio.h`
- Biblioteca `math.h`

## Execução

O código pode ser compilado utilizando GCC:

```bash
gcc projeto1_arena_tech.c -o arena_tech -lm
```

Para executar:

```bash
./arena_tech
```

No Windows, utilizando o terminal:

```powershell
.\arena_tech.exe
```

## Finalidade acadêmica

Projeto desenvolvido como atividade de estudo e avaliação da disciplina de Algoritmos e Pensamento Computacional, com foco na aplicação de lógica de programação, operações matemáticas e manipulação de dados de entrada e saída.