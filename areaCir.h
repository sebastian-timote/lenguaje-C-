
#define PI 3.1416
void areaCirculo (strategy *r){
	printf("circulo\n");
	printf("inserte radio:");
    scanf("%g",&r->radio);
    r->radio = PI * pow(r->radio,2);
	printf("el area del circulo es %g cm2\n",r->radio);
	
}
