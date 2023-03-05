//Autor - Jonatan
//data 5-mar-2023
//Mapa logístico (sistemas dinâmicos) - equação com relação recursiva. Para evolução de da variável. Contém senssibiliade com a condição inicial.
// equação: x_n+1=r*x_n(1-x_n)

#include<stdio.h>
#include<math.h>

int main(){
        FILE *fil;
        double x2,x1,x0,r;
        int n;
        
        char filename[100]="cmapa.dat";

        fil=fopen(filename,"w");
        for(r=2.5;r<=3.99;r=r+0.001){//01 loop de r
        
            for(x0=0.01;x0<=0.99;x0=x0+0.02){//02 loop p/ condição inicial do mapa
                x1=x0; // iniciando o mapa
                for(n=1.;n<=100000;n=n+1){//03 dinâmica do mapa
                    x2=r*x1*(1.-x1);
                    x1=x2;
                }//03
            fprintf(fil,"%13.8f %13.8f\n",r,x1);//x1 = valor do mapa para tempo  longo
            
            }//02
        }//01
return 0;
}
