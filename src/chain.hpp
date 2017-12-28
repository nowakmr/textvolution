
#ifndef CHAIN_HPP
#define CHAIN_HPP

/*
 * chain.hpp
 *
 * this file contains declarations of things related to the text atom "chain" class, which basically describes an ordering of text "atoms" that make up an entire "text-set".
 *
 * Copyright 2017, 2018, Mike Nowak.
 *
 */


// includes //
#include "atom.hpp"


// main chain class declaration //
class chain {

    private:

        // contained class in the chain class, which composes a link of the atom "chain". the chain is basically a linked-list of chain::links, each of which has a //
        // reference to an already existing "atom" object and the next link in the chain ("NULL" if this is the end of the chain). //
        class link {
    
            private:
            
                const atom& text_atom;
    	    link*       next;
    
            public:
    
                link(const atom& text_atom);
    	    ~link();
    
        };

	// actual data members for the chain class //
	link* chain_link;

    public:

        chain();
	~chain();
};


#endif   /* CHAIN_HPP */


