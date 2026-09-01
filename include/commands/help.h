//
// Created by shrek on 1.09.2026.
//

#ifndef GLUEFILE_HELP_H
#define GLUEFILE_HELP_H

#include "command.h"
#include <iostream>
#include <string>

class HelpCommand : public Command {
public:
    void execute() override;
};

#endif //GLUEFILE_HELP_H
