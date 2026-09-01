#ifndef CLI_H
#define CLI_H

#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*CliCallback)(void);

typedef struct {
    const char* short_opt;
    const char* long_opt;
    CliCallback action;
} CliOption;

#define MAX_OPTIONS 10

typedef struct {
    CliOption options[MAX_OPTIONS];
    int count;
} CLI;

void cli_init(CLI* cli);
void cli_add_option(CLI* cli, const char* short_opt, const char* long_opt, CliCallback action);
void cli_parse(CLI* cli, int argc, char* argv[]);

#ifdef __cplusplus
}
#endif

#endif