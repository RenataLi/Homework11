//
// Created by ASUS on 23.09.2021.
//
#ifndef __rnd__
#define __rnd__

#include <cstdlib>

//------------------------------------------------------------------------------
// rnd.h - содержит генератор случайных чисел в диапазоне от 1 до number
//------------------------------------------------------------------------------

inline auto Random(int number) {
    return rand() % number + 1;
}

#endif //__rnd__

#ifndef HOMEWORK1_RND_H
#define HOMEWORK1_RND_H

#endif //HOMEWORK1_RND_H
