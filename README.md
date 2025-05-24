# 📚 Matemática Discreta - Implementaciones en C++

<p align="center">
  <img src="https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++">
  <img src="https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge" alt="License">
  <img src="https://img.shields.io/badge/Team-4_Integrantes-blue?style=for-the-badge" alt="Team">
  <img src="https://img.shields.io/badge/Status-En_Desarrollo-orange?style=for-the-badge" alt="Status">
</p>

## 📖 Descripción

Este repositorio contiene implementaciones en C++ de algoritmos fundamentales de **Matemática Discreta**, desarrollado como proyecto académico por un equipo de 4 integrantes. El proyecto abarca desde conceptos básicos de inducción matemática hasta algoritmos avanzados de grafos y técnicas de conteo, organizados por unidades temáticas del curso.

## 👥 Equipo de Desarrollo

- **Integrante 1:** [Nombre] - Responsable de Fundamentos de Inducción (Semanas 1-2)
- **Integrante 2:** [Nombre] - Responsable de Algoritmos Recursivos (Semanas 3-4)
- **Integrante 3:** [Nombre] - Responsable de Teoría de Grafos (Semanas 6-9)
- **Integrante 4:** [Nombre] - Responsable de Técnicas de Conteo (Semanas 11-14)

## 🎯 Objetivos del Proyecto

- Implementar algoritmos clásicos de matemática discreta en C++
- Proporcionar ejemplos prácticos y casos de uso reales
- Desarrollar un sistema interactivo de navegación por temas
- Crear documentación comprensiva para cada algoritmo
- Facilitar el aprendizaje mediante código bien estructurado
- Establecer una base sólida para el análisis de algoritmos

## 📁 Estructura del Proyecto

```
Proyecto_MateDiscreta/
├── README.md                       # Documentación principal del proyecto
├── GUIA_DESARROLLO.md             # Guía detallada para el equipo
├── .gitignore                     # Configuración para Git
├── main.cpp                       # Sistema de navegación principal
├── Unidad_1/                      # Semanas 1-4: Inducción y Recursión
│   ├── semana1_induccion_matematica.cpp
│   ├── semana2_induccion_completa_recurrencia.cpp
│   ├── semana3_funciones_generadoras.cpp
│   └── semana4_divide_venceras.cpp
├── Unidad_2/                      # Semanas 6-9: Teoría de Grafos
│   ├── semana6_grafos_construccion.cpp
│   ├── semana7_arboles.cpp
│   ├── semana8_ruta_mas_corta.cpp
│   └── semana9_coloracion_grafos.cpp
└── Unidad_3/                      # Semanas 11-14: Técnicas de Conteo
    ├── semana11_bases_conteo.cpp
    ├── semana12_permutaciones.cpp
    ├── semana13_coeficientes_binomiales.cpp
    └── semana14_inclusion_exclusion.cpp

Notas:
• La carpeta build/ se crea automáticamente al compilar
• Los archivos .exe no se suben al repositorio (ver .gitignore)
```

## 📚 Contenido por Unidades y Semanas

### 🔢 Unidad I: Inducción y Recursión Matemática (Semanas 1-4)

#### **Semana 1: Principio de Inducción Matemática** (`semana1_induccion_matematica.cpp`)
- Definición formal, base, hipótesis inductiva y paso inductivo
- Ejemplos de demostración por inducción
- Implementaciones prácticas del principio

#### **Semana 2: Inducción Completa y Recurrencias** (`semana2_induccion_completa_recurrencia.cpp`)
- Inducción completa (fuerte) vs inducción estándar
- Ecuaciones de recurrencia lineales homogéneas y no homogéneas
- Aplicaciones a codificación y corrección de errores

#### **Semana 3: Funciones Generadoras** (`semana3_funciones_generadoras.cpp`)
- Definición y operaciones (suma y producto de series formales)
- Invertibilidad y derivación
- Aplicaciones en análisis combinatorio

#### **Semana 4: Algoritmos Divide y Vencerás** (`semana4_divide_venceras.cpp`)
- Análisis de complejidad temporal
- Implementación de algoritmos recursivos
- Teorema maestro y casos de aplicación

### 🔗 Unidad II: Teoría de Grafos y Aplicaciones (Semanas 6-9)

#### **Semana 6: Representación y Construcción de Grafos** (`semana6_grafos_construccion.cpp`)
- Matrices de adyacencia y listas de adyacencia
- Circuitos Eulerianos y ciclos Hamiltonianos
- Algoritmos básicos de grafos

#### **Semana 7: Árboles** (`semana7_arboles.cpp`)
- Definición, ejemplos y caracterización
- Tipos: con raíz, de búsqueda, generadores
- Árbol generador mínimo y aplicaciones

#### **Semana 8: Algoritmo de la Ruta Más Corta** (`semana8_ruta_mas_corta.cpp`)
- Algoritmo de Dijkstra
- Algoritmo de Floyd-Warshall
- Aplicaciones en análisis de redes

#### **Semana 9: Coloración de Grafos** (`semana9_coloracion_grafos.cpp`)
- Número cromático, coloración de vértices y aristas
- Polinomio cromático
- Aplicaciones prácticas

### 🧮 Unidad III: Técnicas de Conteo (Semanas 11-14)

#### **Semana 11: Bases del Conteo** (`semana11_bases_conteo.cpp`)
- Principios fundamentales de conteo
- Principio de Pigeonhole (Palomar)
- Diagramas de árbol

#### **Semana 12: Permutaciones y Combinaciones** (`semana12_permutaciones.cpp`)
- Permutaciones, variaciones y combinaciones
- Implementaciones eficientes
- Aplicaciones al análisis de algoritmos

#### **Semana 13: Coeficientes Binomiales** (`semana13_coeficientes_binomiales.cpp`)
- Triángulo de Pascal
- Identidades binomiales
- Aplicaciones en bases de datos

#### **Semana 14: Principio de Inclusión-Exclusión** (`semana14_inclusion_exclusion.cpp`)
- Teorema fundamental
- Aplicaciones combinatorias
- Problemas de conteo avanzados

## 🚀 Cómo Compilar y Ejecutar

### Prerrequisitos
- Compilador C++ compatible con C++17 (g++, clang++, o MSVC)
- Git para manejo del repositorio
- Sistema operativo: Windows, Linux, o macOS

### 🔧 Configuración Inicial

#### 1. Clonar el Repositorio
```bash
git clone https://github.com/[usuario]/Proyecto_MateDiscreta.git
cd Proyecto_MateDiscreta
```

#### 2. Crear Directorio de Compilación
```bash
# Windows (PowerShell/CMD)
mkdir build

# Linux/macOS
mkdir -p build
```

### 📦 Compilación

#### Compilar Programa Principal (Navegación)
```bash
# Windows
g++ -std=c++17 -Wall -O2 -o build/mate_discreta.exe main.cpp

# Linux/macOS
g++ -std=c++17 -Wall -O2 -o build/mate_discreta main.cpp
```

#### Compilar Archivo Individual (Para Testing)
```bash
# Ejemplo: Compilar semana 1
g++ -std=c++17 -Wall -O2 -o build/semana1.exe Unidad_1/semana1_induccion_matematica.cpp

# Ejecutar
./build/semana1.exe
```

#### Compilación Completa del Proyecto
```bash
# Una vez implementadas todas las semanas
g++ -std=c++17 -Wall -O2 -o build/mate_discreta_completo.exe main.cpp Unidad_1/*.cpp Unidad_2/*.cpp Unidad_3/*.cpp
```

### ▶️ Ejecución

```bash
# Ejecutar programa principal
./build/mate_discreta.exe

# El programa incluye:
# • Sistema de menús interactivo
# • Navegación por unidades (1, 2, 3)
# • Selección de semanas específicas
# • Información del proyecto
```

## 🛠️ Desarrollo y Contribución

### Para Integrantes del Equipo

1. **Revisar la Guía de Desarrollo:**
   - Leer completamente `GUIA_DESARROLLO.md`
   - Identificar su asignación de semanas
   - Entender la estructura requerida

2. **Configurar Entorno de Trabajo:**
   ```bash
   git checkout -b [su-rama-asignada]
   git pull origin main
   ```

3. **Implementar y Probar:**
   - Desarrollar las semanas asignadas
   - Probar compilación individual
   - Verificar integración con programa principal

4. **Enviar Cambios:**
   ```bash
   git add .
   git commit -m "Implementación Semana X: [Descripción]"
   git push origin [su-rama]
   ```

### Para Colaboradores Externos

1. Fork del repositorio
2. Crear rama para nueva feature: `git checkout -b feature/nueva-funcionalidad`
3. Commit cambios: `git commit -m 'Agregar nueva funcionalidad'`
4. Push a la rama: `git push origin feature/nueva-funcionalidad`
5. Crear Pull Request

## 📋 Estado del Proyecto

### ✅ Completado
- [x] Sistema de navegación principal (`main.cpp`)
- [x] Estructura de carpetas organizadas
- [x] Configuración de repositorio GitHub
- [x] Guía de desarrollo para el equipo
- [x] Documentación base del proyecto

### 🔄 En Desarrollo
- [ ] **Unidad I:** Inducción y Recursión (Integrante 1 y 2)
  - [ ] Semana 1: Principio de Inducción Matemática
  - [ ] Semana 2: Inducción Completa y Recurrencias
  - [ ] Semana 3: Funciones Generadoras
  - [ ] Semana 4: Algoritmos Divide y Vencerás

- [ ] **Unidad II:** Teoría de Grafos (Integrante 3)
  - [ ] Semana 6: Representación y Construcción de Grafos
  - [ ] Semana 7: Árboles
  - [ ] Semana 8: Algoritmos de Ruta Más Corta
  - [ ] Semana 9: Coloración de Grafos

- [ ] **Unidad III:** Técnicas de Conteo (Integrante 4)
  - [ ] Semana 11: Bases del Conteo
  - [ ] Semana 12: Permutaciones y Combinaciones
  - [ ] Semana 13: Coeficientes Binomiales
  - [ ] Semana 14: Principio de Inclusión-Exclusión

### 📋 Pendiente
- [ ] Integración final de todas las unidades
- [ ] Testing completo del sistema
- [ ] Documentación final
- [ ] Optimización de rendimiento

## 💡 Uso y Características

### 🎮 Sistema de Navegación Interactivo
El programa principal (`main.cpp`) incluye:
- **Menú principal** con selección de unidades (1, 2, 3)
- **Submenús por unidad** para seleccionar semanas específicas
- **Validación de entrada** y manejo de errores
- **Información del proyecto** y estructura del curso
- **Navegación intuitiva** con opciones de regreso y salida

## 💡 Características del Sistema

### 🎮 Sistema de Navegación Interactivo
- **Menú principal** con selección de unidades (1, 2, 3)
- **Submenús por unidad** para acceder a semanas específicas
- **Validación de entrada** y manejo robusto de errores
- **Información del proyecto** integrada
- **Navegación intuitiva** con opciones de regreso y salida

### 📝 Estructura Modular
- **Desarrollo independiente** por integrante
- **Compilación modular** - cada semana funciona por separado
- **Integración sencilla** al programa principal
- **Testing individual** antes de la integración final
- **Documentación específica** para cada algoritmo

### 🔧 Tecnologías y Herramientas
- **Lenguaje:** C++17
- **Paradigmas:** Programación orientada a objetos, algorítmica
- **Control de versiones:** Git y GitHub
- **Compiladores compatibles:** g++, clang++, MSVC
- **Multiplataforma:** Windows, Linux, macOS

## 📚 Contenido Académico

### 🔢 Unidad I: Inducción y Recursión Matemática
**Fundamentos teóricos y aplicaciones prácticas de la inducción matemática**

- **Principio de Inducción:** Demostración formal de proposiciones matemáticas
- **Inducción Completa:** Casos complejos y recurrencias avanzadas
- **Funciones Generadoras:** Series formales y análisis combinatorio
- **Divide y Vencerás:** Algoritmos recursivos y análisis de complejidad

### 🔗 Unidad II: Teoría de Grafos y Aplicaciones
**Estructuras de datos y algoritmos fundamentales para grafos**

- **Representación de Grafos:** Matrices y listas de adyacencia, comparación de eficiencia
- **Árboles:** BST, AVL, árboles generadores mínimos
- **Caminos Óptimos:** Dijkstra, Floyd-Warshall, aplicaciones en redes
- **Coloración:** Algoritmos de coloración, número cromático, aplicaciones prácticas

### 🧮 Unidad III: Técnicas de Conteo
**Métodos combinatorios y análisis de algoritmos**

- **Fundamentos del Conteo:** Principios básicos, Pigeonhole, diagramas de árbol
- **Permutaciones y Combinaciones:** Algoritmos de generación eficientes
- **Coeficientes Binomiales:** Triángulo de Pascal, identidades importantes
- **Inclusión-Exclusión:** Casos complejos, problemas de conteo avanzados

## 🤝 Colaboración y Trabajo en Equipo

### 📋 Metodología de Trabajo
- **Distribución balanceada** de responsabilidades entre 4 integrantes
- **Desarrollo paralelo** con control de versiones Git
- **Revisión cruzada** de código entre integrantes
- **Integración progresiva** y testing continuo
- **Documentación colaborativa** del proceso de desarrollo

### 🔄 Flujo de Trabajo Git
- **Ramas individuales** para cada integrante
- **Pull Requests** para revisión de código
- **Merge controlado** a la rama principal
- **Issues tracking** para gestión de tareas
- **Commits descriptivos** y estructura clara

## 📄 Licencia

Este proyecto está bajo la Licencia MIT - ver el archivo [LICENSE](LICENSE) para más detalles.

## 🙏 Agradecimientos

- **Profesores del curso** de Matemática Discreta por la guía académica
- **Comunidad de desarrolladores** por recursos y referencias técnicas
- **Equipo de desarrollo** por la colaboración y dedicación al proyecto

---

<p align="center">
  <strong>📚 Proyecto Académico - Matemática Discreta</strong><br>
  <em>Implementaciones en C++ para el análisis y comprensión de algoritmos fundamentales</em><br>
  <sub>Desarrollado con ❤️ por el equipo de 4 integrantes</sub>
</p>
