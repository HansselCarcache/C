#include "Estructura.h"
#include <string.h>
Cliente clientes[100];
int pos;

int guardarCliente(int id, char nombre[], float saldo){
    clientes[pos].id = id;
    strcpy(clientes[pos].nombre, nombre);
    clientes[pos].saldo = saldo;
    return 1;
}

int editarCliente(int id, char nombre[], float saldo){
    return 1;
}

int eliminarCliente(int id){
    return 1;
}

int clienteExiste(int id){
    for(int i = 0; i<pos; i++){
        if(id == clientes[pos].id){
            return 1;
        }
    }
}
