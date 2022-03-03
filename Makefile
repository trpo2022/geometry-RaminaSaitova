geometry: main.c
	gcc -Wall -Werror -o main main.c -lm
clean:
	rm main
run:
	./main