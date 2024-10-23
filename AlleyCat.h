//
// Created by JAD on 22/10/2024.
//

#ifndef ALLEY_CAT_H_
#define ALLEY_CAT_H_

#include <iostream>
#include <string>
#include "Cat.h"

namespace cat {
	class AlleyCat : public Cat {
	  public:
		AlleyCat(std::string name, char state);
		AlleyCat(char state);
		AlleyCat(std::string name);
		AlleyCat();
		~AlleyCat() = default;
		void display() const override;

	};
}
#endif //ALLEY_CAT_H_
