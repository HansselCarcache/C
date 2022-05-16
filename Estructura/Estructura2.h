typedef struct{
    int id;
    char nombre[40];
}carrera;

typedef struct
{
  char id[20];
  char nombre[40];
  char apellidos[40];
  carrera c;
  int edad;
  char cedula[100];
  int anioCurso;
  char email[100];
}estudiante;
