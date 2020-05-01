all: m.cpp
	gcc -g -Wall -o m m.cpp
Clean: 
	$(RM) m
