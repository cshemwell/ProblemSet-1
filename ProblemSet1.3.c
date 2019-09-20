#include<stdio.h>
#include<stdlib.h>

int main (){


      char *thing = "++++++++++";
      // tried %s/n, %d/n, %s "/
      // also tried creating/naming a data called ' ++++++++++ ' , but the +'s are making C mad.
      // error messages suggesting using %d/n instead, which got rid of one error, but not all of them
      // couldn't get past this first step, so I couldn't attempt making the line repeat 5 times
       printf("%s", thing, thing, thing, thing, thing);


       
       return 0;
       

}

