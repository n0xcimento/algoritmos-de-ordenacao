set xlabel "n"
set ylabel "comparações"
set key left
plot ARG1 using 1:2 with lines title "aleatório"
replot ARG1 using 1:3 with lines title "crescente"
replot ARG1 using 1:4 with lines title "decrescente"
pause -1