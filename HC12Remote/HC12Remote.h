#ifndef REMOTEHC12_H
#define REMOTEHC12_H

#include "Arduino.h"
#include <String.h>
#include <SoftwareSerial.h>




class hc12{
private:
	int _TX;
	int _RX;
	int _id;
public:
	hc12(const int RX, const int TX, int id);
	void connect();
	void PinMode(const int pino, String str);
	void DigitalWrite(const int pino, String str);
	void Virtual(const int pino, String str);
	int ReadVirtual(const int pino);
	void WriteVirtual(const int pino, String str);
};

class LocalHC12{
private:
	//SoftwareSerial hc(10,11);
	int id;
public:
	LocalHC12(const int RX, const int TX, int id);
	void connect();
	void update();

};

#endif

