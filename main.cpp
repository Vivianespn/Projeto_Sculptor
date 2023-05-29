#include <iostream>
#include"sculptor.hpp"

int main() {
  // programa_exemplo
  // testando todas as funcionalidades
  Sculptor programa_exemplo(20, 20, 20);

  programa_exemplo.setColor(0.8, 1, 0, 1);
  programa_exemplo.putVoxel(0, 0, 0);
  programa_exemplo.putVoxel(1, 1, 1);
  programa_exemplo.cutVoxel(1, 1, 1);

  programa_exemplo.setColor(0, 0.4, 1, 1);
  programa_exemplo.putBox(4, 14, 0, 4, 10, 19);
  programa_exemplo.cutBox(9, 9, 0, 4, 11, 18);

  programa_exemplo.setColor(1, 0, 0.6, 1);
  programa_exemplo.putEllipsoid(9, 2, 3, 5, 2, 3);
  programa_exemplo.cutEllipsoid(11, 2, 3, 5, 2, 3);

  programa_exemplo.setColor(0.5, 0.5, 0.5, 0.5);
  programa_exemplo.putSphere(14, 10, 10, 5);
  programa_exemplo.cutSphere(12, 10, 10, 5);

  // grava a o exemplo no arquivo "programa_exemplo.off"
  programa_exemplo.writeOFF("programa_exemplo.off");
  
  // Dimensões
  int x = 30, y = 37, z = 30;
  
  // a varia auxiliar foi criada pra subir o Kirby e a estrela pois a ideia da nuvem surgiu depois
  int ax = 8;

  // Cor em rgba
  // o d = 255 é para dividir os valores do rgb para ficar na escala de 0.0 á 1
  float d = 255, r, g, b, a = 1;
  
  // Cria um escultor 
  Sculptor Kirby(x, y, z);

  // Cenario

  // Arco-íris
  // red
  r = 255, g = 0, b = 0;
  Kirby.setColor(r/d, g/d, b/d, a); 
  Kirby.putSphere(14, 12, 7, 15);
  // OrangeRed
  r = 255, g = 69, b = 0;
  Kirby.setColor(r/d, g/d, b/d, a); 
  Kirby.putSphere(14, 12, 7, 14);
  // Yellow
  r = 255, g = 255, b = 0;
  Kirby.setColor(r/d, g/d, b/d, a); 
  Kirby.putSphere(14, 12, 7, 13);
  // LawnGreen
  r = 124, g = 252, b = 0;
  Kirby.setColor(r/d, g/d, b/d, a); 
  Kirby.putSphere(14, 12, 7, 12);
  // DeepSkyBlue
  r = 0, g = 191, b = 255;
  Kirby.setColor(r/d, g/d, b/d, a); 
  Kirby.putSphere(14, 12, 7, 11);
  // Blue
  r = 0, g = 0, b = 255;
  Kirby.setColor(r/d, g/d, b/d, a); 
  Kirby.putSphere(14, 12, 7, 10);
  // DarkViolet
  r = 148, g = 0, b = 211;
  Kirby.setColor(r/d, g/d, b/d, a); 
  Kirby.putSphere(14, 12, 7, 9);

  // Cortar arco-iris
  Kirby.cutSphere(14, 12, 7, 8);
  Kirby.cutBox(0, 29, 0, 27, 0, 5);
  Kirby.cutBox(0, 29, 0, 27, 7, 22);
  Kirby.cutBox(0, 29, 0, 6, 6, 6);
  Kirby.cutVoxel(7,8,6);

  // Nuvem  
  // LightBlue
  r = 135, g = 206, b = 235;
  Kirby.setColor(r/d, g/d, b/d, a); 

  Kirby.putSphere(5, 4, 14, 5);
  Kirby.putSphere(5, 3, 17, 4);
  Kirby.putSphere(12, 4, 20, 5);
  Kirby.putSphere(17, 3, 17, 5);
  Kirby.putSphere(21, 3, 19, 4);
  Kirby.putSphere(25, 4, 16, 2);
  Kirby.putSphere(27, 4, 14, 3);
  Kirby.putSphere(7, 5, 13, 5);
  Kirby.putSphere(12, 4, 11, 6);
  Kirby.putSphere(19, 3, 13, 5);
  Kirby.putSphere(8, 4, 6, 3);
  Kirby.putSphere(24, 4, 12, 6);
  Kirby.putSphere(18, 5, 13, 6);
  Kirby.putSphere(12, 4, 11, 4);
  Kirby.putSphere(18, 4, 4, 4);
  Kirby.putSphere(12, 5, 5, 5);
  Kirby.putSphere(24, 6, 7, 5);
  Kirby.putSphere(4, 4, 7, 5);

  // Kirby  

  // Pés
  // DeepPink
  r = 225, g = 20, b = 147;
  Kirby.setColor(r/d, g/d, b/d, a);

  //E
  Kirby.putBox(6, 10, 2+ax, 4+ax, 13, 15);
  Kirby.cutBox(6, 6, 4+ax, 4+ax, 13, 15);
  //D
  Kirby.putBox(18, 22, 2+ax, 4+ax, 13, 15);
  Kirby.cutBox(22, 22, 4+ax, 4+ax, 13, 15);
  Kirby.cutBox(18, 19, 2+ax, 2+ax, 16, 16);
  
  // Corpo
  // LigthPink
  r = 225, g = 182, b = 193;
  Kirby.setColor(r/d, g/d, b/d, a); 
  
  Kirby.putSphere(14, 8+ax, 14, 7);
  Kirby.cutBox(11, 17, 5+ax, 11+ax, 20, 20);
  Kirby.cutVoxel(14, 8+ax, 7);
  Kirby.cutVoxel(14, 8+ax, 21);
  Kirby.cutVoxel(14, 15+ax, 14);
  Kirby.cutVoxel(14, 1+ax, 14);

  // Braço_E
  Kirby.putBox(6, 7, 7+ax, 9+ax, 13, 15);
  Kirby.putBox(6, 7, 10+ax, 10+ax, 14, 14);
  Kirby.putBox(6, 7, 6+ax, 6+ax, 14, 14);
  // Braço_D
  Kirby.putBox(21, 22, 7+ax, 9+ax, 13, 15);
  Kirby.putBox(21, 22, 10+ax, 10+ax, 14, 14);
  Kirby.putBox(21, 22, 6+ax, 6+ax, 14, 14);

  // Rosto
  
  // Boca
  // Crimson
  r = 220, g = 20, b = 60;
  Kirby.setColor(r/d, g/d, b/d, a); 
  Kirby.putBox(14, 14, 5+ax, 6+ax, 19, 19);

  // Olhos
  // Preto
  r = 0, g = 0, b = 0;
  Kirby.setColor(r/d, g/d, b/d, a); 
  //E
  Kirby.putBox(11, 12, 8+ax, 10+ax, 19, 19);
  //D
  Kirby.putBox(16, 17, 8+ax, 10+ax, 19, 19);
  
  // Branco
  r = 255, g = 255, b = 255;
  Kirby.setColor(r/d, g/d, b/d, a); 
  //E
  Kirby.putVoxel(11, 10+ax, 19);
  //D
  Kirby.putVoxel(16, 10+ax, 19);
  
  // DodgerBlue
  r = 30, g = 144, b = 225;
  Kirby.setColor(r/d, g/d, b/d, a); 
  //E
  Kirby.putBox(11, 12, 7+ax, 7+ax, 19, 19);
  //D
  Kirby.putBox(16, 17, 7+ax, 7+ax, 19, 19);

  // Corado
  //Salmon 
  r = 250, g = 128, b = 114;
  Kirby.setColor(r/d, g/d, b/d, a); 
  //E
  Kirby.putBox(10, 11, 6+ax, 6+ax, 19, 19);
  //D
  Kirby.putBox(17, 18, 6+ax, 6+ax, 19, 19);

  // Estrela
  // Gold
  r = 255, g = 215, b = 0;
  Kirby.setColor(r/d, g/d, b/d, a); 

  Kirby.putBox(12, 16, 17+ax, 25+ax, 13, 15);
  Kirby.putBox(10, 11, 17+ax, 23+ax, 13, 15);
  Kirby.putBox(17, 18, 17+ax, 23+ax, 13, 15);
  Kirby.putBox(8, 8, 21+ax, 22+ax, 13, 15);
  Kirby.putBox(20, 20, 21+ax, 22+ax, 13, 15);
  Kirby.putBox(9, 9, 20+ax, 23+ax, 13, 15);
  Kirby.putBox(19, 19, 20+ax, 23+ax, 13, 15);
  Kirby.putBox(13, 15, 26+ax, 26+ax, 13, 15);
  Kirby.putBox(14, 14, 27+ax, 27+ax, 13, 15);
  Kirby.putBox(11, 12, 16+ax, 16+ax, 13, 15);
  Kirby.putBox(16, 17, 16+ax, 16+ax, 13, 15);
  
  // grava a escultura digital no arquivo "Kirby.off"
  Kirby.writeOFF("Kirby.off");

  std::cout << "Pronto";
  
  return 0;
}