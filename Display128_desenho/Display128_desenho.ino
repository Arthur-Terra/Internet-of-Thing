#include <Wire.h> // Biblioteca para uso do protocolo I2C;
#include <Adafruit_GFX.h> // Biblioteca para manipulação gráfica no display;
#include <Adafruit_SH1106.h> // Biblioteca para operação do driver de controle do display;

#include <Fonts/FreeMono9pt7b.h> // Fonte para alteração do texto;

#define OLED_RESET -1 // Em displays que não possuem pino RESET, é dado o valor -1;

Adafruit_SH1106 display(OLED_RESET); // Declaração da tela com o nome "display";

void setup() {
  Serial.begin(9600);
  display.begin(SH1106_SWITCHCAPVCC, 0x3C); // Inicialização do display com a biblioteca e endereço de hardware do display;
}

void loop() {
  display.clearDisplay(); // Comando para limpar a tela;

  // Desenhando o tabuleiro do jogo da velha
  display.drawLine(42, 0, 42, 64, WHITE); // Linha vertical
  display.drawLine(85, 0, 85, 64, WHITE); // Linha vertical
  display.drawLine(0, 21, 128, 21, WHITE); // Linha horizontal
  display.drawLine(0, 43, 128, 43, WHITE); // Linha horizontal

  // Desenhando "X" e "O"
  display.setFont(&FreeMono9pt7b); // Definir a fonte
  display.setTextColor(WHITE); // Cor do texto
  display.setTextSize(1); // Tamanho do texto

  // Posicionar e desenhar "X" e "O"
  display.setCursor(20, 10); // Posição do "X"
  display.print("X");

  display.setCursor(60, 38); // Posição do "O"
  display.print("O");

  display.setCursor(100, 10); // Posição do "X"
  display.print("X");

  display.setCursor(60, 10); // Posição do "X"
  display.print("X");

  display.setCursor(20, 58); // Posição do "O"
  display.print("O");

  display.display(); // Mostrar informações na tela;
}