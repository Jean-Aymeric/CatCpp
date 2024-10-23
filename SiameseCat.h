//
// Created by JAD on 22/10/2024.
//

#ifndef SIAMESE_CAT_H_
#define SIAMESE_CAT_H_

#include <iostream>
#include <string>
#include "Cat.h"

namespace cat {
	class SiameseCat : public Cat {
	  public:
		SiameseCat(std::string name, char state);
		SiameseCat(char state);
		SiameseCat(std::string name);
		SiameseCat();
		~SiameseCat() = default;
		void display() const override;
	};
}
#endif //SIAMESE_CAT_H_
