all: clean compile test

compile:
	g++ -o ruler main.cpp -Og -g

test: # no test this week, so running the binary
	./ruler

clean:
	rm -f ruler

format:
	clang-format -i *.cpp
