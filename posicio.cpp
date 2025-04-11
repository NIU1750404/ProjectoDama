#include "Posicio.h"
#include <string>
using namespace std;

bool Posicio::operator==(const Posicio& posicio) const
{
	return m_fila == posicio.m_fila && m_columna == posicio.m_columna;
}

string Posicio::operator+() const
{
	return m_columna + m_fila;
}

Posicio::Posicio(const string& posicio)
{
	m_columna = posicio[0]; 
	m_fila = posicio[1];     
}

ostream& operator<<(ostream& os, const Posicio& p)
{
	os << p.getColumna() << p.getFila();
	return os;
}
istream& operator>>(istream& is, Posicio& p)
{
	string entrada;
	is >> entrada;

	p = Posicio(entrada);

	return is;
}