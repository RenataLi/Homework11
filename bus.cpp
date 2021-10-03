
//------------------------------------------------------------------------------
// bus.cpp - содержит функции обработки автобуса
//------------------------------------------------------------------------------
#include "bus.h"
//------------------------------------------------------------------------------
// Ввод параметров автобусе из потока
void In(bus &b, ifstream &ifst) {
    ifst >> b.passenger_capacity;
    ifst>>b.fuel_capasity;
    ifst>>b.fuel_consumption;

}

// Случайный ввод параметров автобуса
void InRnd(bus &b) {
    b.passenger_capacity = Random(30);
    b.fuel_consumption = Random(50);
    b.fuel_capasity = Random(20);
}

//------------------------------------------------------------------------------
// Вывод параметров автобуса в поток
void Out(bus &b, ofstream &ofst) {
    ofst << "It is Bus: passenger capacity = "
         << b.passenger_capacity
         <<", fuel_capasity = "
         <<b.fuel_capasity
         <<", fuel_consumption = "
         <<b.fuel_consumption
         << ". Distance = " << Distance(b) << "\n";
}

//------------------------------------------------------------------------------
// Вычисление максимального расстояния автобуса
double Distance(bus &b) {
    return double(b.fuel_capasity/b.fuel_consumption);
}




