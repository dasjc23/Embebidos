/*            Universidad Técnica del Norte
                           FICA
                          CIERCOM 
                    Sistemas Embebidos

      Juan Carlos Tapia V
      8 de mayo de 2019
      
*/

#include "datos.h"

float sumaX,sumaY,sumaXY,sumaX2;
float Bo,pendiente; 
float Ypred[29];
float Ypro;
float Ypro_real;
float Ypro_pred;
float R2;
int i=0;
int j=0;

void setup() {  
Serial.begin(9600);

}

void loop() {
  for(;j<29;j++){
      sumaX += matriz[j][0]; 
      sumaY += matriz[j][1]; 
      sumaXY += matriz[j][0]*matriz[j][1];
      sumaX2 += pow(matriz[j][0],2);
    }

Bo=(sumaX2*sumaY-sumaX*sumaXY)/(29*sumaX2-pow(sumaX,2));
pendiente=(29*sumaXY-sumaX*sumaY)/(29*sumaX2-pow(sumaX,2));

  j=0;
  Ypro=sumaY/29;
  
  for(;j<29;j++){
      Ypred[j]=pendiente*matriz[j][0]+Bo;    
    }

  for(j=0;j<29;j++){
    Ypro_real +=pow(matriz[j][1]-Ypro,2);
    Ypro_pred +=pow(Ypred[j]-Ypro,2);
    }

    R2=Ypro_pred/Ypro_real;
    Serial.println(R2);

    delay(5000);

    
}
