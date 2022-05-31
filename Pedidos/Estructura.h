typedef struct 
{
    int codigo;
    char nombre[50];
    float precio;
}Productos;

typedef struct 
{
    char nombre[50];
    float precio;
}ProductosSugeridos;


typedef struct 
{
    char nombre[60];
    char direccion[100];
    char tarjeta[20];
    float totalCompra;
    Productos producto[30];
}Cliente;

