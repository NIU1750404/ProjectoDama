#ifndef TAULER_H
#define TAULER_H
#include <string>
#include "Posicio.h"
#include "Moviment.h"
#include "Fitxa.h"

using namespace std;

static const int N_FILES = 8;
static const int N_COLUMNES = 8;

class Tauler
{
public:
	Tauler() : m_torn(0) {};
	~Tauler();
	Tauler(const Tauler& tauler) ;

	void inicialitza(const string& nomFitxer);
	void actualitzaMovimentsValids();
	bool mouFitxa(const Posicio& origen, const Posicio& desti);
	void getPosicionsPossibles(const Posicio& origen, int& nPosicions, Posicio posicionsPossibles[]);

	string toString() const;
private:
	Fitxa m_tauler[N_FILES][N_COLUMNES];
	int m_torn;

};


#endif

