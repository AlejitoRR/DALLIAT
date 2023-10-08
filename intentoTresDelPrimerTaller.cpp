#include <stdio.h>
#include <iostream>

char saludo(){
	printf("\n Hola, Bienvenido a supermercado D5 \n");
	printf("\n Te preguntaremos codigo de producto y codigo de tienda \n");
	
}
int descuentos(){
	int precioProducto;
	printf("Escribe el costo monetario del producto ganador para poder hacerte el descuento: \n");
	scanf("%d",&precioProducto);
	int descuento = (precioProducto*20)/100;
	int valorConDescuento = precioProducto - descuento;
	printf("\n El valor Total de su producto es: %d \n",valorConDescuento);

}

double validacionProducto(){
	double codigoProducto;
	while(true){
	printf("\n Digita el codigo del producto que deseas comprar:  \n");
	scanf("%Lf",&codigoProducto);
	/*printf("%Lf",codigoProducto);*/

	if(codigoProducto ==  (double)8949899430){
			printf("FEFEFEFELICIDADES TU PRODUCTO TIENE EL 20 PORCIENTO DE DESCUENTO EN NUESTRAS TIENDAS ");
			double descuento = descuentos();
			break;}
	else if(codigoProducto ==  (double)7653512593){
			printf("FEFEFEFELICIDADES TU PRODUCTO TIENE EL 20 PORCIENTO DE DESCUENTO EN NUESTRAS TIENDAS ");
			double descuento = descuentos();
			break;}
	else if(codigoProducto ==  (double)9383867373){
			printf("FEFEFEFELICIDADES TU PRODUCTO TIENE EL 20 PORCIENTO DE DESCUENTO EN NUESTRAS TIENDAS ");
			double descuento = descuentos();
			break;}
	else if(codigoProducto ==  (double)88392904209){
			printf("FEFEFEFELICIDADES TU PRODUCTO TIENE EL 20 PORCIENTO DE DESCUENTO EN NUESTRAS TIENDAS ");
			double descuento = descuentos();
			break;}
	else if(codigoProducto>=1000000000 and codigoProducto<=9999999999){
	printf("Felicidades, su producto ha sido registrado con exito!.. \n ");
				
	break;}
	
	else{printf("\n UPS! Codigo no valido, asegurate de que sea de 10 DIGITOS e intentalo de nuevo \n");
		continue;}
		
	}
	return(codigoProducto);
}


double validacionTienda(){
	double codigoTienda;
	while(true){
	printf("\n Digita el codigo de la tienda en donde deseas comprar, RECUERDA QUE TODO CODIGO DE NUESTRAS TIENDAS EMPIEZAN CON 20... \n");
	scanf("%Lf",&codigoTienda);
	if(codigoTienda>=20000 and codigoTienda<=20999){
	printf("El codigo de la tienda es RECONOCIDO por tiendas D5 \n");
	break;}
	else{
	printf("El codigo de la tienda NO ES reconocido, RECUERDA USAR LA EXTENSION #20, Intentelo de nuevo");
	continue;}
	
	
	
	}
	return(codigoTienda);
}
/*
/respaldooooooooo*/
int rifitas(double a,double b){
	double sumaVariables = a+b;
	printf("ESTAMOS EVALUANDO SI TU NUMERO PUEDE PARTICIPAR EN LA MEGA RIFA");
	if(sumaVariables == -2147462885.000000){
		printf("\n FELICIDADESS!!! ENTRASTE A PARTICIPAR A NUESTRA FABULOSA RIFA \n");
	}
	else if(sumaVariables == 1653332774){
		printf("\n FELICIDADESS!!! ENTRASTE A PARTICIPAR A NUESTRA FABULOSA RIFA \n");
	}
	else if(sumaVariables == -2147463518.000000 ){
		printf("\n FELICIDADESS!!! ENTRASTE A PARTICIPAR A NUESTRA FABULOSA RIFA \n");
	}
	else if(sumaVariables == 1839251483 ){
		printf("\n FELICIDADESS!!! ENTRASTE A PARTICIPAR A NUESTRA FABULOSA RIFA \n");
	}
	else{
		printf("\n NO CLASIFICASTE A LA RIFA :( \n");
	}
}
	


int main(){
	saludo();
	int productoRegistrado = validacionProducto();
	int tiendaRegistrada = validacionTienda();
	rifitas(productoRegistrado,tiendaRegistrada);
	
	

	

}
