#ifndef MOVIMENT_H
#define MOVIMENT_H
#include <string>
#include "Posicio.h"

using namespace std;

class Moviment
{
public:
	Moviment() : m_inicial(Posicio()), m_final(Posicio()), m_nCaptures(0), m_nPosicionsMitjanes(0) {}
	Moviment(const Posicio& inicial, const Posicio& final) : m_inicial(inicial), m_final(final), m_nCaptures(0), m_nPosicionsMitjanes(0) {}

	Posicio getInicial() const { return m_inicial; }
	Posicio getFinal() const { return m_final; }
	void setInicial(const Posicio& inicial) { m_inicial = inicial; }
	void setFinal(const Posicio & final) { m_final = final; }

	int getNCaptures() const { return m_nCaptures; }
	int getNPosicionsMitjanes() const { return m_nPosicionsMitjanes; }
	void setNCaptures(int nCaptures) { m_nCaptures = nCaptures; }
	void setNPosicionsMitjanes(int nPosicionsMitjanes) { m_nPosicionsMitjanes = nPosicionsMitjanes; }

	string toString() const;

private:
	Posicio m_inicial;
	Posicio m_final;
	int m_nCaptures;
	int m_nPosicionsMitjanes;

};


#endif