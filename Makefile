CFLAGS = -g
OBJS = main.o read_line.o get_data_from_file.o calc_stats.o sort_by_win_per.o print_out.o

.SUFFIXES: .o .c

main: $(OBJS)

main.o: main.c
	gcc -g -Wall -c main.c
test: main
	./main data/data1.log > result1.txt
	diff result1.txt result1_answer.txt
	./main data/data2.log > result2.txt
	diff result2.txt result2_answer.txt
	./main data/data3.log > result3.txt
	diff result3.txt result3_answer.txt
	./main data/data4.log > result4.txt
	diff result4.txt result4_answer.txt

test2: main
	./main data/data1.log > result1.txt
	diff result1.txt result1_answer.txt

clean:
	rm -rf *.o *~
