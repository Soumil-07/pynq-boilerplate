open_component add.comp -reset
add_files [list add.cpp]
add_files -tb [list add_test.cpp]
set_top add
puts "Running: set_top add"
set_part xc7z020-clg400-1
puts "Running: set_part xc7z020-clg400-1"
create_clock -period 10
csynth_design

exit