#ifndef CARKIAENIRO_H
#define CARKIAENIRO_H

#include "CarInterface.h"

class CarKiaEniro : public CarInterface {
  
  private:
    
  public:
    void activateCommandQueue() override;
    void parseRowMerged() override;
    void loadTestData() override;  
};

#endif // CARKIAENIRO_H
