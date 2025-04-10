#include "Tauler.h"
#include <fstream>
#include <iostream>
void Tauler::inicialitza(const string& nomFitxer) {
    // Initialize board with default position
    for (int i = 0; i < N_FILES; i++) {
        for (int j = 0; j < N_COLUMNES; j++) {
            m_tauler[i][j] = Fitxa();
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < N_COLUMNES; j++) {
            if ((i + j) % 2 == 1) {
                m_tauler[i][j] = Fitxa(TIPUS_NORMAL, COLOR_NEGRE, Posicio(i, j));
            }
        }
    }
    for (int i = 5; i < N_FILES; i++) {
        for (int j = 0; j < N_COLUMNES; j++) {
            if ((i + j) % 2 == 1) {
                m_tauler[i][j] = Fitxa(TIPUS_NORMAL, COLOR_BLANC, Posicio(i, j));
            }
        }
    }

    m_torn = 0;

    ifstream fitxer(nomFitxer);
    if (fitxer.is_open()) {
        int fila = N_FILES - 1;  // Start from top row (row 8)
        int col = 0;
        char c;

        while (fitxer.get(c) && fila >= 0) {
            // Skip spaces and row numbers
            if (c == ' ' || (c >= '1' && c <= '8')) {
                continue;
            }

            // Handle newline
            if (c == '\n') {
                fila--;
                col = 0;
                continue;
            }

            // Process piece characters
            if (col < N_COLUMNES) {
                switch (c) {
                case 'O':
                    m_tauler[fila][col] = Fitxa(TIPUS_NORMAL, COLOR_BLANC, Posicio(fila, col));
                    break;
                case 'X':
                    m_tauler[fila][col] = Fitxa(TIPUS_NORMAL, COLOR_NEGRE, Posicio(fila, col));
                    break;
                case 'D':
                    m_tauler[fila][col] = Fitxa(TIPUS_DAMA, COLOR_BLANC, Posicio(fila, col));
                    break;
                case 'R':
                    m_tauler[fila][col] = Fitxa(TIPUS_DAMA, COLOR_NEGRE, Posicio(fila, col));
                    break;
                default:
                    m_tauler[fila][col] = Fitxa();
                    break;
                }
                col++;
            }
        }

        fitxer.close();
        return;
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
    string result = "  a b c d e f g h\n";
    for (int i = N_FILES - 1; i >= 0; i--) {
        result += to_string(i + 1) + " ";
        for (int j = 0; j < N_COLUMNES; j++) {
            if (m_tauler[i][j].esBuida()) result += "- ";
            else if (m_tauler[i][j].esBlanca() && m_tauler[i][j].esNormal()) result += "O ";
            else if (m_tauler[i][j].esNegra() && m_tauler[i][j].esNormal()) result += "X ";
            else if (m_tauler[i][j].esBlanca() && m_tauler[i][j].esDama()) result += "D ";
            else if (m_tauler[i][j].esNegra() && m_tauler[i][j].esDama()) result += "R ";
        }
        result += "\n";
    }
    return result;
}

