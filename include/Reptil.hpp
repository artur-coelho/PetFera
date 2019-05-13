#ifndef _REPTIL_HPP_
#define _REPTIL_HPP_

#include "Animal.hpp"

class Reptil : public Animal {
protected:
	bool m_venenoso;
	std::string m_tipo_veneno;

public:
	Reptil();
	~Reptil();

	void set_m_venenoso(bool venenoso);
	bool get_m_venenoso();
	void set_m_tipo_veneno(std::string tipo_veneno);
	std::string get_m_tipo_veneno();

};

#endif