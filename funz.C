#include  "funz.h"

int numsing (){
    int a;
    a=(float)rand()/RAND_MAX*109;
    return a;
}
//probabilita' sballata per ultima casistica (causa troncamento decimale), sistemato aggiungendo e 
//spostando di uno e sommando un caso possibile, (109 e' molto meno probabile come risultato possibile)
