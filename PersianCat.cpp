//
// Created by JAD on 22/10/2024.
//

#include "PersianCat.h"

using namespace cat;

PersianCat::PersianCat(std::string name, char state) : Cat(name, state) {}

PersianCat::PersianCat(char state) : Cat(state) {}

PersianCat::PersianCat(std::string name) : Cat(name) {}

PersianCat::PersianCat() : Cat() {}

void cat::PersianCat::display() const {
	std::cout << " /\\_/\\ " << std::endl;
	std::cout << "( " << Cat::getEyesFromState(this->getState()) << " )" << std::endl;
	std::cout << "  (''''')~" << std::endl;
	std::cout << "  ww  ww" << std::endl;
	std::cout << std::endl;
}
