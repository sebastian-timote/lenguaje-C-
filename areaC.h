
void areaCuadrado (strategy *l){
	printf("cuadrado\n");
	printf("inserte lado:");
    scanf("%i",&l->lado);
    l->lado = pow(l->lado,2);
	printf("el area del cuadrado es %i cm2\n",l->lado);
	
}
