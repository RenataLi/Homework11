
#ifndef __automobile__
#define __automobile__
//------------------------------------------------------------------------------
// automobile.h - содержит описание автомобиля
//------------------------------------------------------------------------------
#include <fstream>
using namespace std;
# include "rnd.h"
//------------------------------------------------------------------------------
// автомобиль
struct automobile {
    short max_speed; // параметр автомобиля
    int fuel_capasity;
    double fuel_consumption;
};

// Ввод параметров автомобиля из файла
void In(automobile &a, ifstream &ifst);

// Случайный ввод параметров автомобиля
void InRnd(automobile &е);

// Вывод параметров автомобиля в форматируемый поток
void Out(automobile &t, ofstream &ofst);

// Вычисление максимального расстояния автомобиля
double Distance(automobile &t);

#endif
#ifndef HOMEWORK1_AUTOMOBILE_H
#define HOMEWORK1_AUTOMOBILE_H
#endif //HOMEWORK1_AUTOMOBILE_H
