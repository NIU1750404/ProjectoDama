#include "Tauler.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

void Tauler::inicialitza(const string& nomFitxer) {
    
    ifstream archivo(nomFitxer);
    if (archivo.is_open())
    {
        string posicioStr, tipusStr, colorStr;
        while (archivo >> posicioStr >> tipusStr >> colorStr)
        {
            Posicio pos(posicioStr);
            string columna = pos.getColumna();
            string fila = pos.getFila();
            TipusFitxa tipus;
            ColorFitxa color;

            for (int i = 0; i < N_FILES; i++)
            {
                for (int j = 0; j < N_COLUMNES; i++)
                {
                    if (tipusStr == "O" || tipusStr == "X")
                    {
                        tipus = TIPUS_NORMAL;
                    }

                    else
                    {
                        tipus = TIPUS_DAMA;
                    }

                    if (colorStr == "BLANC")
                    {
                        color = COLOR_BLANC;
                    }

                    else
                    {
                        color = COLOR_NEGRE;
                    }
                    Fitxa fitxa(tipus, color, pos);

                    m_tauler[i][j] = fitxa;
                }

            }

            
        }
        archivo.close();
    }
}
    


void Tauler::actualitzaMovimentsValids()
{

}
bool Tauler::mouFitxa(const Posicio& origen, const Posicio& desti)
{

}
void Tauler::getPosicionsPossibles(const Posicio& origen, int& nPosicions, Posicio posicionsPossibles[])
{

}

string Tauler::toString() const {

}

