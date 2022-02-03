//
// Created by fidele on 03/02/2022.
//

#include "Move.hpp"


Move::Move(const Move &source) {
    data = new int;
    *data=*source.data; // Deep copy
}