#ifndef POSICIO_H
#define POSICIO_H
#include <string>
using namespace std;
static const int N_FILES = 8;
static const int N_COLUMNES = 8;
class Posicio
{
public:

	Posicio() : m_fila(""), m_columna("") {}
	Posicio(string fila, string columna) : m_fila(fila), m_columna(columna) {};
	Posicio(const string& posicio);

	string getFila() const { return m_fila; };
	string getColumna() const { return m_columna; };

	void setFila(int fila) { m_fila = fila; }
	void setColumna(int columna) { m_columna = columna; }

	bool operator==(const Posicio& posicio) const;
	string operator+();

private:
	string m_fila;
	string m_columna;
};

ostream& operator<<(ostream& os, const Posicio& p);
istream& operator>>(istream& is, Posicio& p);
#endif
