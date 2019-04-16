/*
 *    Juan Carlos Tapia V
 *    Abril 16 de 2019    
 *    
 *    Completar el ejercicio de clase
 * 
 * 
 */

#include "datos.h"

float datos_entrada[5] ={7.3,2.9,6.3,1.8,3}; 

int col; 
int fila = 0;
float promedio;
float distancia;
int k = 3;  // número de vecinos 
float dist_menor[2][3]; // ordenar distancias menores 
int i = 0;
int j;
int x=0;
float aux; 
float aux1; // varaibles auxiliares para ordenamiento del vector
float num_etiquetas[2][3];  //
float respuesta;  // imprimir a la etiqueta ganadora
float mayor=0;


void setup() {
  Serial.begin(9600);
  for (; i < k; i++) { 
    dist_menor[0][i] = 4000 + i;
    dist_menor[1][i] = 0;
  }
  i = 0;

   for(;i<k;i++){
      num_etiquetas[0][i]=i+1;
      num_etiquetas[1][i]=0;
    }
    i=0;
}

void loop() {
  for (; fila < 90; fila++) { //ciclo lectura de filas
    for (col = 0; col < 4; col++) { // ciclo de lectura de columnas
      promedio = promedio + pow(datos_entrada[col] - matriz[fila][col], 2); // eleva al cuadrado
    }
    distancia = sqrt(promedio);   // raiz del promedio
    promedio = 0;   // reinicio de variable
    
    if (distancia < dist_menor[0][k - 1]) { 
      dist_menor[0][k - 1] = distancia;
      dist_menor[1][k-1]=matriz[fila][4];
    }
    //  ordenamiento del vector de menor a mayor
    for (i=0; i < k; i++) { 
        for (j = i + 1; j < k; j++) {
          if (dist_menor[0][i] > dist_menor[0][j]) {
            aux = dist_menor[0][i];
            dist_menor[0][i] = dist_menor[0][j];
            dist_menor[0][j] = aux;

      // etiquetas
      
            aux1 = dist_menor[1][i];
            dist_menor[1][i] = dist_menor[1][j];
            dist_menor[1][j] = aux1;
              
               }}}}

  // determinar el número de cada etiqueta
    for(i=0;i<k;i++){
        for(j=0;j<k;j++){
            if(num_etiquetas[0][i]==dist_menor[1][j]){
              num_etiquetas[1][i]=1+num_etiquetas[1][i];

              }}}
for(;x<k;x++){
    if(num_etiquetas[1][x]>mayor){
        mayor=num_etiquetas[1][x];
        respuesta=num_etiquetas[0][x];
      }
  }

 Serial.println(respuesta);
 delay(5000);
                
              }
