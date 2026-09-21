#include<iostream>

//Clima
struct Clima{
    int id_clima;
    char fecha_unico[50+1];
    int rango_temperatura[3];
    char tipo_clima[20+1];
    float agua_caida_dia;
};
//Movimientos Sismicos
struct Mov_sismicos{
    int id_mov_sismico;
    char fecha_no_unico[50+1];
    char pais_mov_sismico[30+1];
    float latitud;
    float longitud;
    float magnitud;
};
//Datos físicos para caballos en hipodromo
struct Caballos_datos{
    int id_dato_caballo;
    char nombre_caballo[20+1];
    int id_caballo;
    int velocidad_max_registrada;
    float peso;
    float tamanio_herradura;
    char ultima_carrera[100+1];
};


//Un tinfo para los 3 structs
//falta un cuarto struct
struct Tinfo{
    Clima clima;
    Mov_sismicos mov_sismicos;
    Caballos_datos caballos_datos;
};

struct Nodo{
    Tinfo info;
    Nodo* sgte;
};

int main(){

    return 0;
}