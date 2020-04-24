#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <list>
#include <queue>
#include <unistd.h>
#include <vector>
#include <queue>


//global variables
double length;
double time;
double service_rate;
double arrival_rate;
double arrival_time;

//data structures
struct event{
	double event_time;
	double type;			//we can have 0 = arrival & 1 = departure
	struct event *next_event;
	struct event *prev_event;
};

typedef struct event event;

struct gel{
	list<event> gel;
};

typedef struct gel gel;

void insertIntoGEL(event *created_event){

	if (GEL->size() == 0){
		GEL->push_front(created_event);
		return;
	} else {

		std::list<event *>::Check check;
		for (check = GEL->being(), check != GEL->end(), check++){

		}
		return;
	}

	return;
}

int main(int argc, char *argv[]) {


	//initialization
	length = 0;
	current_time = 0;
	arrival_time = 0;
	service_rate = 0;
	arrival_rate = 0;
	gel list;

	event first_event;
	first_event.type = 0;
	first_event.event_time = current_time + ;
	//^^need to add a randomly generated inter-arrival time to the current time, not sure how
	insertIntoGEL(first_event);

	for(int i = 0; i < 100000; i++)
  {
		if(list.front().type == 1){

		} else {

			
		}


  }

	//need to output statistics

	return 0;
}
