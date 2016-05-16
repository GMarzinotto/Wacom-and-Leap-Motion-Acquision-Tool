#pragma once
#include <iostream>
#include <fstream>
#include "Leap.h"
#include <stdio.h>
#include <time.h>
#include <Windows.h>

using namespace Leap;

enum class TypeLeap { Hand, Tool };

//int runLeapRecorder(/*TypeLeap*/ SampleListener, Controller);

class SampleListener : public Listener {
public:
	FILE *outfile;
	TypeLeap type;
	int64_t initTime;
	bool starting;
	virtual void onInit(const Controller&);
	virtual void onConnect(const Controller&);
	virtual void onDisconnect(const Controller&);
	virtual void onExit(const Controller&);
	virtual void onFrame(const Controller&);
	virtual void onFocusGained(const Controller&);
	virtual void onFocusLost(const Controller&);
	virtual void onDeviceChange(const Controller&);
	virtual void onServiceConnect(const Controller&);
	virtual void onServiceDisconnect(const Controller&);

private:
};