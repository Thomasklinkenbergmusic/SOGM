#ifndef WAVESHAPER_H
#define WAVESHAPER_H

#include "Effect.h"

class Waveshaper : public Effect
{
public:
  Waveshaper();
  ~Waveshaper();
  void process(int frames, int channels, float **buffer);

private:
  float **buffer;
}; // class Waveshaper

#endif
