#ifndef FITXA_H
#define FITXA_H

using namespace std;
#include <string>

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
    
    Fitxa() : m_tipus(TIPUS_EMPTY), m_color(COLOR_NEGRE) {}
    Fitxa(TipusFitxa tipus, ColorFitxa color) : m_tipus(tipus), m_color(color) {}

    
    TipusFitxa getTipus() const { return m_tipus; }
    ColorFitxa getColor() const { return m_color; }
    void setTipus(TipusFitxa tipus) { m_tipus = tipus; }
    void setColor(ColorFitxa color) { m_color = color; }

    bool esBuida() const { return m_tipus == TIPUS_EMPTY; }
    bool esBlanca() const { return m_color == COLOR_BLANC && m_tipus != TIPUS_EMPTY; }
    bool esNegra() const { return m_color == COLOR_NEGRE && m_tipus != TIPUS_EMPTY; }
    bool esDama() const { return m_tipus == TIPUS_DAMA; }
	bool esNormal() const { return m_tipus == TIPUS_NORMAL; }


    string toString() const;

private:
    TipusFitxa m_tipus;  
    ColorFitxa m_color;  
};
#endif