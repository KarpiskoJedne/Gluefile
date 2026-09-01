//
// Created by shrek on 1.09.2026.
//

#ifndef GLUEFILE_COMMAND_H
#define GLUEFILE_COMMAND_H

class Command {
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
};

#endif //GLUEFILE_COMMAND_H
