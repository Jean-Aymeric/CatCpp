//
// Created by JAD on 22/10/2024.
//


#include "SiameseCat.h"

using namespace cat;

SiameseCat::SiameseCat(std::string name, char state) : Cat(name, state) {}

SiameseCat::SiameseCat(char state) : Cat(state) {}

SiameseCat::SiameseCat(std::string name) : Cat(name) {}

SiameseCat::SiameseCat() : Cat() {}

void SiameseCat::display() const {
	std::cout << " /\\_/\\ " << std::endl;
	std::cout << "( " << Cat::getEyesFromState(this->getState()) << " )" << std::endl;
	std::cout << "  (\"\"\"\"\")~" << std::endl;
	std::cout << "  ww  ww" << std::endl;
	std::cout << std::endl;
}
