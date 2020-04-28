//Chelsy Sesma, Jie Lyu
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <list>
#include <queue>
#include <unistd.h>

using namespace std;

//global variables
int length;
double time;
double service_rate;
double arrival_rate;
int packet_drop;

#define MAXBUFFER ; //not sure what to set this to?

//data structures
class event{
    public:
	double event_time;
	int type;			//we can have 0 = arrival & 1 = departure
	//TODO: overload operator >
};

//TODO: figure out how to heapify events in gel
priority_queue<> gel;

queue<event> buffer;		

//helper functions
double nedt (double rate) { //inter-arrival time
	 double u;
	 u = drand48();
	 return ((-1/rate)*log(1-u));
}

/*void insertIntoGEL(event *created_event){
	//working on still
	if (GEL->size() == 0){
		GEL->push_front(created_event);
		return;
	} else {

		std::list<event *>::Check check;
		for (check = GEL->begin(), check != GEL->end(), check++){

		}
		return;
	}

	return;
}*/

void processDepartureEvent(gel& list){
	//set current time equal to the event time.
	current_time = current_time + list.front().event_time; //update time

	length = buffer.size();

	if (length != 0){
		//dequeue the first packet from the buffer

		//NEED TO DO: Update statistics which maintain the mean queue-length and the server busy time.

		//Create a new departure event for a time which is the current time plus the time to transmit the packet
		double new_departure_event_time = current_time + ;

		event new_departure_event;
		new_departure_event.type = 1;
		new_departure_event.event_time = new_departure_event_time;

		//Insert the event at the right place in the GEL
		list.push(new_departure_event);
		buffer.pop();
	}

	//else do nothing

	return;
}

void processArrivalEvent(gel& list){
	//set current time equal to the event time.
	current_time = current_time + list.front().event_time; //update time

	double next_arrival_time = current_time + ;
	//^^not sure how to set the new arrival time

	//schedule next arrival event
	double new_arrival_event_time = current_time + ;
	event new_arrival_event;
	new_arrival_event.type = 0;
	new_arrival_event.event_time = new_arrival_event_time;

	//Insert the event at the right place in the GEL
	list.push(new_arrival_event);

	//process arrival event
	if(length == 0){ //packet  can  be  immediately  scheduled  for transmission

	//Get the service time of the packet.
	double new_departure_event_time = current_time + ;

	//Create  a  departure  event  at  time  which  is  equal  to  the  current  time  plus the service time of the packet.
	Event new_departure_event;
	new_departure_event.type = 0;
	new_departure_event.event_time = new_departure_event_time;

	//Insert  the  event  into  the  GEL.
	list.push(new_departure_event);
	length++;

	}else {
		//NOTE TO DO: Update statistics which maintain the mean queue-length and the server busy time.

		//If the queue is not full, i.e. if (length-1 < MAXBUFFER), put the packet into the queue. (
		if(length-1 < MAXBUFFER){

			//Since this is a new arrival event, we increment the length
			length++;
		} else{
			//If the queue is full, then drop the packet; record a packet drop
			packet_drop++;
		}
	}

	return;
}

int main() {


	//initialization
	length=0, packet_drop = 0;
	time=0;
	cin>>service_rate>> arrival_rate;

	event first_event;
	first_event.type = 0;
	first_event.event_time = time + nedt(arrival_rate);
	

	for(int i = 0; i < 100000; i++)
  {
		if(list.front().type == 0){

			processArrivalEvent(list);

		} else {

			processDepartureEvent(list);

		}

  }

	//NEED TO DO:  output statistics

	return 0;
}
