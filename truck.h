
#ifndef __truck__
#define __truck__

//------------------------------------------------------------------------------
// truck.h - содержит описание прямоугольника  и его интерфейса
//------------------------------------------------------------------------------
#include <fstream>
using namespace std;

# include "rnd.h"

// грузовик
struct truck {
    int lifting_capacity; // грузоподъемность
    int fuel_capasity;//емкость топливного бака
    double fuel_consumption;//расход топлива
};

// Ввод параметров прямоугольника из файла
void In(truck &t, ifstream &ifst);

// Случайный ввод параметров прямоугольника
void InRnd(truck &t);

// Вывод параметров прямоугольника в форматируемый поток
void Out(truck &t, ofstream &ofst);

// Вычисление периметра прямоугольника
double Distance(truck &t);

#endif //__rectangle__

#ifndef HOMEWORK1_TRUCK_H
#define HOMEWORK1_TRUCK_H

#endif //HOMEWORK1_TRUCK_H
