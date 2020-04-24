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
struct event{ //node of double linked list
	double event_time;
	double type;
	struct event *next_event;
	struct event *prev_event;
};

typedef struct event event;

void insertIntoGEL(std::list<event *> GEL, event *created_event){

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
	std::list<event *> GEL;

	event first_event;

	for(int i = 0; i < 100000; i++)
  {
		arrival_time = current_time + ;
		//^^ need to add a randomly generated inter-arrival time to the current time, not sure how

		insertIntoGEL(&GEL, first_event);
		//get first event from GEL

  }

	//need to output statistics

	return 0;
}
