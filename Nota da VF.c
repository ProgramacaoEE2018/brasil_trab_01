#include <stdio.h>

int main(){
    int nVE, i;
    float ve[50], mediave, soma=0, vc, vf;


    printf("Quantas VE's voce fez?\n");
    scanf("%d",&nVE);

    for(i=0;i<nVE;i++){
        printf("Quanto voce tirou na VE%d?\n",i+1);
        scanf("%f",&ve[i]);
    }
    printf("Qual sua nota de VC?\n");
    scanf("%f",&vc);

    for(i=0;i<nVE;i++){
    soma=soma+ve[i];
    }
    mediave=soma/nVE;
    vf=(20-mediave-vc)/2;

    if(vf<=4.0){
        printf("Voce soh precisa tirar 4.00 na VF");
        }
    else{
        printf("Voce precisa tirar %.2f na VF",vf);
        }
}
