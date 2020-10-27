main: main.o intro.o getAnswer.o predict.o show_num_range.o guessNum.o firstGuess.o
	gcc -o main main.o intro.o getAnswer.o predict.o show_num_range.o guessNum.o firstGuess.o -lm
main.o: main.c main.h
	gcc -c main.c -lm
intro.o: intro.c
	gcc -c intro.c
getAnswer.o: getAnswer.c
	gcc -c getAnswer.c
predict.o: predict.c
	gcc -c predict.c -lm
show_num_range.o: show_num_range.c
	gcc -c show_num_range.c
guessNum.o: guessNum.c
	gcc -c guessNum.c
firstGuess.o: firstGuess.c
	gcc -c firstGuess.c
clean:
	rm main.o intro.o predict.o show_num_range.o getAnswer.o show_num_range.o main guessNum.o firstGuess.o

