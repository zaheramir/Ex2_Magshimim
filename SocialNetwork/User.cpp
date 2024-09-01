#include "User.h"

// ========================  User class implementation: ==========================
// ========================  Public member functions: ==========================
// init() initializes the User object with its parameters.

void User::init(unsigned int id, const std::string& username, unsigned int age)
{
    _id = id;
    _username = username;
    _age = age;
}

// clear() clears the User object's data.

void User::clear()
{
    // Clear all data
    _id = 0;
    _username.clear();
    _age = 0;
    _devices.clear();  
}


// ========================  Getters: ============================
// getID() returns the ID of the User object.
unsigned int User::getID() const
{
    return _id;
}


// getUsername() returns the username of the User object.
const std::string& User::getUsername() const
{
    return _username;
}

// getAge() returns the age of the User object.
unsigned int User::getAge() const
{
    return _age;
}


// getDevices() returns the DevicesList of the User object.
DevicesList& User::getDevices()
{
    return _devices;
}


// getDevices() returns the DevicesList of the User object.
const DevicesList& User::getDevices() const
{
    return _devices;
}


// addDevice() adds a new Device object to the User object's DevicesList.
void User::addDevice(const Device& newDevice)
{
    _devices.add(newDevice);
}


// checkIfDevicesAreOn() returns true if at least one of the User object's devices is active, false otherwise.
bool User::checkIfDevicesAreOn() const
{
    DeviceNode* temp = _devices.get_first();
    while (temp != nullptr)
    {
        if (temp->get_data().isActive())
        {
            return true;
        }
        temp = temp->get_next();
    }
    return false;
}
