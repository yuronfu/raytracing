reset
set ylabel 'average execution time(sec)'
set style fill solid 0.4 border 0
set boxwidth 0.5
set title 'Different thread number execution time comparison'
set term png enhanced font 'Verdana,10'
set output 'thread.png'

plot [:][0:2] 'cmp_thread.txt' using ($0):2:xticlabels(1) with boxes notitle, \
'' using ($0):($2):2 with labels notitle