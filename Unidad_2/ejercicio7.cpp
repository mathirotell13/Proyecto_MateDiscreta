#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

const int INF = numeric_limits<int>::max();

typedef pair<int, int> PII; // (distancia, nodo)

void dijkstra(int origen, int destino, vector<vector<PII>>& grafo, vector<int>& distancias, vector<int>& anterior) {
    int V = grafo.size();
    distancias.assign(V, INF);
    anterior.assign(V, -1);
    priority_queue<PII, vector<PII>, greater<PII>> pq;

    distancias[origen] = 0;
    pq.push({0, origen});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > distancias[u]) continue;

        for (auto [peso, v] : grafo[u]) {
            if (distancias[u] + peso < distancias[v]) {
                distancias[v] = distancias[u] + peso;
                anterior[v] = u;
                pq.push({distancias[v], v});
            }
        }
    }
}

void mostrarCamino(int v, const vector<int>& anterior) {
    if (v == -1) return;
    mostrarCamino(anterior[v], anterior);
    cout << v << " ";
}

int main() {
    int V, E;
    cout << "Ingrese número de vértices y aristas: ";
    cin >> V >> E;

    vector<vector<PII>> grafo(V);

    cout << "Ingrese las aristas (u v peso):\n";
    for (int i = 0; i < E; ++i) {
        int u, v, peso;
        cin >> u >> v >> peso;
        grafo[u].push_back({peso, v});
        grafo[v].push_back({peso, u}); // No dirigido
    }

    int origen, destino;
    cout << "Ingrese vértices origen y destino: ";
    cin >> origen >> destino;

    vector<int> distancias, anterior;
    dijkstra(origen, destino, grafo, distancias, anterior);

    cout << "Distancia mínima: " << distancias[destino] << endl;
    cout << "Camino: ";
    mostrarCamino(destino, anterior);
    cout << endl;

    return 0;
}
