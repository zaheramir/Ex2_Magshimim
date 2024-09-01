#include "Device.h"

/*
 * Device.cpp
 * Implementation of the Device class.
 */

 // Init function: initializes the Device object with its parameters.
void Device::init(unsigned int id, DeviceType type, const std::string& os)
{
    _id = id;
    _type = type;
    _os = os;
    _isActive = true;
}

// ========================  Getters: ============================

    // getID() returns the ID of the Device object.
unsigned int Device::getID() const {
    return _id;
}

// getType() returns the type of the Device object.
DeviceType Device::getType() const {
    return _type;
}

// getOS() returns the OS of the Device object.
const std::string& Device::getOS() const {
    return _os;
}

// isActive() returns true if the Device object is active, false otherwise.
bool Device::isActive() const {
    return _isActive;
}

// =============================================================

// activate() activates the Device object.
void Device::activate() {
	_isActive = true;
}

// deactivate() deactivates the Device object.
void Device::deactivate() {
	_isActive = false;
}
