//
// Created by ASUS on 23.09.2021.
//
//------------------------------------------------------------------------------
// automobile.cpp - содержит функции обработки автомобиля
//------------------------------------------------------------------------------

#include "automobile.h"

//------------------------------------------------------------------------------
// Ввод параметров автомобиля из потока
void In(automobile &a, ifstream &ifst) {
    ifst >> a.max_speed;
    ifst>>a.fuel_capasity;
    ifst>>a.fuel_consumption;
}
void InRnd(automobile &a) {
    a.max_speed = Random(200);
    a.fuel_consumption = Random(50);
    a.fuel_capasity = Random(20);
}
//------------------------------------------------------------------------------
// Вывод параметров автомобиля в поток
void Out(automobile &a, ofstream &ofst) {
    ofst << "It is Automobile: max speed = "
         << a.max_speed << ", fuel consumption = " << a.fuel_consumption
         << ", fuel capasity = " << a.fuel_capasity
         << ". Distance = " << Distance(a) << "\n";
}
//------------------------------------------------------------------------------
// Вычисление максимального расстояния
double Distance(automobile &a) {
    return double(a.fuel_capasity/a.fuel_consumption);
}


