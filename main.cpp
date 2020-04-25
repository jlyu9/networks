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
	//working on still
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

void processEvent(gel& list){
	//working on still
	current_time = current_time + list.front().event_time; //update time

	double next_arrival_time = current_time + ;
	//^^not sure how to set the new arrival time

	return;
}

int main(int argc, char *argv[]) {


	//initialization
	length, current_time, arrival_time, service_rate, arrival_rate = 0;
	gel list;

	event first_event;
	first_event.type = 0;
	first_event.event_time = current_time + ;
	//^^need to add a randomly generated inter-arrival time to the current time, not sure how
	insertIntoGEL(first_event);

	for(int i = 0; i < 100000; i++)
  {
		if(list.front().type == 1){
			processEvent(list);
		} else {


		}


  }

	//need to output statistics

	return 0;
}
