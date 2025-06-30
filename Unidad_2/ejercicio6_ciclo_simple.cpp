#include <iostream>
#include <vector>

using namespace std;

// Busca un ciclo simple que contenga una arista específica usando DFS
bool dfsBuscarCiclo(int actual, int destino, const vector<vector<int>>& matriz, vector<bool>& visitado, int padre) {
    visitado[actual] = true;
    for (int vecino = 0; vecino < matriz.size(); ++vecino) {
        if (matriz[actual][vecino] == 0) continue;

        if (!visitado[vecino]) {
            if (dfsBuscarCiclo(vecino, destino, matriz, visitado, actual)) {
                return true;
            }
        } else if (vecino == destino && vecino != padre) {
            return true;  // Se encontró un ciclo
        }
    }
    return false;
}

// Determina si una arista forma parte de un ciclo simple
bool aristaFormaCicloSimple(const vector<vector<int>>& matriz, int v1, int v2) {
    // Eliminar temporalmente la arista para verificar si hay otro camino
    vector<vector<int>> copia = matriz;
    copia[v1][v2] -= 1;
    copia[v2][v1] -= 1;

    vector<bool> visitado(matriz.size(), false);
    return dfsBuscarCiclo(v1, v2, copia, visitado, -1);
}
