#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <list>
#include <queue>
#include <unistd.h>
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

struct gel{
	queue<event> buffer;
};

typedef struct buffer buffer;

double negative-exponentially-distributed-time (doublerate) {
	 double u;
	 u = drand48();
	 return ((-1/rate)*log(1-u));
}

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

void processDepartureEvent(gel& list){
	//set current time equal to the event time.
	current_time = current_time + list.front().event_time; //update time

	if (length != 0){
		//dequeue the first packet from the buffer


		//Create a new departure event for a time which is the current time plus the time to transmit the packet
		double new_departure_event_time = current_time + ;

		event new_departure_event;
		new_departure_event.type = 1;
		new_departure_event.event_time = new_departure_event_time;

		//Insert the event at the right place in theGEL
		list.push(new_departure_event);

		length--;
	}
	return;
}

void processArrivalEvent(gel& list){
	//set current time equal to the event time.
	current_time = current_time + list.front().event_time; //update time

	double next_arrival_time = current_time + ;
	//^^not sure how to set the new arrival time

	//schedule next arrival event
	//process arrival event

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

			processArrivalEvent(list);

		} else {

			processDepartureEvent(list);

		}

  }

	//need to output statistics

	return 0;
}
