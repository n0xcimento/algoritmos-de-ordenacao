#!/bin/bash

# gnuplot -p -c ../tempo.p "$1"
# gnuplot -p -c ../comp.p "$1"
# gnuplot -p -c ../troca.p "$1"

# aleatório | crescente | decrescente

# tempo
te=$(paste -d' ' * | tr -s ' ' | cut -d' ' -f1,2,6,10)

# comparação
c=$(paste -d' ' * | tr -s ' ' | cut -d' ' -f1,3,7,11)

# trocas
tr=$(paste -d' ' * | tr -s ' ' | cut -d' ' -f1,4,8,12)

# echo "$te" "$c" "$tr"

echo "$te" > ttemp

echo "$c" > ctemp

echo "$tr" > stemp

gnuplot -p -c ../tempo.p ./ttemp
gnuplot -p -c ../comp.p ctemp
gnuplot -p -c ../troca.p stemp

rm ./ttemp
rm ./ctemp
rm ./stemp