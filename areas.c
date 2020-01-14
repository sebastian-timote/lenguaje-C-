#include <stdio.h>
#include <stdlib.h>
#include "interfaceA.h"
#include "areaC.h"
#include "areaR.h"
#include "areaT.h"
#include "areaCir.h"

//void areaCuadrado (strategy *l);
int main(){
    strategy b,a,l,r;
    int opc;
    printf("1. area de cuadrado\n");
    printf("2. area de rectangulo\n");
    printf("3. area de triangulo\n");
    printf("4. area de circulo\n");
	scanf("%i",&opc);
    if(opc==1){
    	areaCuadrado (&l);
    	return;

    }if(opc==2){
    	areaRectangulo(&b,&a);
    	return;
    	
    }if(opc==3){
    	areaTriangulo(&b,&a);
    	return;
    	
    }if(opc==4){
    	areaCirculo(&r);
    	return;
    	
    }else{
    	printf("fail");
    }
    //fflush(stdin);
    return 0;
    }
