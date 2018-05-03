#include "Animal.h"

Animal::Animal(int legs, bool alive, string spec){
	number_of_legs=legs;
	is_alive=alive;
	species=spec;
}

Animal::~Animal(){
	//leaving empty
}


void Animal::set_legs(int legs){
	number_of_legs;
	}
int Animal::get_legs(){
	return number_of_legs;
}
void Animal::set_alive(bool alive){
	is_alive=alive;
}
bool Animal::get_alive(){
	return is_alive;
}
void Animal::set_species(string spec){
	species=spec;
}
string Animal::get_species(){
	return species;
}


