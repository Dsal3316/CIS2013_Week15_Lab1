#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

int main(){

	string species;
	int legs;
	char alive;
	bool is_alive;
	Animal cat;

	cout<< "You making some animals..." << endl;
	cout<< "What species of animal do you to make first? ";
	cin>> species;

	cout << "How many legs does your animal have? ";
	cin>>legs;

	cout << "Is it alive (y/n)?";
	cin>>alive;

	if(alive=='y' || alive=='Y'){
		is_alive=true;
	}else if(alive == 'n' || alive=='N'){
		is_alive=false;
	}else{
		cout<<"That was not an option...screw you....I'm killing your animal" << endl;
	}

	Animal users(legs, is_alive, species);
	cout<< "Also I am going to make you a cat"<<endl;