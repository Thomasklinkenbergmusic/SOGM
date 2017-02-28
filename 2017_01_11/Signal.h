// filePlayer
// Signal.h
//
// created by Thomas Klinkenberg
// copyright (c) 2017 Thomas Klinkenberg. All rights reserverd.

#ifndef SIGNAL_H
#define SIGNAL_H

#include <iostream>
#include <cmath>
#include <bear/Audio/File.hpp>

class Signal {
  public:
    //constructor & destructor
    Signal(std::string fileName);
    virtual ~Signal();

    void play();
    std::string getFile();

  private:
    std::string fileName;
}; // Signal class

#endif
