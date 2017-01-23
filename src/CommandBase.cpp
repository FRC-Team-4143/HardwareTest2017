#include "CommandBase.h"

#include <Commands/Scheduler.h>

#include "Subsystems/ExampleSubsystem.h"

// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.
std::unique_ptr<ExampleSubsystem> CommandBase::exampleSubsystem = std::make_unique<ExampleSubsystem>();
std::unique_ptr<OI> CommandBase::oi = std::make_unique<OI>();
std::unique_ptr<Relay> CommandBase::relay;
std::unique_ptr<CANTalon> CommandBase::steer1;
std::unique_ptr<CANTalon> CommandBase::steer2;
std::unique_ptr<CANTalon> CommandBase::steer3;
std::unique_ptr<CANTalon> CommandBase::steer4;
std::unique_ptr<CANTalon> CommandBase::arm;

CommandBase::CommandBase(const std::string &name)
:	frc::Command(name) {

}
