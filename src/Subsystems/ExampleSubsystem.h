#pragma once

#include <Commands/Subsystem.h>

class ExampleSubsystem: public frc::Subsystem {
public:
	ExampleSubsystem();
	void InitDefaultCommand() override;

private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
};
