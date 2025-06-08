problema 8:
#include <iostream>
#include <vector>
using namespace std;

void dfs(int u, vector<vector<int>>& grafo, vector<bool>& visitado) {
    visitado[u] = true;
    for (int v : grafo[u]) {
        if (!visitado[v])
            dfs(v, grafo, visitado);
    }
}

bool esConexo(vector<vector<int>>& grafo) {
    int V = grafo.size();
    vector<bool> visitado(V, false);

    int nodo_inicio = -1;
    for (int i = 0; i < V; ++i) {
        if (!grafo[i].empty()) {
            nodo_inicio = i;
            break;
        }
    }

    if (nodo_inicio == -1) return true;

    dfs(nodo_inicio, grafo, visitado);

    for (int i = 0; i < V; ++i) {
        if (!visitado[i] && !grafo[i].empty())
            return false;
    }

    return true;
}

string tipoEuler(vector<vector<int>>& grafo) {
    if (!esConexo(grafo)) return "No es euleriano (no es conexo)";

    int impares = 0;
    for (auto& vecinos : grafo) {
        if (vecinos.size() % 2 != 0)
            ++impares;
    }

    if (impares == 0) return "Tiene ciclo euleriano";
    if (impares == 2) return "Tiene camino euleriano";
    return "No es euleriano";
}

int main() {
    int V, E;
    cout << "Ingrese número de vértices y aristas: ";
    cin >> V >> E;

    vector<vector<int>> grafo(V);

    cout << "Ingrese las aristas (u v):\n";
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }

    string resultado = tipoEuler(grafo);
    cout << resultado << endl;

    return 0;
}
