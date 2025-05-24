build:
	g++ -std=c++17 -o my_program *.cpp

run: build
	./my_program

clean:
	rm -f my_program
	rm -f *.o