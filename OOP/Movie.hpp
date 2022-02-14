//
// Created by fidele on 14/02/2022.
//

#ifndef C__CONCEPTS_MOVIE_HPP
#define C__CONCEPTS_MOVIE_HPP
#include <iostream>

class Movie {
private:
    std::string name;
    int rating=0;
    int watched=0;
public:
    Movie(std::string name_value,int rating_value,int watched_value) {
        this->name=name_value;
        this->rating=rating_value;
        this->watched=watched_value;
    };

    Movie(std::string &name_value,int &rating_value,int &watched_value) {
        this->name=name_value;
        this->rating=rating_value;
        this->watched=watched_value;
    };
    std::string getName();
    void setWatched(int value);
    int getWatched();
    void increamentWatched();
};


#endif //C__CONCEPTS_MOVIE_HPP
