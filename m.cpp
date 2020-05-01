//Chelsy Sesma, Jie Lyu
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

//global variables
int length;
double time;
double service_rate;
double arrival_rate, busy, area;
int packet_drop;

#define MAXBUFFER 10; //not sure what to set this to?

//data structures
class event{
    public:
		bool operator>(const event &rhs){
			return this.event_time > rhs.event_time;
		}
		bool operator<(const event &rhs){
			return this.event_time < rhs.event_time;
		}
		void set(double x){event_time=x;}
		void seT(int x){type=x;}
		int geT(){return type;}
		double get(){return event_time;}
    private:
		double event_time;
		int type;			//we can have 0 = arrival & 1 = departure
};

// Priority queue storing events in ascending order of event_time
priority_queue<event, vector<event>,less<vector<event>::value_type>> gel;

queue<event> buffer;

double nedt (double rate) { //inter-arrival time
	 double u;
	 u = drand48();
	 return ((-1/rate)*log(1-u));
}


void processDepartureEvent(event e){
//TODO: Update statistics which maintain the mean queue-length and the server busy time.
	length--;
	if (length > 0){
		buffer.pop();
    double service_time = nedt(service_rate);
		double new_departure_event_time = time + service_time;

    busy += service_time;
		event new_departure_event;
		new_departure_event.seT(1);
		new_departure_event.set(new_departure_event_time);

		gel.push(new_departure_event);
	}
	return;
}

void processArrivalEvent(event e){
	double next_arrival_time = time + nedt(arrival_rate);
	double service_time = nedt(service_rate);
	event new_arrival_event;
	new_arrival_event.seT(0);
	new_arrival_event.set(next_arrival_time);
	gel.push(new_arrival_event);
	if(length == 0){ //packet  can  be  immediately  scheduled  for transmission
  busy += service_time;
  event new_departure_event;
	new_departure_event.seT(0);
	new_departure_event.set(time+service_time);
	gel.push(new_departure_event);
	length++;
	}else {
		if(length-1 < MAXBUFFER){
			buffer.push(e);
			length++;
		} else{
			packet_drop++;
		}
	}
//TODO: Update statistics which maintain the mean queue-length and the server busy time.
	return;
}

int main() {
	length=0, packet_drop = 0;
	time=0, busy=0;
	cin>>service_rate>> arrival_rate;

	event first_event;
	first_event.seT(0);
	first_event.set(time + nedt(arrival_rate));
	gel.push(first_event);

	for(int i = 0; i < 100000; i++){
		event e=gel.top();
    double time_change = e.get() - time;
		time = e.get();
    area += length * time_change;
		if(e.geT() == 0){
			processArrivalEvent(e);
		} else {
			processDepartureEvent(e);
		}
  	}

	cout<<"Utilization: "<<busy/time<<"\n Mean q length: "<<area/time<<"\n Packets dropped: "<<packet_drop<<"\n";
	return 0;
}
