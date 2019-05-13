#ifndef _MAMIFERO_HPP_
#define _MAMIFERO_HPP_

#include "Animal.hpp"


class Mamifero : public Animal {
protected:
	std::string m_cor_pelo;
public:
	Mamifero();
	~Mamifero();

	void set_m_cor_pelo(std::string cor_pelo);
	std::string get_m_cor_pelo();
};

#endif