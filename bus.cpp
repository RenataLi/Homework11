//
// Created by ASUS on 23.09.2021.
//
//------------------------------------------------------------------------------
// bus.cpp - содержит функции обработки автобуса
//------------------------------------------------------------------------------

#include "bus.h"

//------------------------------------------------------------------------------
// Ввод параметров треугольника из потока
void In(bus &b, ifstream &ifst) {
    ifst >> b.passenger_capacity;
    ifst>>b.fuel_capasity;
    ifst>>b.fuel_consumption;

}

// Случайный ввод параметров треугольника
void InRnd(bus &b) {
    b.passenger_capacity = Random(30);
    b.fuel_consumption = Random(50);
    b.fuel_capasity = Random(20);
}

//------------------------------------------------------------------------------
// Вывод параметров треугольника в поток
void Out(bus &b, ofstream &ofst) {
    ofst << "It is Bus: passenger capacity = "
         << b.passenger_capacity
         << ". Distance = " << Distance(b) << "\n";
}

//------------------------------------------------------------------------------
// Вычисление периметра треугольника
double Distance(bus &b) {
    return double(b.fuel_capasity/b.fuel_consumption);
}




