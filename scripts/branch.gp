reset
set ylabel 'average execution time(sec)'
set style fill solid 0.4 border 0
set boxwidth 0.2
set title 'perfomance comparison'
set term png enhanced font 'Verdana,10'
set output 'branch_info.png'

plot [:][:]'branch_info.txt' using ($0-0.2):2 with boxes title 'original', \
'' using ($0-0.2):($2):2 with labels notitle, \
'' using ($0):3:xtic(1) with boxes title 'inline', \
'' using ($0):($3):3 with labels notitle, \
'' using ($0+0.2): 4 with boxes title 'inline and loop unrolling', \
'' using ($0+0.2):($4):4 with labels notitle
