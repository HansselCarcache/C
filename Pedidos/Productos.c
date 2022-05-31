
Productos prod[30];
ProductosSugeridos prodSugerido[30];
Cliente cliente;
int posicion = 0;
int codigo = 0;
char nombre[];
float precio;
int opcion=0;

char nombreCliente[];
char direccion[];
char tarjeta[];
float totalPago;
float cambio;
float totalCompra;
int prodNum= 0;
int posicionProd=0;
float iva = 0.15;

////////////////////////////REALIZAR PEDIDOS///////////////////////////////////////////
void realizarPedido(){
    
    listaProductos();
    printf("\n\nEscriba el numero del producto que desea comprar: ");
    scanf("%d", &prodNum);
    system("cls");
    printf("---------------SELECCION DE PRODUCTOS------------------");
    printf("\nEl producto que eligio fue: ");
    printf("\n\nCodigo: %d", prod[prodNum-1].codigo);
    printf("\nNombre: %s", prod[prodNum-1].nombre);
    printf("\nPrecio: %0.2f", prod[prodNum-1].precio );

    printf("\n\nPresione 1 para confirmar que este fue el producto que eligio o cualquier tecla para elegir otra vez.\n");
    scanf("%d", &opcion);
        switch(opcion){
            case 1:
            datosPersonales();
            
            
            break;
            default: 
            system("cls");
            realizarPedido();
            break;
        }

}

void datosPersonales(){
    if(strcmp(&cliente.nombre, &"") == 0){
        system("cls");
        printf("----------------DATOS PERSONALES----------------");
        printf("\nIntroduzca sus datos personales:\n");
        printf("Nombre: ");
        scanf(" %[^\n]", &nombreCliente);
        printf("Direccion: ");
        scanf(" %[^\n]", &direccion);
        strcpy(cliente.nombre, nombreCliente);
        strcpy(cliente.direccion, direccion);
        printf("\nDatos personales registrados con exito!\n");
        system("pause");  
    }
   
    formaPago();
}


void formaPago(){
    system("cls");
    posicionProd = posProductosCliente();
    printf("------------------FORMA DE PAGO----------------------");
    printf("\nPrecio producto: %0.2f", prod[prodNum-1].precio);
    totalCompra = (iva*prod[prodNum-1].precio) + prod[prodNum-1].precio;
    printf("\nPrecio producto con IVA: %0.2f", totalCompra);
    printf("\n\nElija una forma de pago: \n");
            printf("1-Tarjeta\n");
            printf("2-Efectivo\n");
            scanf("%d", &opcion);
            if(opcion ==1){
                printf("Escriba su numero de tarjeta: ");
                scanf(" %[^\n]", &tarjeta);
                strcpy(cliente.tarjeta, tarjeta);
                cliente.totalCompra = cliente.totalCompra + totalCompra;
                //SE AGREGA EL PRODUCTO A LA LISTA DEL PRODUCTO QUE HA PEDIDO EL CLIENTE
                cliente.producto[posicionProd].codigo = prod[prodNum-1].codigo;
                strcpy(cliente.producto[posicionProd].nombre,prod[prodNum-1].nombre);
                cliente.producto[posicionProd].precio = prod[prodNum-1].precio;
                //SE AGREGA EL PRODUCTO A LA LISTA DEL PRODUCTO QUE HA PEDIDO EL CLIENTE
                printf("Su pedido se ha realizado con exito!\n");
                system("pause");
                system("cls");
                menu();
            }else if(opcion ==2){
                printf("Con cuanto va a cancelar: ");
                scanf("%f",&totalPago);
                if(totalPago<totalCompra){
                    printf("\nNo ha sido posible realizar el pedido, el precio del producto excede el monto de su pago.\n");
                    system("pause");
                    system("cls");
                    formaPago();
                }else{
                cambio = totalPago - prod[prodNum-1].precio;
                //totalCompra =  prod[prodNum-1].precio;
                
                cliente.totalCompra = cliente.totalCompra + totalCompra;
                //printf("El cambio es de: %0.2f$", cambio);
                //printf("\nEl total de la compra es de: %0.2f$", cliente.totalCompra);
                
                //SE AGREGA EL PRODUCTO A LA LISTA DEL PRODUCTO QUE HA PEDIDO EL CLIENTE
                cliente.producto[posicionProd].codigo = prod[prodNum-1].codigo;
                strcpy(cliente.producto[posicionProd].nombre,prod[prodNum-1].nombre);
                cliente.producto[posicionProd].precio = prod[prodNum-1].precio;
                //SE AGREGA EL PRODUCTO A LA LISTA DEL PRODUCTO QUE HA PEDIDO EL CLIENTE

                //printf("\n%s", cliente.producto[0].nombre);
                printf("Su pedido se ha realizado con exito!\n");
                system("pause");
                system("cls");
                menu();
                }
                
            }
}

//OBTIENE LA POSICION DEL ULTIMO PRODUCTO EN PRODUCTOSCLIENTE
int posProductosCliente(){

int len=sizeof(prod)/sizeof(Productos);
int pos=0;
for(int i=0; i<=len; i++){
    if(cliente.producto[i].codigo == 0 && cliente.producto[i].precio == 0){
        pos=i;
        break;
    }

}

return pos;
}

////////////////////////////FIN REALIZAR PEDIDOS///////////////////////////////////////////

////////////////////////////CRUD PRODUCTOS///////////////////////////////////////////

//MUESTRA TODOS LOS PRODUCTOS

void listaProductos(){
system("cls");
int len=sizeof(prod)/sizeof(Productos);
int pos=0;
printf("-------------------LISTA DE PRODUCTOS---------------------");
for(int i=0; i<len; i++){
    if(prod[i].codigo == 0 && prod[i].precio == 0){
        pos=i;
        break;
    }
    printf("\n\nProducto %d: \n", i+1);
    printf("Codigo: %d", prod[i].codigo);
    printf("\nNombre del producto: %s", prod[i].nombre);
    printf("\nPrecio: %0.2f$", prod[i].precio);
    

}
    
}

//OBTIENE LA POSICION DEL ULTIMO PRODUCTO EN PRODUCTOS
int posProductos(){

int len=sizeof(prod)/sizeof(Productos);
int pos=0;
for(int i=0; i<=len; i++){
    if(prod[i].codigo == 0 && prod[i].precio == 0){
        pos=i;
        break;
    }

}
}


// REGISTRA UN NUEVO PRODUCTO
void registrarProducto(int pos, int cod, char nombre[], float *precios){
    
    
    /*printf("%d", pos);
    printf("\n%d", cod);
    printf("\n%s", nombre);
    printf("\n%0.2f", *precios);*/
    prod[pos].codigo = cod;
    strcpy(prod[pos].nombre, nombre);
    prod[pos].precio = *precios;
    
    
    printf("Se registro el producto con exito!\n");
    system("pause");
    system("cls");
    menuProductos();

}

int buscarProductoXCod(int codigo){
    int len=sizeof(prod)/sizeof(Productos);
    int b = -1;
    for(int i =0; i<len; i++){
        if(codigo == prod[i].codigo){
            b = i;
            return b;
        }
    }
    return b;
}

void modificarProducto(int pos, char nombre[], float *precios){
    
    strcpy(prod[pos].nombre, nombre);
    prod[pos].precio = *precios;
    printf("Registro actualizado!\n");
    system("pause");
    system("cls");
    menuProductos();
    
}

void eliminarProducto(int pos){
    int len=sizeof(prod)/sizeof(Productos);
    for(int i = pos; i<len; i++){
        Productos aux;
        aux.codigo = prod[i+1].codigo;
        strcpy(aux.nombre, prod[i+1].nombre);
        aux.precio = prod[i+1].precio;

        prod[i].codigo = aux.codigo;
        strcpy(prod[i].nombre, aux.nombre);
        prod[i].precio = aux.precio;
        
        prod[i+1].codigo = 0;
        strcpy(prod[i+1].nombre, "");
        prod[i+1].precio = 0;
    }
    printf("Registro eliminado!\n");
    system("pause");
    system("cls");
    menuProductos();    
}

///////////////FIN CRUD PRODUCTOS//////////////////////

///////////////CRUD PRODUCTOS SUGERIDOS//////////////////////

int posProductoSugerido(){

int len=sizeof(prodSugerido)/sizeof(ProductosSugeridos);
int pos=0;
for(int i=0; i<=len; i++){
    if( prodSugerido[i].precio == 0){
        pos=i;
        break;
    }

}
}

//MUESTRA TODOS LOS PRODUCTOS

void listaProductoSugeridos(){
    
    int len=sizeof(prodSugerido)/sizeof(ProductosSugeridos);
    int pos=0;
    if(strcmp(prodSugerido[0].nombre, &"")==0 && prodSugerido[0].precio==0){
        printf("\nNo existen productos sugeridos actualmente.\n");
        system("pause");
        system("cls");
        menuProductos();
    }else{
        system("cls");
        printf("-------------------LISTA DE PRODUCTOS SUGERIDOS---------------------");
        for(int i=0; i<len; i++){
            if(prodSugerido[i].precio == 0){
                pos=i;
                break;
            }
            printf("\n\nProducto %d: \n", i+1);
            printf("\nNombre del producto: %s", prodSugerido[i].nombre);
            printf("\nPrecio aproximado: %0.2f$\n\n", prodSugerido[i].precio);
        

        }
        system("pause");
        system("cls");
        menuProductos();
    }
    
    
}

// REGISTRA UN NUEVO PRODUCTO SUGERIDO
void registrarProductoSugerido(int pos, char nombre[], float *precios){
    
    
    /*printf("%d", pos);
    printf("\n%d", cod);
    printf("\n%s", nombre);
    printf("\n%0.2f", *precios);*/
    
    strcpy(prodSugerido[pos].nombre, nombre);
    prodSugerido[pos].precio = *precios;
    
    printf("\nProducto registrado con exito!\n");
    system("pause");
    system("cls");
    menu();

}

///////////////FIN CRUD PRODUCTOS SUGERIDOS//////////////////////

void menuProductos(){
    listaProductos();
    printf("\n\nElija una opcion\n");
        printf("1-Registrar un producto nuevo\n");
        printf("2-Modificar un producto\n");
        printf("3-Eliminar un producto\n");
        printf("4-Ver productos sugeridos\n");
        printf("5-Regresar al menu\n");
        
        scanf("%d", &opcion);
        opcionesProductos(opcion);
}

void opcionesProductos(int opcion){
     switch(opcion){
            case 1:
            posicion = posProductos();
            system("cls");
            printf("--------------REGISTRAR PRODUCTOS-----------------");
            printf("\nRellene los campos a continuacion: \n");
            printf("Codigo: ");
            scanf("%d", &codigo);
            printf("Nombre del producto: ");
            scanf(" %[^\n]", &nombre);
            printf("Precio del producto: ");
            scanf("%f", &precio);
            registrarProducto(posicion, codigo, nombre, &precio);
            break;
            case 2:
            
            printf("\n\n--------------MODIFICAR PRODUCTOS-----------------");
            printf("\nIngrese el codigo del producto que desea modificar: ");
            scanf("%d", &codigo);
            posicion = buscarProductoXCod(codigo);
            if(posicion !=-1){
                printf("Se modificara el producto de codigo: %d\n", codigo);
                printf("Nuevo nombre del producto: ");
                scanf(" %[^\n]", &nombre);
                printf("Nuevo precio del producto: ");
                scanf("%f", &precio);
                modificarProducto(posicion, nombre, &precio);
            }else{
                printf("El registro no existe. Intente de nuevo\n");
                system("pause");
                system("cls");
                
                menuProductos();
            }
            case 3:
            printf("\n\n--------------ELIMINAR PRODUCTOS-----------------");
            printf("\nIngrese el codigo del producto que desea eliminar: ");
            scanf("%d", &codigo);
            posicion = buscarProductoXCod(codigo);
            if(posicion !=-1){
                eliminarProducto(posicion);
                
            }else{
                printf("El registro no existe. Intente de nuevo\n");
                system("pause");
                system("cls");
                menuProductos();
            }

            break;
            case 4:
            
            listaProductoSugeridos();
            break;
            case 5:
            system("cls");
            menu();
            break;
            default: return 0;
            break;
        }
}


void mostrarFactura(){
    float facturasinIVA =0;
    if(strcmp(&cliente.nombre, &"") == 0){
        printf("No ha realizado ningun pedido hasta el momento!\n");
        system("pause");
        system("cls");
        menu();
    }else{
        system("cls");
        printf("-------------------DATOS DE FACTURA-----------------------");
        printf("\nNOMBRE DEL CLIENTE: %s", cliente.nombre);
        printf("\nDIRECCION: %s\n\n", cliente.direccion);
        int len=sizeof(cliente.producto)/sizeof(Productos);
        int pos=0;
        printf("-------------------LISTA DE PRODUCTOS---------------------");
        for(int i=0; i<len; i++){
            if(cliente.producto[i].codigo == 0 && cliente.producto[i].precio == 0){
                pos=i;
                break;
            }
            printf("\n\nProducto %d: \n", i+1);
            printf("Codigo: %d", cliente.producto[i].codigo);
            printf("\n%s______________________________________________%0.2f$", cliente.producto[i].nombre, cliente.producto[i].precio);
            
        facturasinIVA = facturasinIVA + cliente.producto[i].precio;
    }
        printf("\n\nTOTAL SIN IVA: %0.2f", facturasinIVA);
        printf("\nTOTAL A PAGAR: %0.2f\n", cliente.totalCompra);
        system("pause");
        system("cls");
        menu();
    }
        
}