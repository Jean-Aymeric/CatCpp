//
// Created by JAD on 22/10/2024.
//

#ifndef CAT_H_
#define CAT_H_

#include <string>

namespace cat {
	class Cat {
	  private :
		static inline const char DEFAULT_STATE = 'S';
		static inline const std::string DEFAULT_NAME = "Minou";

		char state_;
		std::string name_;
		int numberOfLivesRemaining_;

	  public :
		static inline const int NUMBER_OF_LIVES = 9;

		Cat(std::string name, char state);
		Cat(char state);
		Cat(std::string name);
		Cat();
		~Cat() = default;
		static std::string getEyesFromState(char state);
		void die();
		void sleep();
		void wakeUp();
		virtual void display() const = 0;
		[[nodiscard]] char getState() const;
		[[nodiscard]] std::string getName() const;
		void setName(std::string name);
		[[nodiscard]] int getNumberOfLivesRemaining() const;
	};
}
#endif //CAT_H_
