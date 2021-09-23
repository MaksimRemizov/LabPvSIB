gcc -c task1.c
gcc -o task1 task1.o

gcc -c task2.c
gcc -o task2 task2.o

gcc -c task3.c
gcc -o task3 task3.o

gcc -c task4.c
gcc -o task4 task4.o

gcc -c task5_func.c task5_main.c
gcc -o task5 task5_func.o task5_main.o

gcc -c task6_func.c task6_main.c
gcc -o task6 task6_func.o task6_main.o

gcc -c task7_func.c task7_main.c
gcc -o task7 task7_func.o task7_main.o

gcc -c task7_main.c -o task7_main.obj
gcc -c task7_func.c -o task7_func.obj
ar rcs task8_lib.lib task7_func.obj
gcc -o task8 task7_main.obj -L. -l task8_lib
PAUSE