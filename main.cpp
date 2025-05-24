// ========================================
// PROGRAMA PRINCIPAL - NAVEGACIÓN DEL PROYECTO DE MATEMÁTICA DISCRETA
// Archivo: main.cpp
// Descripción: Sistema de menús para navegar entre las unidades y semanas
//              del curso de Matemática Discreta
// ========================================

#include <iostream>
#include <string>
#include <limits>

using namespace std;

// Funciones temporales para cada semana (reemplazar por extern cuando se implementen)
// Unidad I
void ejecutar_semana1() { cout << "\n[PLACEHOLDER] Semana 1: Inducción Matemática - Por implementar\n"; }
void ejecutar_semana2() { cout << "\n[PLACEHOLDER] Semana 2: Inducción Completa y Recurrencias - Por implementar\n"; }
void ejecutar_semana3() { cout << "\n[PLACEHOLDER] Semana 3: Funciones Generadoras - Por implementar\n"; }
void ejecutar_semana4() { cout << "\n[PLACEHOLDER] Semana 4: Divide y Vencerás - Por implementar\n"; }

// Unidad II
void ejecutar_semana6() { cout << "\n[PLACEHOLDER] Semana 6: Representación de Grafos - Por implementar\n"; }
void ejecutar_semana7() { cout << "\n[PLACEHOLDER] Semana 7: Árboles - Por implementar\n"; }
void ejecutar_semana8() { cout << "\n[PLACEHOLDER] Semana 8: Ruta Más Corta - Por implementar\n"; }
void ejecutar_semana9() { cout << "\n[PLACEHOLDER] Semana 9: Coloración de Grafos - Por implementar\n"; }

// Unidad III
void ejecutar_semana11() { cout << "\n[PLACEHOLDER] Semana 11: Bases del Conteo - Por implementar\n"; }
void ejecutar_semana12() { cout << "\n[PLACEHOLDER] Semana 12: Permutaciones y Combinaciones - Por implementar\n"; }
void ejecutar_semana13() { cout << "\n[PLACEHOLDER] Semana 13: Coeficientes Binomiales - Por implementar\n"; }
void ejecutar_semana14() { cout << "\n[PLACEHOLDER] Semana 14: Inclusión-Exclusión - Por implementar\n"; }

class MenuPrincipal
{
public:
    static void mostrar_bienvenida()
    {
        cout << "============================================" << endl;
        cout << "    PROYECTO DE MATEMÁTICA DISCRETA" << endl;
        cout << "============================================" << endl;
        cout << "Bienvenido al sistema de navegación" << endl;
        cout << "Organizado por unidades y semanas según" << endl;
        cout << "el syllabus del curso." << endl;
        cout << "============================================" << endl;
    }

    static void mostrar_menu_principal()
    {
        cout << "\n=== MENÚ PRINCIPAL ===" << endl;
        cout << "1. UNIDAD I  - Inducción y Recursión (Semanas 1-4)" << endl;
        cout << "2. UNIDAD II - Teoría de Grafos (Semanas 6-9)" << endl;
        cout << "3. UNIDAD III- Técnicas de Conteo (Semanas 11-14)" << endl;
        cout << "4. Información del Proyecto" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opción: ";
    }

    static void mostrar_info_proyecto()
    {
        cout << "\n=== INFORMACIÓN DEL PROYECTO ===" << endl;
        cout << "Proyecto: Matemática Discreta" << endl;
        cout << "Estructura: Organizado por unidades temáticas" << endl;
        cout << "Propósito: Plantillas para implementación en equipo" << endl;
        cout << "\nContenido por unidad:" << endl;
        cout << "• Unidad I (Semanas 1-4): Fundamentos de inducción y recursión" << endl;
        cout << "• Unidad II (Semanas 6-9): Teoría de grafos y algoritmos" << endl;
        cout << "• Unidad III (Semanas 11-14): Combinatoria y conteo" << endl;
        cout << "\nCada archivo contiene:" << endl;
        cout << "• Estructura básica de clases y funciones" << endl;
        cout << "• Comentarios TODO para guiar la implementación" << endl;
        cout << "• Referencias a los temas según el syllabus" << endl;
        cout << "============================================" << endl;
    }

    static int obtener_opcion()
    {
        int opcion;
        while (!(cin >> opcion))
        {
            cout << "Entrada inválida. Ingrese un número: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return opcion;
    }
};

class MenuUnidad1
{
public:
    static void mostrar_menu()
    {
        cout << "\n=== UNIDAD I: INDUCCIÓN Y RECURSIÓN ===" << endl;
        cout << "1. Semana 1 - Principio de Inducción Matemática" << endl;
        cout << "2. Semana 2 - Inducción Completa y Recurrencias" << endl;
        cout << "3. Semana 3 - Funciones Generadoras" << endl;
        cout << "4. Semana 4 - Algoritmos Divide y Vencerás" << endl;
        cout << "0. Volver al menú principal" << endl;
        cout << "Seleccione una semana: ";
    }

    static void ejecutar(int semana)
    {
        switch (semana)
        {
        case 1:
            ejecutar_semana1();
            break;
        case 2:
            ejecutar_semana2();
            break;
        case 3:
            ejecutar_semana3();
            break;
        case 4:
            ejecutar_semana4();
            break;
        case 0:
            return;
        default:
            cout << "Opción inválida. Intente nuevamente." << endl;
        }
    }
};

class MenuUnidad2
{
public:
    static void mostrar_menu()
    {
        cout << "\n=== UNIDAD II: TEORÍA DE GRAFOS ===" << endl;
        cout << "1. Semana 6 - Representación y Construcción de Grafos" << endl;
        cout << "2. Semana 7 - Árboles" << endl;
        cout << "3. Semana 8 - Algoritmos de Ruta Más Corta" << endl;
        cout << "4. Semana 9 - Coloración de Grafos" << endl;
        cout << "0. Volver al menú principal" << endl;
        cout << "Seleccione una semana: ";
    }

    static void ejecutar(int semana)
    {
        switch (semana)
        {
        case 1:
            ejecutar_semana6();
            break;
        case 2:
            ejecutar_semana7();
            break;
        case 3:
            ejecutar_semana8();
            break;
        case 4:
            ejecutar_semana9();
            break;
        case 0:
            return;
        default:
            cout << "Opción inválida. Intente nuevamente." << endl;
        }
    }
};

class MenuUnidad3
{
public:
    static void mostrar_menu()
    {
        cout << "\n=== UNIDAD III: TÉCNICAS DE CONTEO ===" << endl;
        cout << "1. Semana 11 - Bases del Conteo" << endl;
        cout << "2. Semana 12 - Permutaciones y Combinaciones" << endl;
        cout << "3. Semana 13 - Coeficientes Binomiales" << endl;
        cout << "4. Semana 14 - Principio de Inclusión-Exclusión" << endl;
        cout << "0. Volver al menú principal" << endl;
        cout << "Seleccione una semana: ";
    }

    static void ejecutar(int semana)
    {
        switch (semana)
        {
        case 1:
            ejecutar_semana11();
            break;
        case 2:
            ejecutar_semana12();
            break;
        case 3:
            ejecutar_semana13();
            break;
        case 4:
            ejecutar_semana14();
            break;
        case 0:
            return;
        default:
            cout << "Opción inválida. Intente nuevamente." << endl;
        }
    }
};

// Función principal del programa
int main()
{
    MenuPrincipal::mostrar_bienvenida();

    int opcion;
    do
    {
        MenuPrincipal::mostrar_menu_principal();
        opcion = MenuPrincipal::obtener_opcion();

        switch (opcion)
        {
        case 1: // Unidad I
        {
            int semana;
            do
            {
                MenuUnidad1::mostrar_menu();
                semana = MenuPrincipal::obtener_opcion();
                MenuUnidad1::ejecutar(semana);
            } while (semana != 0);
            break;
        }
        case 2: // Unidad II
        {
            int semana;
            do
            {
                MenuUnidad2::mostrar_menu();
                semana = MenuPrincipal::obtener_opcion();
                MenuUnidad2::ejecutar(semana);
            } while (semana != 0);
            break;
        }
        case 3: // Unidad III
        {
            int semana;
            do
            {
                MenuUnidad3::mostrar_menu();
                semana = MenuPrincipal::obtener_opcion();
                MenuUnidad3::ejecutar(semana);
            } while (semana != 0);
            break;
        }
        case 4: // Información
            MenuPrincipal::mostrar_info_proyecto();
            break;
        case 0: // Salir
            cout << "\n¡Gracias por usar el sistema de Matemática Discreta!" << endl;
            cout << "============================================" << endl;
            break;
        default:
            cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 0);

    return 0;
}
