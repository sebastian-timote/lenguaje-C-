
void areaRectangulo(strategy *b,strategy *a){
	printf("rectangulo\n");
	printf("inserte base:");
    scanf("%i",&b->base);
    printf("inserte altura:");
	scanf("%i",&a->altura);
	b->base= a->altura * b->base;
	printf("el area del rectangulo es %i cm2 \n",b->base);
	
}
