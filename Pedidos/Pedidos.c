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
////////////////////////////FIN REALIZAR PEDIDOS///////////////////////////////////////////