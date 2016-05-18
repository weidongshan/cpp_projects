
Human: main.o Chinese.o Englishman.o
	g++ -o $@ $^

%.o : %.cpp
	g++ -c -o $@ $<

clean:
	rm -f *.o Human	