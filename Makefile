# ========================================
# MAKEFILE PARA PROYECTO DE MATEMÁTICA DISCRETA
# Descripción: Compilación del proyecto organizado por unidades y semanas
# ========================================

# Compilador y flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Directorios
UNIDAD1_DIR = Unidad_1
UNIDAD2_DIR = Unidad_2
UNIDAD3_DIR = Unidad_3
BUILD_DIR = build

# Archivos fuente principales
MAIN_SRC = main.cpp
UNIDAD1_SRCS = $(wildcard $(UNIDAD1_DIR)/*.cpp)
UNIDAD2_SRCS = $(wildcard $(UNIDAD2_DIR)/*.cpp)
UNIDAD3_SRCS = $(wildcard $(UNIDAD3_DIR)/*.cpp)
ALL_SRCS = $(MAIN_SRC) $(UNIDAD1_SRCS) $(UNIDAD2_SRCS) $(UNIDAD3_SRCS)

# Ejecutable principal
TARGET = mate_discreta

# ========================================
# REGLAS PRINCIPALES
# ========================================

# Regla por defecto: compilar programa principal
all: $(BUILD_DIR) $(TARGET)

# Crear directorio build
$(BUILD_DIR):
	@if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)

# Compilar programa principal con todas las unidades
$(TARGET): $(BUILD_DIR) $(ALL_SRCS)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/$(TARGET).exe $(ALL_SRCS)
	@echo.
	@echo ======================================
	@echo   Compilacion exitosa!
	@echo   Ejecutable: $(BUILD_DIR)/$(TARGET).exe
	@echo ======================================

# ========================================
# REGLAS INDIVIDUALES POR SEMANA
# ========================================

# Unidad I - Semanas 1-4
semana1: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/semana1.exe $(UNIDAD1_DIR)/semana1_induccion_matematica.cpp
	@echo Compilado: Semana 1 - Induccion Matematica

semana2: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/semana2.exe $(UNIDAD1_DIR)/semana2_induccion_completa_recurrencia.cpp
	@echo Compilado: Semana 2 - Induccion Completa y Recurrencias

semana3: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/semana3.exe $(UNIDAD1_DIR)/semana3_funciones_generadoras.cpp
	@echo Compilado: Semana 3 - Funciones Generadoras

semana4: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/semana4.exe $(UNIDAD1_DIR)/semana4_divide_venceras.cpp
	@echo Compilado: Semana 4 - Divide y Venceras

# Unidad II - Semanas 6-9
semana6: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/semana6.exe $(UNIDAD2_DIR)/semana6_grafos_construccion.cpp
	@echo Compilado: Semana 6 - Grafos y Construccion

semana7: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/semana7.exe $(UNIDAD2_DIR)/semana7_arboles.cpp
	@echo Compilado: Semana 7 - Arboles

semana8: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/semana8.exe $(UNIDAD2_DIR)/semana8_ruta_mas_corta.cpp
	@echo Compilado: Semana 8 - Ruta Mas Corta

semana9: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/semana9.exe $(UNIDAD2_DIR)/semana9_coloracion_grafos.cpp
	@echo Compilado: Semana 9 - Coloracion de Grafos

# Unidad III - Semanas 11-14
semana11: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/semana11.exe $(UNIDAD3_DIR)/semana11_bases_conteo.cpp
	@echo Compilado: Semana 11 - Bases del Conteo

semana12: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/semana12.exe $(UNIDAD3_DIR)/semana12_permutaciones.cpp
	@echo Compilado: Semana 12 - Permutaciones y Combinaciones

semana13: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/semana13.exe $(UNIDAD3_DIR)/semana13_coeficientes_binomiales.cpp
	@echo Compilado: Semana 13 - Coeficientes Binomiales

semana14: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/semana14.exe $(UNIDAD3_DIR)/semana14_inclusion_exclusion.cpp
	@echo Compilado: Semana 14 - Inclusion-Exclusion

# ========================================
# REGLAS DE COMPILACIÓN POR UNIDAD
# ========================================

unidad1: semana1 semana2 semana3 semana4
	@echo.
	@echo ======================================
	@echo   UNIDAD I compilada completamente
	@echo ======================================

unidad2: semana6 semana7 semana8 semana9
	@echo.
	@echo ======================================
	@echo   UNIDAD II compilada completamente
	@echo ======================================

unidad3: semana11 semana12 semana13 semana14
	@echo.
	@echo ======================================
	@echo   UNIDAD III compilada completamente
	@echo ======================================

# Compilar todas las unidades individualmente
todas_semanas: unidad1 unidad2 unidad3
	@echo.
	@echo ======================================
	@echo   TODAS LAS SEMANAS compiladas
	@echo ======================================

# ========================================
# REGLAS DE EJECUCIÓN
# ========================================

# Ejecutar programa principal
run: $(TARGET)
	@echo Ejecutando programa principal...
	@cd $(BUILD_DIR) && ./$(TARGET).exe

# Ejecutar semana específica
run-semana%: semana%
	@echo Ejecutando semana $*...
	@cd $(BUILD_DIR) && ./semana$*.exe

# ========================================
# REGLAS DE LIMPIEZA
# ========================================

# Limpiar archivos compilados
clean:
	@if exist $(BUILD_DIR) rmdir /s /q $(BUILD_DIR)
	@echo Archivos de compilacion eliminados.

# Limpiar y compilar todo
rebuild: clean all
	@echo Recompilacion completa finalizada.

# ========================================
# REGLAS DE AYUDA
# ========================================

help:
	@echo.
	@echo ======================================
	@echo   AYUDA DEL MAKEFILE
	@echo ======================================
	@echo.
	@echo Reglas principales:
	@echo   all              - Compilar programa principal
	@echo   run              - Compilar y ejecutar programa principal
	@echo   clean            - Limpiar archivos compilados
	@echo   rebuild          - Limpiar y recompilar todo
	@echo.
	@echo Compilacion por unidades:
	@echo   unidad1          - Compilar todas las semanas de Unidad I
	@echo   unidad2          - Compilar todas las semanas de Unidad II
	@echo   unidad3          - Compilar todas las semanas de Unidad III
	@echo   todas_semanas    - Compilar todas las semanas
	@echo.
	@echo Compilacion individual:
	@echo   semana1          - Semana 1: Induccion Matematica
	@echo   semana2          - Semana 2: Induccion Completa
	@echo   semana3          - Semana 3: Funciones Generadoras
	@echo   semana4          - Semana 4: Divide y Venceras
	@echo   semana6          - Semana 6: Grafos
	@echo   semana7          - Semana 7: Arboles
	@echo   semana8          - Semana 8: Ruta Mas Corta
	@echo   semana9          - Semana 9: Coloracion
	@echo   semana11         - Semana 11: Bases Conteo
	@echo   semana12         - Semana 12: Permutaciones
	@echo   semana13         - Semana 13: Coeficientes Binomiales
	@echo   semana14         - Semana 14: Inclusion-Exclusion
	@echo.
	@echo Ejecucion:
	@echo   run-semanaX      - Ejecutar semana especifica (X = numero)
	@echo.
	@echo ======================================

# Declarar reglas que no generan archivos
.PHONY: all clean rebuild help run todas_semanas unidad1 unidad2 unidad3
.PHONY: semana1 semana2 semana3 semana4 semana6 semana7 semana8 semana9
.PHONY: semana11 semana12 semana13 semana14
