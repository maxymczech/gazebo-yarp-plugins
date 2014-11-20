/*
 * Copyright (C) 2007-2014 Istituto Italiano di Tecnologia. RBCS Department.
 * Author: Francesco Romano
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 */

#include "ClockServer.h"

namespace gazebo {
    
    class GazeboYarpClock;
    
class ClockServerImpl : public ClockServer {
public:
    
    ClockServerImpl(GazeboYarpClock& clockPlugin);
    
    virtual void pauseSimulation();
    virtual void continueSimulation();
    virtual void stepSimulation(const int32_t numberOfSteps = 1);
    
private:
    
    GazeboYarpClock& m_clock;
};

}
