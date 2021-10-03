
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

// Ввод параметров грузовика из файла
void In(truck &t, ifstream &ifst);

// Случайный ввод параметров грузовика
void InRnd(truck &t);

// Вывод параметров грузовика в форматируемый поток
void Out(truck &t, ofstream &ofst);

// Вычисление периметра грузовика
double Distance(truck &t);

#endif

#ifndef HOMEWORK1_TRUCK_H
#define HOMEWORK1_TRUCK_H

#endif
