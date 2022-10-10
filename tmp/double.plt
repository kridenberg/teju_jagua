set datafile separator ','

set lmargin 10
set bmargin 5

set xlabel "Floating point number" font "Noto Sans Black,12"
set ylabel "Time in nanoseconds" font "Noto Sans Black,12"

set tics font "Noto Sans,12"

set logscale x 2
set format x "2^{%L}"

set yrange [*:*]

set grid x y

set key autotitle columnhead
set key right top spacing 2 font "Arial,12" maxrows 1

plot "double.gcc.linux.csv" \
  using 4:5 with points pt 0 ps 0.5 lc "blue", "" \
  using 4:7 with points pt 0 ps 0.5 lc "red"
