#ifndef FITXA_H
#define FITXA_H
#include "Posicio.h"
using namespace std;
#include <string>
static const int MAX_MOVIMENTS_POSIBLES = 100;

typedef enum
{
	TIPUS_NORMAL,
	TIPUS_DAMA,
	TIPUS_EMPTY
} TipusFitxa;

typedef enum
{

	COLOR_NEGRE,
	COLOR_BLANC,
} ColorFitxa;

class Fitxa {
public:
    
    Fitxa() : m_tipus(TIPUS_EMPTY), m_color(COLOR_NEGRE){}
    Fitxa(TipusFitxa tipus, ColorFitxa color, Posicio posicio) : m_tipus(tipus), m_color(color), m_posicio(posicio) {}

    
    TipusFitxa getTipus() const { return m_tipus; }
    ColorFitxa getColor() const { return m_color; }
    Posicio getPosicio() const { return m_posicio; }
    Posicio getPosicioPosible(int posicio) const { return m_posicionsPosibles[posicio]; }
    void setTipus(TipusFitxa tipus) { m_tipus = tipus; }
    void setColor(ColorFitxa color) { m_color = color; }
    void setPosicio(Posicio posicio) { m_posicio = posicio; }
    void setPosicioPosibles(Posicio posicio, int i) { m_posicionsPosibles[i] = posicio; }

    bool esBuida() const { return m_tipus == TIPUS_EMPTY; }
    bool esBlanca() const { return m_color == COLOR_BLANC && m_tipus != TIPUS_EMPTY; }
    bool esNegra() const { return m_color == COLOR_NEGRE && m_tipus != TIPUS_EMPTY; }
    bool esDama() const { return m_tipus == TIPUS_DAMA; }
	bool esNormal() const { return m_tipus == TIPUS_NORMAL; }
    
    void convertirDama();


private:
    TipusFitxa m_tipus;  
    ColorFitxa m_color;  
    Posicio m_posicio;
    Posicio m_posicionsPosibles[MAX_MOVIMENTS_POSIBLES];
};
#endif