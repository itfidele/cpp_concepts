//
// Created by fidele on 03/02/2022.
//

#ifndef C__CONCEPTS_MOVE_HPP
#define C__CONCEPTS_MOVE_HPP


class Move {
private:
    int *data;
public:
    void setData(int d) { *data=d; };
    int getDtata(){ return *data; }
    Move(int d);
    Move(const Move &source);
    ~Move();
};


#endif //C__CONCEPTS_MOVE_HPP
