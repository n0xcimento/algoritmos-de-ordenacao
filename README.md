Para a compilação das implementações dos algoritmos, usa-se:

    gcc main.c -o exec

O programa espera, como entrada, um arquivo que contém *n* valores inteiros, tal que os valores estejam em linhas diferentes, no arquivo. Terminado de processar a instância, o programa gera uma linha com quatro colunas no seguinte formato:

| Quantidade | Tempo | Comparações | Trocas |
|--|--|--|--|

Como exemplo de entradas, nos diretórios **aleatório**, **crescente** e **decrescente** há arquivos que possuem 1x10^3, 1x10^4, {1,2,...,8,9}x10^5 e 1x10^6 valores inteiros; sendo que tais arquivos possuem extensão **.in**.

Para rodar o programa passando uma instância, faz-se o seguinte:

    USAGE:
      ./exec ALGORITHM DIR/*.in

    ALGORITHM:
              bubblesort|insertionsort|selectionsort|mergesort|
              quicksort|heapsort|timsort|gnomesort

    DIR:
        aleatorio|crescente|decrescente

Como exemplo, executando o Timsort com uma instância aleatória de 400000 elementos, tem-se o seguinte:

    ./exec timsort aleatorio/400000.in
    400000  0.078073  5907449  5543342

Usando esse exemplo e a mensagem de uso que o próprio pragrama possui, é possível rodar as instâncias já prontas em cada diretório. Caso o usuário deseje criar uma instância própria para testar, ele precisa criar um arquivo contendo os valores que o vetor terão, tal que cada valor, no arquivo, esteja em uma linha diferente.
