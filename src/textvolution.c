

/*
 * textvolution.cpp
 *
 * this is the top-level source file for the textvolution evolutionary text    . 
 * this file will set up everythin necessary top perform an actual text evolution
 *
 * Copyright 2017, 2018, 2019, Mike Nowak.
 *
 */



// main entry point for the textvolution software //

int main(int argc, char* argv[]) {

  
  
  
  
  
  



determine_fitness()





if (compiles) {

    for (int i=0; i<trials.size(); i++) {

        if (no early kill needed && exits successfully) {
            if (output exists) {
                if (output not super long) {
                    if (output 1 char) {
                        if (output "y" or output "n") {
                            if (output correct) trials[i].set_fitness(1.0);
                            else                trials[i].set_fitness(0.8);
                        }
                        else trials[i].set_fitness(0.5);
                    }
                    else trials[i].set_fitness(0.3);
                }
                else trials[i].set_fitness(0.2);
            }
            else trials[i].set_fitness(0.1);
        }
        else trials[i].set_fitness(0.05);

        fitness_sum += trials[i].get_fitness();
    }

    fitness = (fitness_sum / trials.size());
}
else {
    fitness = 0.0;
}


    
  
  
  



}


