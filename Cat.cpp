//
// Created by JAD on 22/10/2024.
//

#include "Cat.h"

using namespace cat;

Cat::Cat(std::string name, char state) {
	this->name_ = name;
	this->state_ = state;
	this->numberOfLivesRemaining_ = Cat::NUMBER_OF_LIVES;
}

Cat::Cat(char state) : Cat(DEFAULT_NAME, state) {}

Cat::Cat(std::string name) : Cat(name, DEFAULT_STATE) {}

Cat::Cat() : Cat(DEFAULT_NAME, DEFAULT_STATE) {}

std::string Cat::getEyesFromState(char state) {
	switch (state) {
		case 'A': return "o o";
		case 'S': return "- -";
		case 'D': return "x x";
		default: return "? ?";
	}
}

void Cat::die() {
	if (this->state_ == 'D') return;
	this->numberOfLivesRemaining_--;
	if (this->numberOfLivesRemaining_ <= 0) {
		this->state_ = 'D';
	}
}

void Cat::sleep() {
	if (this->state_ == 'D') return;
	this->state_ = 'S';
}

void Cat::wakeUp() {
	if (this->state_ == 'D') return;
	this->state_ = 'A';
}

char Cat::getState() const {
	return this->state_;
}

std::string Cat::getName() const {
	return this->name_;
}

void Cat::setName(std::string name) {
	this->name_ = name;
}

int Cat::getNumberOfLivesRemaining() const {
	return this->numberOfLivesRemaining_;
}

