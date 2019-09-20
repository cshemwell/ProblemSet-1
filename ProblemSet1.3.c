#include<stdio.h>
#include<stdlib.h>

int main (){

       char *thing = "++++++++++";
    
       
       //had to experiment with syntax. This is wasn't we learned, but it was the only way I could get it to work
       //I didn't use the personalized data name or commas in the first section like we had, 
       // and then followed by the personalized name.
       printf("%s %79s %79s %79s %79s\n", thing, thing, thing, thing, thing);

      
      return 0;
}

