//Autor - Jonatan
//data 5-mar-2023
//Cálculo da função exponecial pela expansão de Taylor e pela função da linguagem.
// y(x)=exp{x}=Σ(i=0,inf)x^i/i!=1+Σ(i=1,inf.)x^i/i!≈1+Σ(i=1,j)x^i/i!
//y(x)≈1+Σ(i=1,j)x^i/i!=exp{x}.

#include<stdio.h>
#include<math.h>

int main(){
        FILE *fil,*fil1;
        
        double fat,y,x,dx,ir;
        int i,j;

        char filename[100]="cexaprox.dat"; //exp{x} -- série de Taylor
        char filename1[100]="cexp.dat"; //exp{x} -- pela função

        fil=fopen(filename,"w");
        fil1=fopen(filename1,"w");

        dx=0.1;
        j=5;
        
        //O loop deve ser feito na variável x. Esta variável que vai "correr" no Σ.
        for(x=(0.);x<=2.;x=x+dx){//0 loop em x

            y=1.;
            fat=1.;

                for(i=1;i<=j;i=i+1){//1 loop em i
                    
                    ir=(double)i;//Transformando i "inteiro" em "real"               
                    fat=fat*ir;//Fatorial de i
                   
                    
                    y=y+pow(x,ir)/fat;

                }//1 loop em i
        
        fprintf(fil,"%13.8f %13.8f\n",x,y);//Solução numérica
        fprintf(fil1,"%13.8f %13.8f\n",x,exp(x));//Solução pela função da linguagem (fil1)
        }//0 loop em x
return 0; }//end program
