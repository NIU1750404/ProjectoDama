#include "Posicio.h"
#include <string>
using namespace std;
string Posicio::toString() const
{
	char col = 'a' + m_columna; 
	return string(1, col) + to_string(m_fila + 1);
}