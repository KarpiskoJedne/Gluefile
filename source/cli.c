#include "../include/cli.h"

void cli_init(CLI* cli) {
    cli->count = 0;
}

void cli_add_option(CLI* cli, const char* short_opt, const char* long_opt, CliCallback action) {
    if (cli->count < MAX_OPTIONS) {
        cli->options[cli->count].short_opt = short_opt;
        cli->options[cli->count].long_opt = long_opt;
        cli->options[cli->count].action = action;
        cli->count++;
    }
}

void cli_parse(CLI* cli, int argc, char* argv[]) {
    if (argc <= 1) {
        printf("No arguments, please use -h or --help to show all commands.\n");
        return;
    }

    for (int i = 1; i < argc; ++i) {
        int found = 0;
        for (int j = 0; j < cli->count; ++j) {
            if (strcmp(argv[i], cli->options[j].short_opt) == 0 ||
                strcmp(argv[i], cli->options[j].long_opt) == 0) {
                cli->options[j].action();
                found = 1;
                break;
                }
        }
        if (!found) {
            printf("Invalid option: %s. Use --help or -h, to show existing commands.\n", argv[i]);
        }
    }
}