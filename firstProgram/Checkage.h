#ifndef H_CHECKAGE
#define H_CHECKAGE

#include <iostream>

class Checkage {
  public:
    // constructor & destructor
    Checkage();
    ~Checkage();

    void setBirthdate(std::string day, std::string month, std::string year);
    std::string getBirthdate();

  private:
    std::string day;
    std::string month;
    std::string year;
};

#endif
