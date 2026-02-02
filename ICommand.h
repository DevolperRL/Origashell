#pragma once
#include <string>
#include <vector>

class ICommand {
public:
    virtual ~ICommand() = default;
    virtual std::string name() const = 0; // command name like "ls"
    virtual void execute(const std::vector<std::string>& args) = 0;
};
