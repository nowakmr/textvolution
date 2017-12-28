
#ifndef ATOM_HPP
#define ATOM_HPP

/*
 * atom.hpp
 *
 * this file contains declarations of things related to the text "atom" class. this class holds a basic set of characters that may be repeated throughout a text-set's "code"
 * (throughout the "chain" of a particular text set).
 *
 * Copyright 2017, 2018, Mike Nowak.
 *
 */


// includes //
#include <string>
using namespace std;


// main text atom class declartion //
class atom {

    public:

        atom();
        ~atom();

    private:

        string text;
};



#endif   /* ATOM_HPP */


