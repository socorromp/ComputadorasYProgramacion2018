struct alumnos
{
	int edad;
	char nombre[60];
	char genero[1];
	char carrera[25];
	char nCuenta[10];
};
typedef struct alumnos ALUMNO;

ALUMNO nuevoAlumno()
{
	ALUMNO tmp;
	printf("Introduce la edad: ");
	scanf("%d",&tmp.edad);
	
	printf("Introduce el nombre: ");
	scanf("%*c%[^\n]",tmp.nombre);
	
	printf("Introduce el genero h/m: ");
	scanf("%*c%[^\n]",&tmp.genero);
	
	printf("Introduce Carrera: ");
	scanf("%*c%[^\n]",tmp.carrera);
	
	printf("Introduce Numero de Cuenta: ");
	scanf("%*c%[^\n]",tmp.nCuenta);
	
	return tmp;
}
