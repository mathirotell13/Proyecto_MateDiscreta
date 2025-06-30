#include <iostream>
#include <vector>
#include <utility> // Para std::pair
#include <queue>   // Para la búsqueda en anchura (BFS)

// Declaración de la función auxiliar para la verificación de conexión
void busquedaEnAnchura(int verticeInicial, int V, const std::vector<std::vector<int>>& matrizAdyacencia, std::vector<bool>& visitado);

/**
 * @brief Analiza un grafo no dirigido a partir de su número de vértices y su lista de aristas.
 * * Esta función realiza las siguientes tareas:
 * 1. Construye y muestra la matriz de adyacencia del grafo.
 * 2. Calcula y muestra el grado de cada vértice a partir de la matriz.
 * (Considera que un bucle añade 2 al grado del vértice).
 * 3. Determina si el grafo es completo.
 * 4. Determina si el grafo es conexo.
 *
 * @param V El número total de vértices en el grafo. Los vértices se asumen numerados de 0 a V-1.
 * @param aristas Un vector de pares que representa las aristas del grafo. Por ejemplo, {0, 1} es una arista entre el vértice 0 y el 1.
 * Un bucle en el vértice `i` se representa como {i, i}.
 */
void analizarGrafo(int V, const std::vector<std::pair<int, int>>& aristas) {
    if (V <= 0) {
        std::cout << "El grafo no tiene vértices." << std::endl;
        return;
    }

    // --- PASO 1: Construir la matriz de adyacencia ---
    // Se inicializa una matriz de V x V con todos los valores en 0.
    std::vector<std::vector<int>> matrizAdyacencia(V, std::vector<int>(V, 0));

    for (const auto& arista : aristas) {
        int u = arista.first;
        int v = arista.second;
        
        // Se valida que los vértices de la arista estén dentro del rango permitido
        if (u >= 0 && u < V && v >= 0 && v < V) {
            matrizAdyacencia[u][v] = 1;
            // Como el grafo es no dirigido, la matriz es simétrica.
            if (u != v) {
                matrizAdyacencia[v][u] = 1;
            }
        }
    }

    // --- PASO 2: Mostrar la matriz de adyacencia ---
    std::cout << "1. Matriz de Adyacencia:" << std::endl;
    std::cout << "   ";
    for (int i = 0; i < V; ++i) {
        std::cout << "[" << i << "] ";
    }
    std::cout << std::endl;
    std::cout << "----";
    for (int i = 0; i < V; ++i) {
        std::cout << "---";
    }
    std::cout << std::endl;

    for (int i = 0; i < V; ++i) {
        std::cout << "[" << i << "] ";
        for (int j = 0; j < V; ++j) {
            std::cout << " " << matrizAdyacencia[i][j] << "  ";
        }
        std::cout << std::endl;
    }

    // --- PASO 3: Calcular y mostrar el grado de cada vértice ---
    std::cout << "\n2. Grado de cada vértice:" << std::endl;
    for (int i = 0; i < V; ++i) {
        int grado = 0;
        for (int j = 0; j < V; ++j) {
            grado += matrizAdyacencia[i][j];
        }
        // Un bucle (i,i) contribuye con 1 al sumar la fila, pero añade 2 al grado.
        // Por lo tanto, si hay un bucle en (i,i), sumamos 1 extra.
        if (matrizAdyacencia[i][i] == 1) {
            grado++;
        }
        std::cout << "   - Grado del vértice " << i << ": " << grado << std::endl;
    }

    // --- PASO 4: Determinar si el grafo es completo ---
    std::cout << "\n3. ¿El grafo es completo?" << std::endl;
    bool esCompleto = true;
    if (V > 1) {
        for (int i = 0; i < V; ++i) {
            for (int j = i + 1; j < V; ++j) {
                // Si falta una arista entre cualquier par de vértices distintos, no es completo.
                if (matrizAdyacencia[i][j] == 0) {
                    esCompleto = false;
                    break;
                }
            }
            if (!esCompleto) {
                break;
            }
        }
    }
    std::cout << "   " << (esCompleto ? "Sí, el grafo es completo." : "No, el grafo no es completo.") << std::endl;

    // --- PASO 5: Determinar si el grafo es conexo ---
    std::cout << "\n4. ¿El grafo es conexo?" << std::endl;
    bool esConexo = false;
    if (V == 0) {
        esConexo = true; // Un grafo vacío se considera trivialmente conexo.
    } else {
        std::vector<bool> visitado(V, false);
        // Usamos una búsqueda en anchura (BFS) para ver cuántos nodos podemos alcanzar.
        busquedaEnAnchura(0, V, matrizAdyacencia, visitado);
        
        // Verificamos si todos los vértices fueron visitados.
        esConexo = true;
        for (int i = 0; i < V; ++i) {
            if (!visitado[i]) {
                esConexo = false;
                break;
            }
        }
    }
    std::cout << "   " << (esConexo ? "Sí, el grafo es conexo." : "No, el grafo no es conexo.") << std::endl;
}

/**
 * @brief Realiza una Búsqueda en Anchura (BFS) para encontrar todos los vértices alcanzables.
 *
 * @param verticeInicial El vértice desde donde comienza la búsqueda.
 * @param V El número total de vértices.
 * @param matrizAdyacencia La matriz de adyacencia del grafo.
 * @param visitado Un vector para marcar los vértices que ya han sido visitados.
 */
void busquedaEnAnchura(int verticeInicial, int V, const std::vector<std::vector<int>>& matrizAdyacencia, std::vector<bool>& visitado) {
    std::queue<int> cola;

    // Iniciar el recorrido desde el verticeInicial
    cola.push(verticeInicial);
    visitado[verticeInicial] = true;

    while (!cola.empty()) {
        int u = cola.front();
        cola.pop();

        // Recorrer todos los vértices para encontrar los adyacentes a 'u'
        for (int v = 0; v < V; ++v) {
            // Si 'v' es adyacente a 'u' y no ha sido visitado
            if (matrizAdyacencia[u][v] == 1 && !visitado[v]) {
                visitado[v] = true;
                cola.push(v);
            }
        }
    }
}
