#ifndef POSICIO_H
#define POSICIO_H
#include <string>
using namespace std;
static const int N_FILES = 8;
static const int N_COLUMNES = 8;
class Posicio
{
public:

	Posicio() : m_fila(0), m_columna(0) {}
	Posicio(int fila, int columna) : m_fila(fila), m_columna(columna) {};
	Posicio(const string& posicio);

	int getFila() const { return m_fila; };
	int getColumna() const { return m_columna; };

	void setFila(int fila) { m_fila = fila; }
	void setColumna(int columna) { m_columna = columna; }

	void posicioToString(const int fila, const int columna, string& posicio);

	bool operator==(const Posicio& posicio) const;

private:
	int m_fila;
	int m_columna;
};


#endif