main: main.o intro.o getAnswer.o predict.o show_num_range.o
	gcc -o main.o intro.o getAnswer.o predict.o show_num_range.o
main.o: main.c main.h
	gcc -c main.c
intro.o: intro.c
	gcc -c intro.c
getAnswer.o: getAnswer.c
	gcc -c getAnswer.c
predict.o: predict.c
	gcc -c predict.c
show_num_range.o: show_num_range.c
	gcc -c show_num_range.c
clean:
	rm main.o intro.o predict.o show_num_range.o getAnswer.o show_num_range.o main

