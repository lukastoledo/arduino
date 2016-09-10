//Programa: Teste de Display LCD 16 x 2
//Autor: FILIPEFLOP
 
//Carrega a biblioteca LiquidCrystal
#include <LiquidCrystal.h>
 
//Define os pinos que serão utilizados para ligação ao display
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup()
{
  //Define o número de colunas e linhas do LCD
  lcd.begin(16, 2);
}
 
void loop()
{
  //Limpa a tela
  lcd.clear();
  showLevel();
  //showCustomMessage();
}

void showLevel(){
  lcd.setCursor(0, 0);
  lcd.print("NIVEL CAIXA");
  lcd.setCursor(3, 1);
  lcd.print("APROX: 100L");
  delay(5000);
}

void showCustomMessage(){
  lcd.setCursor(0, 0);
  lcd.print("ECONOMIZE AGUA");
  lcd.setCursor(3, 1);
  lcd.print("!!!! =) !!!!");
  delay(2000);
}

void animate(){
  //Rolagem para a esquerda
  for (int posicao = 0; posicao < 3; posicao++)
  {
    lcd.scrollDisplayLeft();
    delay(300);
  }
   
  //Rolagem para a direita
  for (int posicao = 0; posicao < 6; posicao++)
  {
    lcd.scrollDisplayRight();
    delay(300);
  }
}
