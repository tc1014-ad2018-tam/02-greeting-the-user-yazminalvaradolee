/*
 * Este programa esta especializado en
 * darte los buenos dias, tardes o noches dependiendo
 * de la hora que le pongas en un formato de 24 horas.
 *
 * Autora: Yasmin Alvarado Lee
 * Correo: yazminalvlee@gmail.com
 * Fecha: 27 de agosto del 2018
 */

#include <stdio.h>

int main() {
    int day;
    //Aqui le pido al usuario que ponga en inicio
    //una variable
    printf("Inserte la hora actual en formato de 24 horas:\n");
    scanf("%i",&day);
    if(day<=23){
        //Aqui le pido a la computadora que si es menor a 12
        //y mayor que 6 le ponga "Buenos Dias"
        if(day<12&day>=6){
            printf("Good morning!");
        }
        //Aqui le pido a la computadora que si es menor que 19
        //y mayor a 12 me ponga "Buenas Tardes"
        if(day<=19&day>=12){
            printf("Good afternoon!");
        }
        //Aqui si es menor a 22 y mayor a 19
        if(day<=22&day>19){
            printf("Good evening!");
        }
        //Si es menor que 6
        if(day<6){
            printf("Good night!");
        }
        //Si es mayor que 22
        if(day>22){
            printf("Good night!");
        }
//Aqui le pido a la computadora que si el usuario le da una
//una variable mayor o igual a 24 que marque "error"
    }else{
        printf("Error");
    }
    return 0;
}