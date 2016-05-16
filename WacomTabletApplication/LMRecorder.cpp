#include "LMRecorder.h"

using namespace Leap;

const std::string fingerNames[] = { "Thumb", "Index", "Middle", "Ring", "Pinky" };
const std::string boneNames[] = { "Metacarpal", "Proximal", "Middle", "Distal" };
const std::string stateNames[] = { "STATE_INVALID", "STATE_START", "STATE_UPDATE", "STATE_END" };

void SampleListener::onInit(const Controller& controller) {
	std::cout << "Initialized" << std::endl;
}

void SampleListener::onConnect(const Controller& controller) {
	std::cout << "Connected" << std::endl;
	controller.enableGesture(Gesture::TYPE_CIRCLE);
	controller.enableGesture(Gesture::TYPE_KEY_TAP);
	controller.enableGesture(Gesture::TYPE_SCREEN_TAP);
	controller.enableGesture(Gesture::TYPE_SWIPE);
	outfile = fopen("lastRecording.txt", "w");
	starting = true;
	//fprintf(outfile, "asdgasdgasdg");
}

void SampleListener::onDisconnect(const Controller& controller) {
	// Note: not dispatched when running in a debugger.
	std::cout << "Disconnected" << std::endl;
	fclose(outfile);
}

void SampleListener::onExit(const Controller& controller) {
	std::cout << "Exited" << std::endl;
}

void SampleListener::onFrame(const Controller& controller) {
	// Get the most recent frame and report some basic information
	const Frame frame = controller.frame();
	

	if ((frame.tools().count() == 1) && (type == TypeLeap::Tool)) {

		if (starting) { 
			initTime = frame.timestamp(); 
			starting = false;
		}

		Tool tool = frame.tools()[0];

		fprintf(outfile, "%d;", frame.timestamp()- initTime);
		fprintf(outfile, "%f;%f;%f;", tool.tipPosition().x, tool.tipPosition().y, tool.tipPosition().z);
		fprintf(outfile, "%f;%f;%f;", tool.direction().x,   tool.direction().y,   tool.direction().z);
		fprintf(outfile, "%f;%f;%f",  tool.tipVelocity().x, tool.tipVelocity().y, tool.tipVelocity().z);
		fprintf(outfile, "\n");

	}

	if ((frame.hands().count() == 1) && (type == TypeLeap::Hand)) {
	

		if (starting) {
			initTime = frame.timestamp();
			starting = false;
		}

		Hand hand = frame.hands()[0];
		Arm  arm = hand.arm();
		const Vector normal = hand.palmNormal();
		const Vector direction = hand.direction();

		fprintf(outfile, "%d", frame.timestamp()- initTime);
		fprintf(outfile, ";%f;%f;%f", hand.palmPosition().x, hand.palmPosition().y, hand.palmPosition().z);
		fprintf(outfile, ";%f;%f;%f", hand.palmNormal().x, hand.palmNormal().y, hand.palmNormal().z);
		fprintf(outfile, ";%f;%f;%f", direction.pitch() , direction.roll() , direction.yaw());
		fprintf(outfile, ";%f;%f;%f", arm.direction().x, arm.direction().y, arm.direction().z);
		fprintf(outfile, ";%f;%f;%f", arm.wristPosition().x, arm.wristPosition().y, arm.wristPosition().z);
		fprintf(outfile, ";%f;%f;%f", arm.elbowPosition().x, arm.elbowPosition().y, arm.elbowPosition().z);

		const FingerList fingers = hand.fingers();
		for (FingerList::const_iterator fl = fingers.begin(); fl != fingers.end(); ++fl) {
			const Finger finger = *fl;
			fprintf(outfile, ";%f;%f", finger.length(), finger.width());

			// Get finger bones
			for (int b = 0; b < 4; ++b) {
				Bone::Type boneType = static_cast<Bone::Type>(b);
				Bone bone = finger.bone(boneType);
				fprintf(outfile, ";%f;%f;%f", bone.prevJoint().x, bone.prevJoint().y, bone.prevJoint().z);
				fprintf(outfile, ";%f;%f;%f", bone.nextJoint().x, bone.nextJoint().y, bone.nextJoint().z);
				fprintf(outfile, ";%f;%f;%f", bone.direction().x, bone.direction().y, bone.direction().z);
			}
		}
		fprintf(outfile, "\n");
	}
}

void SampleListener::onFocusGained(const Controller& controller) {
	std::cout << "Focus Gained" << std::endl;
}

void SampleListener::onFocusLost(const Controller& controller) {
	std::cout << "Focus Lost" << std::endl;
}

void SampleListener::onDeviceChange(const Controller& controller) {
	std::cout << "Device Changed" << std::endl;
	const DeviceList devices = controller.devices();

	for (int i = 0; i < devices.count(); ++i) {
		std::cout << "id: " << devices[i].toString() << std::endl;
		std::cout << "  isStreaming: " << (devices[i].isStreaming() ? "true" : "false") << std::endl;
	}
}

void SampleListener::onServiceConnect(const Controller& controller) {
	std::cout << "Service Connected" << std::endl;
}

void SampleListener::onServiceDisconnect(const Controller& controller) {
	std::cout << "Service Disconnected" << std::endl;
}

