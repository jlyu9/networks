#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <list>
#include <queue>
#include <unistd.h>
#include <vector>

//global variables
double length;
double time;
double service_rate;
double arrival_rate;
double arrival_time;

//data structures
struct event{
	double event_time;
	double type;
	struct event *next_event;
	struct event *prev_event;
};

typedef struct event event;

int main(int argc, char *argv[]) {

	srand48(time(0)); //randomly generated arrival time

	//initialization
	length = 0;
	current_time = 0;
	arrival_time = 0;
	service_rate = 0;
	arrival_rate = 0;


	event first_event;

	for(int i = 0; i < 100000; i++)
  {
		arrival_time = current_time + ;
		
		//get first event from GEL

  }

	//need to output statistics

	return 0;
}
