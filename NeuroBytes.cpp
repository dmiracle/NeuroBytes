/* 
    nblib.cpp -- library for communicating between Arduino and NeuroBytes
*/
#include "NeuroBytes.h"

NeuroBytes::NeuroBytes(int pinDAT1, int pinDAT2)
{
    int _dat1 = pinDAT1;
    int _dat2 = pinDAT2;
}

void NeuroBytes::SetAxon()
{
    digitalWrite(_dat1, LOW)
    digitalWrite(_dat2, HIGH)
}
void NeuroBytes::SetDendrite()
{
    digitalWrite(_dat1, HIGH)
    digitalWrite(_dat2, HIGH)
}
void NeuroBytes::Broadcast()
{

}
void NeuroBytes::FireActionPotential()
{

}
void NeuroBytes::NIDKeepAlive()
{
    byte _bin = 0b10001000;
}
void NeuroBytes::NIDChangeParameter()
{
    byte _bin = 0b10000100;
    byte[3] _data;
}
void NeuroBytes::NIDPing()
{
    byte _bin = 0b11000000;
}
void NeuroBytes::NIDSelectNeurobyte()
{
    byte _bin = 0b10000100;
    byte[1] _data;
}