# vbl_printf_stdout
# Created at 2021-01-17 11:26:32.268667

import streams
streams.serial()

@c_native("cprint", ["cprint.c"])
def cprint ():
    pass

try:
    print("main:1")
    cprint()
    print("main:2")
except:
    print("Something bad happened!")