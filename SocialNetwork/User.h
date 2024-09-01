#pragma once

#include <string>
#include "DeviceList.h"

class User {

public:
    void init(unsigned int id, const std::string& username, unsigned int age);
    void clear();
    unsigned int getID() const;
    const std::string& getUsername() const;
    unsigned int getAge() const;
    DevicesList& getDevices();
    const DevicesList& getDevices() const;
    void addDevice(const Device& newDevice);
    bool checkIfDevicesAreOn() const;

private:
    unsigned int _id;
    std::string _username;
    unsigned int _age;
    DevicesList _devices;
};
