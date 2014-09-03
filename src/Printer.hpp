/*
 * Printer.hpp
 *
 *  Created on: 28 sie 2014
 *      Author: dec
 */

#ifndef PRINTER_HPP_
#define PRINTER_HPP_

#include "Config.hpp"
#include "Device.hpp"
#include "Enums.hpp"

#include <string>
#include <vector>

class Printer
{
public:
	Printer();
	~Printer();

    void printStatus(std::string statusMsg) const;
    void printError(std::string errorMsg) const;
    void printWarning(std::string warningMsg) const;
    void printMessage(MHWD::MESSAGETYPE type, std::string str) const;
    void printHelp() const;
    void listDevices(const std::vector<Device*>& devices, std::string typeOfDevice) const;
    void listConfigs(const std::vector<Config*>& configs, std::string beg, std::string empty = "") const;
    void printAvailableConfigs(const std::string& deviceType, const std::vector<Device*>& devices) const;
    void printInstalledConfigs(const std::string& deviceType, const std::vector<Config*>& installedConfigs) const;
    void printConfigDetails(const Config& config) const;
private:
    void printLine() const;

    const char* CONSOLE_COLOR_RESET {"\e[m"};
    const char* CONSOLE_MESSAGE_COLOR {"\e[1m\e[31m"};
    const char* CONSOLE_TEXT_OUTPUT_COLOR {"\e[0;32m"};
};

#endif /* PRINTER_HPP_ */
