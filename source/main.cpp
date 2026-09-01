#include <iostream>
#include "../include/cli.h"
#include "../include/commands/commands.h"



int main(int argc, char *argv[]) {
    CLI app;
    cli_init(&app);

    // start options section

    cli_add_option(&app, "-h",  "--help", []() {
        HelpCommand help_command;
        help_command.execute();
    });

    // end options section

    cli_parse(&app, argc, argv);
    return 0;
}
