/*
  NeuroBytes.h - Library for interfacing Arduino with NeuroBytes
  implementing jaronet for Arduino
  */

#ifndef NeuroBytes_h
#define NeuroBytes_h



class NeuroBytes
{
  public:
    NeuroBytes(int pinDAT1, int pinDAT2);
    void SetAxon();
    void SetDendrite();
    void Broadcast();
    void FireActionPotential();
  private:
    int _pinDAT1;
    int _pinDAT2;
};

#endif