/*
Enunciado
El Trabajo 1 del curso de Algoritmos y Estructuras de Datos consiste en implementar
una aplicación minimalista con todos los conceptos utilizados en las sesiones de clase
de acuerdo al sílabo. La Tabla 1 muestra los grupos, la aplicación a desarrollar por
cada grupo y la referencia de ejemplo que pueden desarrollar, este ejemplo sirve para
que puedan guiarse en los procesos que tiene cada proyecto.
Gestión para venta de pasajes Allinbus
4. Consideraciones generales:
A. El proyecto debe ser desarrollado bajo el paradigma de Programación Orientada
a Objetos (POO) y de Programación Genérica, requiere al menos 5 entidades por
cada integrante de grupo y deben ser consideradas con sus respectivas relaciones
entre clases, adjuntar su diagrama de clases UML.
B. Todas las estructuras de datos desarrolladas en la aplicación deben ser genéricas
(implementadas con templates) y hacer uso de funciones lambdas mínimo 3 por
cada integrante del grupo.
C. Implementar al menos 3 estructuras de datos distintas (listas enlazadas simples,
dobles, circulares, pilas, colas), justificando el uso correcto, como mínimo una
estructura de datos por cada integrante.
D. Cada estructura de datos debe tener al menos 3 métodos implementados por cada
integrante del grupo (diferente a los desarrollados en clase), por ejemplo, insertar,
ordenar, buscar u otros.
E. Aplicación de un algoritmo de ordenamiento avanzado por cada integrante.
F. La aplicación debe ser presentada en consola, se debe considerar la usabilidad y
estética de la aplicación.
G. La calificación se realizará de manera individual en la exposición.
5. De la entrega
● El proyecto se realizará en grupos de 3 integrantes.
● La entrega consistirá únicamente de todos los archivos (.hpp y .cpp) o proyecto
en visual Studio 2019/2022 que contenga los archivos usados (incluidos archivos
de texto o binarios),
● Se debe realizar un video de grabación de la exposición de todos los integrantes
no mayor a 5 minutos y un archivo Readme.txt. (Solo enviar el enlace del video)
● El archivo Readme.txt debe contener el detalle de desarrollo de cada uno de los
integrantes del grupo con una autovaloración por el aporte y/o participación en
una escala de 0-20.
● El nombre del archivo comprimido en formato zip y con los apellidos paternos de
los integrantes del grupo, por ejemplo
TP_u20231234_Diaz_Suarez_Jorge_Eduardo.zip
● La fecha de entrega es hasta el 22 de setiembre de 2024 a las 23:59 por el aula
virtual de blackboard.
● Adjuntar en un archivo de Microsoft Office Word donde muestre todos los
procesos que se encuentran realizando, además, con una explicación del caso de
estudio las estructuras necesarias y su complejidad en notación detallada, Big O
del algoritmo que consideren principal por cada entidad e indicar los nombres de
los integrantes y la descripción de tareas que realizó.
● El desarrollo del proyecto se realizará de manera grupal, pero la entrega es de
manera individual.
6. De la presentación
● La primera sesión de clases de la semana 7, se hará una demostración y
explicación del proyecto implementado, la elección para la exposición de los
grupos y de los integrantes será aleatoria.
● El grupo puede exponer solamente si realizó el envío por el aula virtual de
blackboard en la hora indicada.
● Todo avance posterior a la fecha de entrega no será considerado para la
exposición.
● Todos los integrantes del grupo deben conocer en su totalidad la
implementación.
● El estudiante debe presentar el T1 en el aula virtual de blackboard, de manera
individual.
● El estudiante que no presenta el T1 no podrá exponer, donde tendrá nota CERO.
● El estudiante que presenta el T1 y no expone, tendrá nota CERO.
● Durante la exposición, el grupo debe declarar si ha utilizado herramientas de
Inteligencia Artificial (IA) y debe especificar en qué parte del trabajo lo ha utilizado.
En caso el grupo utilice una herramienta de IA y no lo declare, el docente tiene la
potestad de penalizar si detecta el uso de estas herramientas. Asimismo, el
docente tiene la prerrogativa de solicitar a cada integrante del grupo, que
demuestre su conocimiento del código de programación que presenta. Si el
estudiante no demuestra conocer su código de programación su calificación será
penalizada.
Rúbrica de calificación:
La Tabla 2 muestra la rúbrica de calificación por cada requisito que deben presentar
en la aplicación
La Tabla 2: Rúbrica de calificación
Criterio Puntaje
Disenar el diagrama de clases UML 3 puntos
Análisis de Complejidad de 3 métodos que consideren más
importantes.
2 puntos
Uso de lambdas y templates en cada estructura de datos
justificados.
2 puntos
Implementación de estructuras de datos (listas simples,
dobles enlazadas e iteradores, Pilas y Colas) con sus
métodos respectivos
6 puntos
Implementación de al menos un método por estudiante con
uso de recursividad.
2 puntos
Implementación de algoritmos de ordenamiento 1 puntos
Diseno de interfase amigable, usable en consola. 2 puntos
Uso de archivos de texto o binarios para leer y guardar
registros, por cada una de las clases principales.
2 puntos
● Es imperativo el uso de POO y de Programación genérica en la implementación
del proyecto.
● El puntaje se considera de manera individual en la exposición
● El acto de plagio con otros grupos es penalizado con la calificación de cero (0)
para todos los integrantes involucrados.
● En el caso de obtener parte del código de otras fuentes de información en una
sección de comentario referencie mediante la URL.


*/

#include <iostream>
#include "List.h"
#include "Bus.h"
using namespace std;

//Como usar la lista de buses
void useBusList() {
    // Crear la lista de autobuses
    List<Bus> busList;

    // Agregar algunos autobuses a la lista
    busList.addBus(Bus(101, "Ruta A", 50, "08:00 AM"));
    busList.addBus(Bus(102, "Ruta B", 45, "09:30 AM"));
    busList.addBus(Bus(103, "Ruta C", 60, "10:15 AM"));

    // Mostrar la información de los autobuses
    cout << "Lista de Autobuses:" << endl;
    busList.displayBuses();

    // Buscar un autobús por su número
    int searchNumber = 102;
    Bus* foundBus = busList.searchBus(searchNumber);
    if (foundBus != nullptr) {
        cout << "\nBus encontrado con el número: " << searchNumber << endl;
        foundBus->displayInfo();
    }
    else {
        cout << "\nBus no encontrado." << endl;
    }

    // Eliminar un autobús de la lista
    busList.removeBus(101);
    cout << "\nLista de Autobuses después de eliminar el Bus 101:" << endl;
    busList.displayBuses();

}



int main() {
    useBusList();
    system("pause");
}