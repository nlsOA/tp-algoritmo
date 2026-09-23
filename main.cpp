#include<iostream>
using namespace std;

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

struct Peliculas{
    int id_pelicula;
    char nombre[30+1];
    float rating;

};


//Un tinfo para los 3 structs
//falta un cuarto struct
struct Tinfo{
    Clima clima;
    Mov_sismicos mov_sismicos;
    Caballos_datos caballos_datos;
    Peliculas peliculas;
};

struct Nodo{
    Tinfo info;
    Nodo* sgte;
};

/*

1. Una consulta por id de dato, la cual tiene que devolver todo lo que incluya ese
dato

2. Para el clima, poder consultar los días catastróficos (Temperaturas extremas o
situaciones extremas) y devolver el promedio de temperatura de estos días
Las temperaturas extremas son mayores a 40 grados Celsius y menores a -10
grados Celsius y las situaciones extremas son granizo y diluvio (más de 100
milímetros en 24 horas) . Para esta consulta deben subir los datos a una
estructura dinámica definida por ustedes.

3. Para los movimientos sísmicos, hacer un top 3 de los lugares con más
movimientos sísmicos y dar un promedio de magnitudes de estos movimientos
por pais.

4. Para la tercera categoría, devolver todo separado por categorías (Ponis, caballos
ligeros, caballos deportivos, etc) y ordenar por velocidades de mayor a menor

5. Para las primeras tres categorías, hacer dos consultas que mezclen datos entre
si para resolverlas, por ejemplo: Cuales son las mayores velocidades de los
caballos los días catastróficos y hacer una lista con tales valores para guardarlo
en un archivo.

6. Para la última categoría personalizada, hacer la consulta por id de dato y
realizar tres consultas más, de las cuales dos tienen que ser solo relacionado
con alguna de las propiedades y la ultima tiene que mezclar con otras del
mismo modo que el punto anterior.


*/
void Menu(){
    int valor_menu = 0;

    cout << "Bienvenido a Claudio Super GePeTo 3000";
    cout << "Seleccione una opcion para continuar :D";

    cout << endl;
    
    cout << "1) Consulta por ID";
    cout << "2) Consultar datos catastroficos";
    cout << "3) Consultar movimientos sismicos";
    cout << "4) Velocidades caballos";
    cout << "5) (Categoria por definir)";
    cout << "6) (Categoria por corregir)";

    cin >> valor_menu;

    while(valor_menu < 0 && valor_menu > 6){
        cout << "Valor fuera de rango, ingrese otro valor";
        cin >> valor_menu;
    }

    if(valor_menu == 1){
        
        //consulta_por_Id();
        //if(consultar_continuidad()){
        //  Menu();
        //}
        //

    }
    
}

int main(){
    //Tenemos que hacer un menu para elegir una de las opciones propuestas por la profesora
    Menu();

    return 0;
}