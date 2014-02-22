all:
	g++ program.cpp -o program.exe -Wall -Wextra -pedantic
test: all
	program.exe
run:
	program.exe