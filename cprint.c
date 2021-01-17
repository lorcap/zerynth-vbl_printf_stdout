#include "zerynth.h"
#include "cprint.h"

C_NATIVE(cprint)
{
    vbl_printf_stdout("cprint");
}