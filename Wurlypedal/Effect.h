#ifndef EFFECT_H
#define EFFECT_H

#include <iostream>

// Base class
class Effect
{
public:
  Effect();
  ~Effect();
  virtual void process(int frames, int channels, float **buffer);

private:

}; // class Effect

#endif
