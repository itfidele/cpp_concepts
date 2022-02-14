//
// Created by fidele on 14/02/2022.
//

#include "Movies.hpp"
void Movies::updateMovie(Movie &movie) {
    if(isMovieExist(movie)>=0)
        movies.at(isMovieExist(movie)) = movie;
}
void Movies::addMovie(Movie &movie) {
    if(isMovieExist(movie)>=0)
        std::cout<<"Movie Already Exists --- "<<std::endl;
    else
        this->movies.push_back(movie);
}

int Movies::isMovieExist(Movie &movie) {
    int count=0;
    for(Movie &m:this->movies){
        if(m.getName()==movie.getName()){
            return count;
        }
        count++;
    }
    return -1;
}
void Movies::incrementMovieCount(Movie &movie) {
    if(isMovieExist(movie)>=0){
        movie.setWatched((movie).getWatched()+1);
        updateMovie(movie);
    }

}

void Movies::displayAllMovies() {
    for(Movie &m:this->movies){
        std::cout<<"Name: "<<m.getName()<<std::endl;
        std::cout<<"Watched: "<<m.getWatched()<<std::endl;
        std::cout<<"-------------------------------------"<<std::endl;
    }
}