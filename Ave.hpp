#ifndef _AVE_HPP_
#define _AVE_HPP_

class Ave : public Animal {
protected:
	double m_tamanho_do_bico;
	double m_envergadura_das_asas;
public:
	Ave();
	~Ave();

	void set_m_tamanho_do_bico(double tamanho_do_bico);
	double get_m_tamanho_do_bico();
	void set_m_envergadura_das_asas(double envergadura_das_asas);
	double get_m_envergadura_das_asas();
};

#endif