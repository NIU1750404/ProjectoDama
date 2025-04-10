#include "Posicio.h"
#include <string>
using namespace std;
void Posicio::posicioToString(const int fila, const int columna, string& posicio)
{
	posicio = "a1";
	posicio[0] = 'a' + columna;
	posicio[1] = '1' + (N_FILES - 1) - fila;
}

bool Posicio::operator==(const Posicio& posicio) const
{
	return m_fila == posicio.m_fila && m_columna == posicio.m_columna;
}