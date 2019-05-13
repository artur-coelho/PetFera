#ifndef _ANFIBIO_HPP_
#define _ANFIBIO_HPP_

#include "Animal.hpp"
#include "Time.hpp"


class Anfibio : public Animal {
protected:
	int m_total_de_mudas;
	Date m_ultima_muda;
public:
	Anfibio();
	~Anfibio();

	void set_m_total_de_mudas(int total_de_mudas);
	int get_m_total_de_mudas();
	void set_m_ultima_muda(Date ultima_muda);
	Date get_m_ultima_muda();

};

#endif