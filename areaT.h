
void areaTriangulo(strategy *b,strategy *a){
	printf("triangulo\n");
	printf("inserte base:");
    scanf("%i",&b->base);
    printf("inserte altura:");
	scanf("%i",&a->altura);
	b->base= (a->altura * b->base)/2;
	printf("el area del triangulo es %i cm2 \n",b->base);
	
}
