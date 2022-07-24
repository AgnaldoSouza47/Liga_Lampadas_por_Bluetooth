/*CONTROLE DAS LAMPADAS POR BLUETOOTH ATRAVÉS DO APLICATIVO DE CELULAR 
CRIADO NO APP INVENTOR PROJETO PESSOAL NÃO PUBLICADO
AUTOR AGUINALDO,TÉCNICO EM MECATRÔNICA 06/08/2020 HORARIO AS 19:20 MIN */
#include <SoftwareSerial.h>
    #define sala 2   // lampada da sala no pino 2 digital
    #define cozinha 3 // lampada da cozinha  pino 3 digital
   #define varanda 4 // lampada da varanda  pino 4 digital
   #define quintal 5   // lampada da quintal pino 5 digital
   // 0,1 0=RX 1=TX
SoftwareSerial Reles (0,1); // 10= RX E TX=11 no arduino
                      //    TXD MODULO = RX pino '0'zero  do arduino
                     //    RXD MODULO = TX pino '1'zero  do arduino
void setup() {
   Serial.begin(9600);
   Reles.begin(9600);
     pinMode(sala,OUTPUT);         // Lampada da sala saida
       pinMode(cozinha,OUTPUT);  // Lampada da cozinha saida
     pinMode(varanda,OUTPUT); //Lampada da varanda  saida
       pinMode(quintal,OUTPUT); // Lampada do quintal saida
                    
}

void loop() {
    if (Serial.available()){
    
  char Reles = Serial.read();
             if (Reles=='A'){
            digitalWrite (sala,HIGH);    //Lampada da sala ligada
             } 
             if (Reles=='B');  //Caractere  enviado
               digitalWrite(sala,LOW);  //Lampada da sala desligada
               }                        
                   if (Reles=='C'){
                  digitalWrite (cozinha,HIGH);   //Lampada da Cozinha ligada
                  }
                  if (Reles=='D'){;             //Caractere  enviado
                    digitalWrite(cozinha,LOW);  //Lampada da Cozinha desligada
                    }  
                                                                            
                         if (Reles=='E'){
               digitalWrite (quintal,HIGH);  //Lampada da varanda ligada
               }
                       if (Reles=='F'){;     //Caractere enviado
                        digitalWrite(quintal,LOW);  //Lampada da varanda desligada
                       }
                     if (Reles=='G'){
                             digitalWrite (varanda,HIGH);  //Lampada do Quintal ligada
                              } 
                          if (Reles=='H'){; //Caractere  enviado
                             digitalWrite(varanda,LOW);  //Lampada do Quintal DESligada
                               Serial.println(Reles);

                         delay(250);
                           }
                      
     }
           
          
    
     
      
