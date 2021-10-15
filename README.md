# pushswap
Algoritmo de ordenação entre duas pilhas, usando comando Push e Swap

# Objetivo
Trabalhar com o conceito de pilha e algoritmos de ordenação.
Desenvolver um programa chamado pushswap em C, que recebe uma lista de inteiros positivo e negativo não ordenados, alocar em uma pilha (a), e depois ordenar a lista, com a menor sequencia de interação, usando os seguintes comando de movimentação: 

sa: swap a - trocar a ordem dos dois primeiros elementos da pilha a
sb: swap b - trocar a ordem dos dois primeiros elementos da pilha b
ss: sa e sb ao mesmo tempo

pa: push a - pega o primeiro elemento no top da pulha b e move para a pilha a
pb: push b - pega o primeiro elemento no top da pulha a e move para a pilha b

ra: rotate a - deslocar todos os elementos para cima da pilha a um por um, o primeiro elemento se torna o ultimo
rb: rotate b - deslocar todos os elementos para cima da pilha b um por um, o primeiro elemento se torna o ultimo
rr: ra e rb ao mesmo tempo

rra: reverse rotate a - deslocar todos os elementos para baixo da pilha a um por um, o ultimo elemento se torna o primeiro
rrb: reverse rotate b - deslocar todos os elementos para baixo da pilha b um por um, o ultimo elemento se torna o primeiro
rrr: rra e rrb ao mesmo tempo

# pilhas - Stacks
São estrutura de dados do tipo LIFO(last-in frist-out), onde o último elemento inserido será o primeiro a sair, permitindo o acesso apenas um item de dados - o último inserido. Operações de pilhas:
- criação da pilha (informar a capacidade)
- empilhar elemento (push)
- desempilhar elemento (pop)
- mostrar o top
- verificar se a pilha esta vazia (isEmpyt)
- verificar se a pulha esta cheia (isFull)

A implementação de pilhar pode ser por vetor ou lista encadeada
Exemplos de uso de pilha: funções recursivas, mecanismo de fazer e desfazer editor texto, navegação pag. web, entre outros


