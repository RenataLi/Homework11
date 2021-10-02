//
// Created by ASUS on 23.09.2021.
//
//------------------------------------------------------------------------------
// car.cpp - содержит процедуры связанные с обработкой обобщенной фигуры
// и создания произвольной фигуры
//------------------------------------------------------------------------------
#include "car.h"
#include <fstream>
using namespace std;
//------------------------------------------------------------------------------
// Ввод параметров обобщенной машины из файла
car* In(ifstream &ifst) {
    car *car_;
    int k;
    ifst >> k;
    switch(k) {
        case 1:
            car_ = new car;
            car_->k = car::AUTOMOBILE;
            In(car_->a, ifst);
            return car_;
        case 2:
            car_ = new car;
            car_->k = car::TRUCK;
            In(car_->t, ifst);
            return car_;
        case 3:
            car_ = new car;
            car_->k = car::BUS;
            In(car_->b,ifst);
            return car_;
        default:
            return 0;
    }
}

// Случайный ввод обобщенной машины
car *InRnd() {
    car *car_;
    auto k = rand() % 3 + 1;
    switch(k) {
        case 1:
            car_ = new car;
            car_->k = car::AUTOMOBILE;
            InRnd(car_->a);
            return car_;
        case 2:
            car_ = new car;
            car_->k = car::TRUCK;
            InRnd(car_->t);
            return car_;
        case 3:
            car_ = new car;
            car_->k = car::BUS;
            InRnd(car_->b);
            return car_;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущей машины в поток
void Out(car &c, ofstream &ofst) {
    switch(c.k) {
        case car::AUTOMOBILE:
            Out(c.a, ofst);
            break;
        case car::TRUCK:
            Out(c.t, ofst);
            break;
        case car::BUS:
            Out(c.b,ofst);
            break;
        default:
            ofst << "Incorrect car!" << endl;
    }
}

//------------------------------------------------------------------------------
// Вычисление периметра фигуры
double Perimeter(car &c) {
    switch(c.k) {
        case car::AUTOMOBILE:
            return Distance(c.a);
            break;
        case car::TRUCK:
            return Distance(c.t);
            break;
        case car::BUS:
            return Distance(c.b);
            break;
        default:
            return 0.0;
    }
}


