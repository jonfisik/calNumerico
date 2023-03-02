//Autor - Jonatan
//data 2-mar-2023
//Plotar a função   y(T)=C(1-e^-aT)

#include<stdio.h>
#include<math.h>

int main(){
        FILE *fil; //arquivo de saída
        double y,t,dt,C,a;
        
        char filename[100]="cexponencial.dat";
        
         fil=fopen(filename,"w");

         C=1;
         a=0.5;
        
         dt=0.1;

         for(t=0;t<=20.;t=t+dt){
            
            y=C*(1.-exp(-a*t));

            fprintf(fil,"%13.8f %13.8f\n",t,y);


}

return 0;

    
}

