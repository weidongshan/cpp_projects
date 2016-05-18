
Human: main.o libHuman.so
	g++ -o $@ $< -L./ -lHuman

%.o : %.cpp
	g++ -fPIC -c -o $@ $<

libHuman.so : Englishman.o Chinese.o Human.o
	g++ -shared -o $@ $^

clean:
	rm -f *.o Human	