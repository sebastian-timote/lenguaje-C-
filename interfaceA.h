
typedef struct{
	int base;
	int altura;
	int lado;
	float radio;
	
}strategy;
void areaCuadrado(strategy*l);
void areaRectangulo(strategy *b,strategy *a);
void areaTriangulo(strategy *b,strategy *a);
void areaCirculo(strategy *r);

