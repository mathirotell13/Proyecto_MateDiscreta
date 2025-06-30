#include <iostream>
#include <vector>
#include <utility> // Para std::pair
#include <queue>   // Para la búsqueda en anchura (BFS)

// Declaración de la función auxiliar para buscar un camino
bool hayCaminoEntre(int inicio, int fin, int V, const std::vector<std::vector<int>>& listaAdyacencia, int verticeProhibido);


/**
 * @brief Determina si existe un ciclo simple que pasa por un vértice específico.
 *
 * Un ciclo simple que involucra a `verticeInicio` existe si hay un camino entre dos
 * de sus vecinos que no utiliza al propio `verticeInicio`.
 * El grafo de entrada debe ser simple, conexo y no dirigido.
 *
 * @param V El número total de vértices en el grafo. Asumidos de 0 a V-1.
 * @param aristas La lista de aristas del grafo.
 * @param verticeInicio El vértice ($v \in V$) para el cual se quiere verificar la existencia de un ciclo.
 */
void determinarCicloSimpleEnVertice(int V, const std::vector<std::pair<int, int>>& aristas, int verticeInicio) {
    if (verticeInicio < 0 || verticeInicio >= V) {
        std::cout << "El vértice de inicio no es válido." << std::endl;
        return;
    }

    // --- PASO 1: Construir una lista de adyacencia para facilitar la búsqueda de vecinos ---
    std::vector<std::vector<int>> listaAdyacencia(V);
    for (const auto& arista : aristas) {
        listaAdyacencia[arista.first].push_back(arista.second);
        listaAdyacencia[arista.second].push_back(arista.first);
    }

    // --- PASO 2: Obtener los vecinos directos del vértice de inicio ---
    const std::vector<int>& vecinos = listaAdyacencia[verticeInicio];

    // Para formar un ciclo, un vértice necesita al menos dos vecinos.
    if (vecinos.size() < 2) {
        std::cout << "No se puede formar un ciclo: el vértice " << verticeInicio << " tiene menos de 2 vecinos." << std::endl;
        return;
    }

    // --- PASO 3: Verificar si hay un camino entre cualquier par de vecinos ---
    // Este camino no debe pasar por el `verticeInicio`.
    bool cicloEncontrado = false;
    for (size_t i = 0; i < vecinos.size(); ++i) {
        for (size_t j = i + 1; j < vecinos.size(); ++j) {
            int vecino1 = vecinos[i];
            int vecino2 = vecinos[j];

            // Comprobar si `vecino1` puede llegar a `vecino2` sin pasar por `verticeInicio`.
            if (hayCaminoEntre(vecino1, vecino2, V, listaAdyacencia, verticeInicio)) {
                cicloEncontrado = true;
                // Si encontramos un camino, ya podemos confirmar el ciclo.
                // El ciclo sería: verticeInicio -> vecino1 -> ... -> vecino2 -> verticeInicio
                break;
            }
        }
        if (cicloEncontrado) {
            break;
        }
    }

    // --- PASO 4: Mostrar el resultado ---
    if (cicloEncontrado) {
        std::cout << "Se encontró un ciclo simple que inicia y termina en el vértice " << verticeInicio << "." << std::endl;
    } else {
        std::cout << "No se encontró un ciclo simple que inicie y termine en el vértice " << verticeInicio << "." << std::endl;
    }
}


/**
 * @brief Busca un camino entre dos vértices usando BFS, evitando un vértice intermedio.
 *
 * @param inicio Vértice de partida de la búsqueda.
 * @param fin Vértice objetivo de la búsqueda.
 * @param V Número total de vértices del grafo.
 * @param listaAdyacencia La lista de adyacencia del grafo.
 * @param verticeProhibido El vértice que no puede ser visitado durante la búsqueda.
 * @return true si existe un camino, false en caso contrario.
 */
bool hayCaminoEntre(int inicio, int fin, int V, const std::vector<std::vector<int>>& listaAdyacencia, int verticeProhibido) {
    if (inicio == fin) return true;

    std::vector<bool> visitado(V, false);
    std::queue<int> cola;

    cola.push(inicio);
    visitado[inicio] = true;
    
    // Marcamos el vértice prohibido como ya visitado para que el algoritmo lo ignore.
    visitado[verticeProhibido] = true;

    while (!cola.empty()) {
        int u = cola.front();
        cola.pop();

        for (int vecino : listaAdyacencia[u]) {
            if (vecino == fin) {
                return true; // Camino encontrado
            }
            if (!visitado[vecino]) {
                visitado[vecino] = true;
                cola.push(vecino);
            }
        }
    }

    return false; // No se encontró camino
}
