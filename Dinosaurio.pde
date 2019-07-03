/*        UNIVERSIDAD TÉCNICA DEL NORTE
                    FICA
                   CIERCOM
               Sistemas Embebidos

Juan Carlos Tapia Vivero


*/



int x=0;
int t=2;

void setup(){

size(700,700);  // tamaño de interfaz


}

void draw(){
  background(0);  //RGB
  
 
  
if(x<660){
  fill(255,0,0);
beginShape();

vertex(t*8+x,t*20);
vertex(t*4+x,t*20);
vertex(t*4+x,t*34);
vertex(t*6+x,t*34);
vertex(t*6+x,t*36);
vertex(t*8+x,t*36);
vertex(t*8+x,t*38);
vertex(t*10+x,t*38);
vertex(t*10+x,t*40);
vertex(t*12+x,t*40);
vertex(t*12+x,t*42);
vertex(t*14+x,t*42);
vertex(t*14+x,t*52);
vertex(t*18+x,t*52);
vertex(t*18+x,t*50);
vertex(t*16+x,t*50);
vertex(t*16+x,t*46);
vertex(t*18+x,t*46);
vertex(t*18+x,t*44);
vertex(t*20+x,t*44);
vertex(t*20+x,t*42);
vertex(t*22+x,t*42);
vertex(t*22+x,t*44);
vertex(t*24+x,t*44);
vertex(t*24+x,t*52);
vertex(t*28+x,t*52);
vertex(t*28+x,t*50);
vertex(t*26+x,t*50);
vertex(t*26+x,t*42);
vertex(t*28+x,t*42);
vertex(t*28+x,t*40);
vertex(t*30+x,t*40);
vertex(t*30+x,t*36);
vertex(t*32+x,t*36);
vertex(t*32+x,t*28);
vertex(t*36+x,t*28);
vertex(t*36+x,t*32);
vertex(t*38+x,t*32);
vertex(t*38+x,t*26);
vertex(t*32+x,t*26);
vertex(t*32+x,t*22);
vertex(t*40+x,t*22);
vertex(t*40+x,t*20);
vertex(t*32+x,t*20);
vertex(t*32+x,t*18);
vertex(t*42+x,t*18);
vertex(t*42+x,t*10);
vertex(t*40+x,t*10);
vertex(t*40+x,t*8);
vertex(t*26+x,t*8);
vertex(t*26+x,t*10);
vertex(t*24+x,t*10);
vertex(t*24+x,t*22);
vertex(t*22+x,t*22);
vertex(t*22+x,t*24);
vertex(t*20+x,t*24);
vertex(t*20+x,t*26);
vertex(t*18+x,t*26);
vertex(t*18+x,t*28);
vertex(t*16+x,t*28);
vertex(t*16+x,t*30);
vertex(t*12+x,t*30);
vertex(t*12+x,t*28);
vertex(t*10+x,t*28);
vertex(t*10+x,t*26);
vertex(t*8+x,t*26);
vertex(t*8+x,t*20);

endShape();  


fill(0,0,0);
beginShape();

vertex(t*30+x,t*12);
vertex(t*32+x,t*12);
vertex(t*32+x,t*10);
vertex(t*30+x,t*10);

endShape();  
  
  
  x=x+2;

} 



  

  
}


void keyPressed(){
  
  if(x<660){
  fill(255,0,0);
beginShape();

vertex(80+x,200+x);
vertex(40+x,200+x);
vertex(40+x,340+x);
vertex(60+x,340+x);
vertex(60+x,360+x);
vertex(80+x,360+x);
vertex(80+x,380+x);
vertex(100+x,380+x);
vertex(100+x,400+x);
vertex(120+x,400+x);
vertex(120+x,420+x);
vertex(140+x,420+x);
vertex(140+x,520+x);
vertex(180+x,520+x);
vertex(180+x,500+x);
vertex(160+x,500+x);
vertex(160+x,460+x);
vertex(180+x,460+x);
vertex(180+x,440+x);
vertex(200+x,440+x);
vertex(200+x,420+x);
vertex(220+x,420+x);
vertex(220+x,440+x);
vertex(240+x,440+x);
vertex(240+x,520+x);
vertex(280+x,520+x);
vertex(280+x,500+x);
vertex(260+x,500+x);
vertex(260+x,420+x);
vertex(280+x,420+x);
vertex(280+x,400+x);
vertex(300+x,400+x);
vertex(300+x,360+x);
vertex(320+x,360+x);
vertex(320+x,280+x);
vertex(360+x,280+x);
vertex(360+x,320+x);
vertex(380+x,320+x);
vertex(380+x,260+x);
vertex(320+x,260+x);
vertex(320+x,220+x);
vertex(400+x,220+x);
vertex(400+x,200+x);
vertex(320+x,200+x);
vertex(320+x,180+x);
vertex(420+x,180+x);
vertex(420+x,100+x);
vertex(400+x,100+x);
vertex(400+x,80+x);
vertex(260+x,80+x);
vertex(260+x,100+x);
vertex(240+x,100+x);
vertex(240+x,220+x);
vertex(220+x,220+x);
vertex(220+x,240+x);
vertex(200+x,240+x);
vertex(200+x,260+x);
vertex(180+x,260+x);
vertex(180+x,280+x);
vertex(160+x,280+x);
vertex(160+x,300+x);
vertex(120+x,300+x);
vertex(120+x,280+x);
vertex(100+x,280+x);
vertex(100+x,260+x);
vertex(80+x,260+x);
vertex(80+x,200+x);

endShape();  


fill(0,0,0);
beginShape();

vertex(300+x,120);
vertex(320+x,120);
vertex(320+x,100);
vertex(300+x,100);

endShape();  
  
  
  x=x+2;

} 

  


}
