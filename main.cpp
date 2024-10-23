#include <iostream>
#include "SiameseCat.h"
#include "PersianCat.h"
#include "AlleyCat.h"

using namespace cat;

int main() {
	Cat *croquette = new SiameseCat("Croquette");
	std::cout << croquette->getName() << std::endl;
	croquette->display();

	Cat *demoiselle = new AlleyCat("Demoiselle", 'A');
	std::cout << demoiselle->getName() << std::endl;
	demoiselle->display();

	Cat *moustache = new PersianCat();
	std::cout << moustache->getName() << std::endl;
	moustache->display();
	for (int i = 0; i < Cat::NUMBER_OF_LIVES; i++) {
		moustache->die();
	}
	std::cout << moustache->getName() << std::endl;
	moustache->display();

	system("pause");
	return 0;
}
