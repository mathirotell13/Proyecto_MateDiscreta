# 📋 GUÍA DE DESARROLLO PARA EL EQUIPO - MATEMÁTICA DISCRETA

## 🚀 Estado Actual del Proyecto

✅ **COMPLETADO:**
- Sistema de navegación principal (`main.cpp`) - **FUNCIONAL**
- Estructura de carpetas organizadas por unidades
- README.md con instrucciones de compilación
- Archivos base creados para todas las semanas
- Configuración para repositorio GitHub

## 👥 Distribución de Trabajo para 4 Integrantes

### 📝 **ASIGNACIÓN SUGERIDA:**

#### **👤 INTEGRANTE 1 - Fundamentos de Inducción**
**Responsabilidad:** Semanas 1-2 (Inducción Básica)
- `semana1_induccion_matematica.cpp` - Principio de Inducción Matemática
- `semana2_induccion_completa_recurrencia.cpp` - Inducción Completa y Recurrencias

#### **👤 INTEGRANTE 2 - Algoritmos Recursivos**
**Responsabilidad:** Semanas 3-4 (Funciones y Algoritmos)
- `semana3_funciones_generadoras.cpp` - Funciones Generadoras
- `semana4_divide_venceras.cpp` - Algoritmos Divide y Vencerás

#### **👤 INTEGRANTE 3 - Teoría de Grafos**
**Responsabilidad:** Semanas 6-9 (Toda la Unidad II)
- `semana6_grafos_construccion.cpp` - Representación y Construcción de Grafos
- `semana7_arboles.cpp` - Árboles
- `semana8_ruta_mas_corta.cpp` - Algoritmos de Ruta Más Corta
- `semana9_coloracion_grafos.cpp` - Coloración de Grafos

#### **👤 INTEGRANTE 4 - Técnicas de Conteo**
**Responsabilidad:** Semanas 11-14 (Toda la Unidad III)
- `semana11_bases_conteo.cpp` - Bases del Conteo
- `semana12_permutaciones.cpp` - Permutaciones y Combinaciones
- `semana13_coeficientes_binomiales.cpp` - Coeficientes Binomiales
- `semana14_inclusion_exclusion.cpp` - Principio de Inclusión-Exclusión

### ⚖️ **DISTRIBUCIÓN BALANCEADA:**
- **Integrante 1**: 2 semanas (Inducción fundamental)
- **Integrante 2**: 2 semanas (Algoritmos recursivos)
- **Integrante 3**: 4 semanas (Grafos - contenido extenso)
- **Integrante 4**: 4 semanas (Conteo - contenido extenso)

## 📋 Estructura Requerida para Cada Archivo

### **CADA ARCHIVO DEBE INCLUIR:**

```cpp
// ========================================
// SEMANA X: TÍTULO DEL TEMA
// Archivo: semanaN_nombre_tema.cpp
// Descripción: Breve descripción del contenido
// Integrante: [Nombre del responsable]
// ========================================

#include <iostream>
// Otros includes necesarios según el tema

using namespace std;

// TODO: Implementar clases y estructuras necesarias
class ClasePrincipal {
    // Métodos y atributos según el tema
};

// FUNCIÓN OBLIGATORIA: Será llamada desde main.cpp
void ejecutar_semanaN() {
    cout << "\n=== SEMANA N: TÍTULO DEL TEMA ===" << endl;

    // TODO: Implementar menú interactivo
    // TODO: Mostrar ejemplos del algoritmo/concepto
    // TODO: Casos de prueba
    // TODO: Análisis de complejidad

    cout << "Implementación completada por: [Nombre]" << endl;
}

// OPCIONAL: Para pruebas individuales
/*
int main() {
    ejecutar_semanaN();
    return 0;
}
*/
```

## 🎯 Objetivos por Semana

### **🔢 UNIDAD I: Inducción y Recursión**

#### **Semana 1 - Principio de Inducción Matemática**
**Conceptos a implementar:**
- Verificación de fórmulas matemáticas usando inducción
- Ejemplo: Suma de primeros n números naturales
- Ejemplo: Suma de primeros n números impares
- Demostración paso a paso del proceso inductivo

#### **Semana 2 - Inducción Completa y Recurrencias**
**Conceptos a implementar:**
- Diferencia entre inducción simple y completa
- Resolución de ecuaciones de recurrencia
- Aplicación a codificación y corrección de errores
- Análisis de secuencias recursivas

#### **Semana 3 - Funciones Generadoras**
**Conceptos a implementar:**
- Operaciones con series formales (suma, producto)
- Invertibilidad y derivación de funciones generadoras
- Aplicaciones en análisis combinatorio
- Generación de secuencias conocidas

#### **Semana 4 - Algoritmos Divide y Vencerás**
**Conceptos a implementar:**
- Implementación de Merge Sort y Quick Sort
- Análisis de complejidad temporal
- Aplicación del Teorema Maestro
- Comparación de diferentes enfoques recursivos

### **🔗 UNIDAD II: Teoría de Grafos**

#### **Semana 6 - Representación y Construcción de Grafos**
**Conceptos a implementar:**
- Matriz de adyacencia vs Lista de adyacencia
- Algoritmos DFS y BFS
- Detección de circuitos Eulerianos
- Verificación de ciclos Hamiltonianos

#### **Semana 7 - Árboles**
**Conceptos a implementar:**
- Árboles binarios de búsqueda (BST)
- Árboles balanceados (AVL)
- Algoritmos de árbol generador mínimo (Kruskal, Prim)
- Aplicaciones prácticas

#### **Semana 8 - Algoritmos de Ruta Más Corta**
**Conceptos a implementar:**
- Algoritmo de Dijkstra
- Algoritmo de Floyd-Warshall
- Aplicaciones en análisis de redes
- Comparación de eficiencia

#### **Semana 9 - Coloración de Grafos**
**Conceptos a implementar:**
- Algoritmos de coloración de vértices y aristas
- Cálculo del número cromático
- Polinomio cromático
- Aplicaciones prácticas (scheduling, mapas)

### **🧮 UNIDAD III: Técnicas de Conteo**

#### **Semana 11 - Bases del Conteo**
**Conceptos a implementar:**
- Principios fundamentales de conteo
- Principio del Palomar (Pigeonhole)
- Diagramas de árbol
- Problemas básicos de conteo

#### **Semana 12 - Permutaciones y Combinaciones**
**Conceptos a implementar:**
- Algoritmos de generación de permutaciones
- Cálculo eficiente de combinaciones
- Implementaciones con y sin repetición
- Análisis de complejidad temporal

#### **Semana 13 - Coeficientes Binomiales**
**Conceptos a implementar:**
- Construcción del Triángulo de Pascal
- Identidades binomiales importantes
- Optimización de cálculos
- Aplicaciones en probabilidad

#### **Semana 14 - Principio de Inclusión-Exclusión**
**Conceptos a implementar:**
- Aplicación del teorema fundamental
- Problemas complejos de conteo
- Casos prácticos y aplicaciones
- Optimización de soluciones

## 🔧 Instrucciones de Desarrollo

### **📂 Configuración del Repositorio GitHub**

1. **Clonar el repositorio:**
```cmd
git clone [URL_DEL_REPOSITORIO]
cd Proyecto_MateDiscreta
```

2. **Crear rama para cada integrante:**
```cmd
git checkout -b integrante1-induccion
git checkout -b integrante2-algoritmos
git checkout -b integrante3-grafos
git checkout -b integrante4-conteo
```

### **🛠️ Flujo de Trabajo Individual**

1. **Trabajar en su rama asignada:**
```cmd
git checkout [su-rama]
git pull origin main  # Actualizar con cambios principales
```

2. **Compilar y probar su trabajo:**
```cmd
# Crear directorio build (solo la primera vez)
mkdir build

# Compilar archivo individual para pruebas
g++ -std=c++17 -Wall -O2 -o build/semana1.exe Unidad_1/semana1_induccion_matematica.cpp
build/semana1.exe

# Compilar programa principal para verificar integración
g++ -std=c++17 -Wall -O2 -o build/mate_discreta.exe main.cpp
build/mate_discreta.exe
```

3. **Confirmar cambios:**
```cmd
git add .
git commit -m "Implementación Semana X: [Descripción]"
git push origin [su-rama]
```

### **🔄 Integración y Merge**

1. **Crear Pull Request en GitHub**
2. **Revisión por otros integrantes**
3. **Merge a la rama main**
4. **Actualizar ramas locales:**
```cmd
git checkout main
git pull origin main
```

### **⚠️ IMPORTANTE - Integración con main.cpp**

Una vez que **TODOS** los integrantes hayan implementado sus funciones, **UNA SOLA PERSONA** debe:

**En `main.cpp`, cambiar las líneas de funciones placeholder:**

```cpp
// ANTES (placeholder functions):
void ejecutar_semana1() { cout << "\n[PLACEHOLDER] Semana 1: Inducción Matemática - Por implementar\n"; }

// DESPUÉS (extern declarations):
extern void ejecutar_semana1();   // Implementada por Integrante 1
extern void ejecutar_semana2();   // Implementada por Integrante 1
extern void ejecutar_semana3();   // Implementada por Integrante 2
// ... etc para todas las semanas
```

**Compilación final del proyecto completo:**
```cmd
g++ -std=c++17 -Wall -O2 -o build/mate_discreta_completo.exe main.cpp Unidad_1/*.cpp Unidad_2/*.cpp Unidad_3/*.cpp
```

## ✅ Checklist de Entrega

### **📋 Para cada integrante - Antes de hacer Pull Request:**
- [ ] Función `void ejecutar_semanaN()` implementada y funcional
- [ ] Archivo compila sin errores individualmente
- [ ] Menú interactivo incluido en la función
- [ ] Al menos 3 ejemplos prácticos implementados
- [ ] Comentarios explicativos en el código
- [ ] Análisis de complejidad incluido
- [ ] Casos de prueba verificados

### **📋 Para el equipo - Entrega Final:**
- [ ] Todas las semanas implementadas
- [ ] Programa principal integra todas las funciones (extern declarations)
- [ ] Compilación completa sin errores
- [ ] README.md actualizado con nombres de integrantes
- [ ] Repositorio GitHub organizado con commits claros
- [ ] Documentación completa en cada archivo

## 🚨 Resolución de Problemas Comunes

### **Error de compilación - "undefined reference"**
- **Causa:** Función `ejecutar_semanaN()` no implementada
- **Solución:** Implementar la función en el archivo correspondiente

### **Error de compilación - "multiple definition"**
- **Causa:** Función definida en múltiples archivos
- **Solución:** Solo un archivo debe tener la implementación

### **Programa principal no ejecuta semana específica**
- **Causa:** Función placeholder aún activa en main.cpp
- **Solución:** Cambiar a declaración extern

### **Git merge conflicts**
- **Causa:** Múltiples personas editando main.cpp
- **Solución:** Solo una persona hace la integración final

## 📞 Coordinación del Equipo

### **📅 Cronograma Sugerido:**
- **Semana 1-2:** Cada integrante implementa sus semanas asignadas
- **Semana 3:** Revisión cruzada y testing individual
- **Semana 4:** Integración final y documentación

### **💬 Comunicación:**
- Crear grupo para coordinación
- Reportar avances semanalmente
- Compartir problemas técnicos
- Revisión de código entre integrantes

### **🎯 Responsabilidades Extra:**
- **Integrante 1:** Coordinación de integración final
- **Integrante 2:** Revisión y testing de compilación
- **Integrante 3:** Documentación y README
- **Integrante 4:** Gestión del repositorio GitHub

---
**📚 Proyecto de Matemática Discreta - Implementaciones en C++**
**🎓 Trabajo en equipo - 4 integrantes**
**📅 Año académico 2025**
