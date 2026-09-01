#include "../../include/commands/help.h"

void HelpCommand::execute() {
    std::cout << "  -h,   --help          Display this help message and exit\n";
    std::cout << "  -c,   --command       Execute a specific command defined in gluefile.toml       (DEFAULT : ALL)\n";
    std::cout << "  -nc,  --no-cache      Bypass the cache and force a fresh execution              (DEFAULT : ON)\n";
    std::cout << "  -nha, --no-hash       Bypass the hash and force a fresh execution               (DEFAULT : ON)\n";
    std::cout << "  -con, --config        Allow set custom path to config.                          (DEFAULT : ./gluefile.toml)\n";
    std::cout << "  -dv,  --disable-venv  Disable virtual environment                               (DEFAULT : ON)\n";
}
