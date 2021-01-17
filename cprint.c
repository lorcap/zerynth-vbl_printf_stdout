#include "zerynth.h"
#include "cprint.h"

C_NATIVE(cprint)
{
    vhalSerialWrite(0, "cprint:vhalSerialWrite\n", sizeof("cprint:vhalSerialWrite\n"));
    vbl_printf_stdout("cprint:vbl_printf_stdout");
    return 0;
}
