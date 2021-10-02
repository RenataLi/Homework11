//
// Created by ASUS on 23.09.2021.
//
#ifndef __automobile__
#define __automobile__

//------------------------------------------------------------------------------
// automobile.h - содержит описание треугольника
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

// Вывод параметров треугольника в форматируемый поток
void Out(automobile &t, ofstream &ofst);

// Вычисление периметра треугольника
double Distance(automobile &t);

#endif //__triangle__

#ifndef HOMEWORK1_AUTOMOBILE_H
#define HOMEWORK1_AUTOMOBILE_H

#endif //HOMEWORK1_AUTOMOBILE_H
