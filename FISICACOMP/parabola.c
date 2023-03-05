//Autor - Jonatan
//data 2-mar-2023
//Plotar a função   y(x)=ax²+bx+c

#include<stdio.h>
#include<math.h>

int main(){
        FILE *fil; //arquivo de saída - ponteiro
        double y,x,a,b,c,dx;
        
        char filename[100]="cparabola.dat"; //Nome do arquivo
        
         fil=fopen(filename,"w"); //Escrever no arquivo

         a=1.;
         b=0.1;
         c=-1.;
         dx=0.2;

         for(x=-2.0;x<=2.0;x=x+dx){
            
            y=a*(x*x)+b*x+c;
            //y=a*(pow(x,2.))+b*x+c; //função potencia em C

            fprintf(fil,"%13.8f %13.8f\n",x,y);


}

return 0;

    
}

