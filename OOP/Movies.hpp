//
// Created by fidele on 14/02/2022.
//

#ifndef C__CONCEPTS_MOVIES_HPP
#define C__CONCEPTS_MOVIES_HPP
#include <iostream>
#include <vector>
#include "Movie.hpp"

class Movies {
private:
    std::vector<Movie>  movies;
public:
    int isMovieExist(Movie &movie);
    void addMovie(Movie &movie);
    void updateMovie(Movie &movie);
    void incrementMovieCount(Movie &movie);
    void displayAllMovies();
};


#endif //C__CONCEPTS_MOVIES_HPP
