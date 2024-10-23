//
// Created by JAD on 22/10/2024.
//


#include "AlleyCat.h"

using namespace cat;

AlleyCat::AlleyCat(std::string name, char state) : Cat(name, state) {}

AlleyCat::AlleyCat(char state) : Cat(state) {}

AlleyCat::AlleyCat(std::string name) : Cat(name) {}

AlleyCat::AlleyCat() : Cat() {}

void AlleyCat::display() const {
	std::cout << " /\\_/\\ " << std::endl;
	std::cout << "( " << Cat::getEyesFromState(this->getState()) << " )" << std::endl;
	std::cout << "  (     )~" << std::endl;
	std::cout << "  ww  ww" << std::endl;
	std::cout << std::endl;
}
