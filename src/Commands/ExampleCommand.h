#pragma once

#include "../CommandBase.h"

class ExampleCommand: public CommandBase {
public:
	ExampleCommand();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};
