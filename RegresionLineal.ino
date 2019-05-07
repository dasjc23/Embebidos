/*            Universidad Técnica del Norte
                           FICA
                          CIERCOM 
                    Sistemas Embebidos

      Juan Carlos Tapia V
      8 de mayo de 2019
      
*/

#include "datos.h"

float sum_x,sum_y,sum_xy,sum_x2;
int col=0;
int fil=0;
float Bo; 
float m;
float ypred[29];
float ypro;
float ypro_real;
float ypro_pred;
float R2;
//  y=mX+Bo

void setup() {
  
  Serial.begin(9600);

}

void loop() {

  for(;fil<29;fil++){
    sum_x=sum_x+matriz[fil][0]; //Ciclo para leer toda la sumatoria
    sum_y=sum_y+matriz[fil][1]; 
    sum_xy=sum_xy+(matriz[fil][0]*matriz[fil][1]);
    sum_x2=sum_x2+pow(matriz[fil][0],2);
    }

  Bo=(sum_x2*sum_y-sum_x*sum_xy)/(29*sum_x2-pow(sum_x,2));
  m=(29*sum_xy-sum_x*sum_y)/(29*sum_x2-pow(sum_x,2));

  Serial.println(Bo);
  Serial.println(m);

  fil=0;
  ypro=sum_y/29;
  
  for(;fil<29;fil++){
      ypred[fil]=m*matriz[fil][0]+Bo;    
    }

  for(fil=0;fil<29;fil++){
    ypro_real=ypro_real+pow(matriz[fil][1]-ypro,2);
    ypro_pred=ypro_pred+pow(ypred[fil]-ypro,2);
    }

    R2=ypro_pred/ypro_real;
    Serial.println(R2);

    delay(5000);

    
}
