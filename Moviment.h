#ifndef MOVIMENT.H
#define MOVIMENT.H
#include <string>
#include "Posicio.h"

using namespace std;

class Moviment
{
public:
	Moviment() : m_inicial(Posicio()), m_final(Posicio()) {}
	Moviment(const Posicio& inicial, const Posicio & final) : m_inicial(inicial), m_final(final) {}

	Posicio getInicial() const { return m_inicial; }
	Posicio getFinal() const { return m_final; }
	void setInicial(const Posicio& inicial) { m_inicial = inicial; }
	void setFinal(const Posicio & final) { m_final = final; }


	string toString() const;

private:
	Posicio m_inicial;
	Posicio m_final;

};


#endif