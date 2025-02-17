/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_SERVICE_LINKATTACHERSERVER_H
#define YARP_THRIFT_GENERATOR_SERVICE_LINKATTACHERSERVER_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

namespace GazeboYarpPlugins {

class LinkAttacherServer :
        public yarp::os::Wire
{
public:
    // Constructor
    LinkAttacherServer();

    /**
     * Enable/disables gravity for a model
     * @param model_name name that identifies model in gazebo (that are already spawned in gazebo)
     * @param enable 1 to enable gravity, 0 otherwise
     * @return returns true or false on success failure
     */
    virtual bool enableGravity(const std::string& model_name, const bool enable);

    /**
     * Attach any link of the models spawned in gazebo to a link of the robot using a fixed joint.
     * @param model_name name that identifies model in gazebo (that are already spawned in gazebo)
     * @param model_link_name name of a the link in the model you want to attach to the robot
     * @param robot_name name of the robot
     * @param robot_link_name name of the robot link to which you want to attached the model link
     * @return true if success, false otherwise
     */
    virtual bool attachUnscoped(const std::string& model_name, const std::string& model_link_name, const std::string& robot_name, const std::string& robot_link_name);

    /**
     * Detach the model link which was previously attached to the robot link through a fixed joint.
     * @param model_name name that identifies model in gazebo (that are already spawned in gazebo)
     * @param model_link_name name of a the link in the model that is attached to the robot
     * @return true if success, false otherwise
     */
    virtual bool detachUnscoped(const std::string& model_name, const std::string& model_link_name);

    // help method
    virtual std::vector<std::string> help(const std::string& functionName = "--all");

    // read from ConnectionReader
    bool read(yarp::os::ConnectionReader& connection) override;
};

} // namespace GazeboYarpPlugins

#endif // YARP_THRIFT_GENERATOR_SERVICE_LINKATTACHERSERVER_H
