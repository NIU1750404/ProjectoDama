#include "Fitxa.h"
using namespace std;


void Fitxa::convertirDama() 
{
	if (m_posicio.getColumna() == 9 && m_color == COLOR_BLANC
		|| m_posicio.getColumna() == 0 && m_color == COLOR_NEGRE)
	{
		m_tipus = TIPUS_DAMA;
	}
}