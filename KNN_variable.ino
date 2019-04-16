/*
 *    Juan Carlos Tapia V
 *    Abril 16 de 2019    
 *    
 *    Completar el ejercicio de clase
 * 
 * 
 */




#include "datos.h"

int col; 
int fila = 0;
float datos_entrada[5] ={5.4,3.4,1.7,0.2,1}; 
float promedio;
float distancia;
int k = 3; 
float dist_menor[2][3]; 
int i = 0;
int j = 0;
float aux; 
int aux1;
int eti;

void setup() {
  Serial.begin(9600);
  for (; i < k; i++) { 
    dist_menor[0][i] = 4000 + i;
    dist_menor[1][i] = 0;
  }
  i = 0;
}

void loop() {
  for (; fila < 90; fila++) {
    for (col = 0; col < 4; col++) {
      promedio = promedio + (pow(datos_entrada[col] - matriz[fila][col], 2)); 
    }
    distancia = sqrt(promedio); 
    promedio = 0;
    if (distancia < dist_menor[0][k - 1]) { 
      dist_menor[0][k - 1] = distancia;
    }
    for (; i < k; i++) { 
      for (j = i + 1; j < k; j++) {
        if (dist_menor[0][i] > dist_menor[0][j]) {
          aux = dist_menor[0][i];
          dist_menor[0][i] = dist_menor[0][j];
          dist_menor[0][j] = aux;
      
          aux1 = dist_menor[1][i];
          dist_menor[1][i] = dist_menor[1][j];
          dist_menor[1][j] = aux1;
                 
        }
      }

if (dist_menor[0][i] > dist_menor[0][j]){
  eti=dist_menor[0][j];
  eti=matriz[i][col];

  }
    else {    
      if (dist_menor[0][j] > dist_menor[1][j]){
  eti=dist_menor[1][j];
  eti=matriz[i][col];
     
      }}
Serial.println(eti); 

  }
    }
  }
