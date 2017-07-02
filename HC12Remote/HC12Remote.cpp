#include "HC12Remote.h"
#include <String.h>
#include <SoftwareSerial.h>

hc12::hc12(const int RX, const int TX, int id){
	 this->_TX = TX;
	 this->_RX = RX;
	 this->_id = id;
}


void hc12::connect(){
	SoftwareSerial hc (_RX, _TX);
	hc.begin(9600);
	/*long tempoInicial = millis();
	//hc.write(1);
	int resposta;
	while(millis() - tempoInicial() < 5000){
		if(hc.available()){
			resposta = hc.read();
			hc.write()
		}
	}*/
}

void hc12::PinMode(const int pino, String str){
	pinMode(pino, str);
}

void hc12::DigitalWrite(const int pino, String str){


}

void hc12::Virtual(const int pino, String str){


}


int hc12::ReadVirtual(const int pino){
	return 0;

}

void hc12::WriteVirtual(const int pino, String str){


}