//
// Created by JAD on 22/10/2024.
//

#ifndef PERSIAN_CAT_H_
#define PERSIAN_CAT_H_

#include <iostream>
#include <string>
#include "Cat.h"

namespace cat {
	class PersianCat : public Cat {
	  public:
		PersianCat(std::string name, char state);
		PersianCat(char state);
		PersianCat(std::string name);
		PersianCat();
		~PersianCat() = default;
		void display() const override;

	};
}
#endif //PERSIAN_CAT_H_
