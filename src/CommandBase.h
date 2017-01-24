#pragma once

#include <memory>
#include <string>

#include <WPILib.h>
#include <Commands/Command.h>
#include <CANTalon.h>
#include <AHRS.h>

#include "OI.h"
#include "Subsystems/ExampleSubsystem.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use
 * CommandBase::exampleSubsystem
 */
class CommandBase: public frc::Command {
public:
	CommandBase(const std::string& name);
	CommandBase() = default;

	// Create a single static instance of all of your subsystems
	static std::unique_ptr<ExampleSubsystem> exampleSubsystem;
	static std::unique_ptr<OI> oi;
	static std::unique_ptr<Relay> relay;
	static std::unique_ptr<CANTalon> steer1;
	static std::unique_ptr<CANTalon> steer2;
	static std::unique_ptr<CANTalon> steer3;
	static std::unique_ptr<CANTalon> steer4;
	static std::unique_ptr<CANTalon> arm;
	static std::unique_ptr<AHRS> gyro;
};
