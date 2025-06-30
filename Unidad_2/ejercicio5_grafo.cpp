#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Crea y retorna la matriz de adyacencia de un grafo no dirigido
vector<vector<int>> construirMatrizAdyacencia(int cantidadVertices, const vector<pair<int, int>>& listaAristas) {
    vector<vector<int>> matriz(cantidadVertices, vector<int>(cantidadVertices, 0));

    for (const auto& arista : listaAristas) {
        int origen = arista.first;
        int destino = arista.second;
        matriz[origen][destino] += 1;
        if (origen != destino) {
            matriz[destino][origen] += 1;  // Evita duplicar en caso de bucle
        }
    }

    return matriz;
}

// Muestra la matriz de adyacencia por pantalla
void mostrarMatrizAdyacencia(const vector<vector<int>>& matriz) {
    cout << "Matriz de Adyacencia:\n";
    for (const auto& fila : matriz) {
        for (int valor : fila) {
            cout << valor << " ";
        }
        cout << endl;
    }
}

// Calcula y muestra el grado de cada vértice
void mostrarGradosVertices(const vector<vector<int>>& matriz) {
    cout << "\nGrado de cada vértice:\n";
    for (int i = 0; i < matriz.size(); ++i) {
        int grado = 0;
        for (int j = 0; j < matriz[i].size(); ++j) {
            grado += matriz[i][j];
        }
        cout << "Vértice " << i << ": " << grado << endl;
    }
}

// Verifica si el grafo es completo (todos los vértices conectados entre sí)
bool esGrafoCompleto(const vector<vector<int>>& matriz) {
    int n = matriz.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;  // Se permite un bucle como máximo, pero no se requiere
            if (matriz[i][j] == 0) return false;
        }
    }
    return true;
}

// Verifica si el grafo es conexo usando BFS (recorrido en anchura)
bool esGrafoConexo(const vector<vector<int>>& matriz) {
    int n = matriz.size();
    vector<bool> visitado(n, false);
    queue<int> cola;

    cola.push(0);
    visitado[0] = true;

    while (!cola.empty()) {
        int actual = cola.front();
        cola.pop();
        for (int i = 0; i < n; ++i) {
            if (matriz[actual][i] > 0 && !visitado[i]) {
                visitado[i] = true;
                cola.push(i);
            }
        }
    }

    for (bool v : visitado) {
        if (!v) return false;
    }

    return true;
}
