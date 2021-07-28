
from building import *
import rtconfig

cwd     = GetCurrentDir()
src     = Glob('src/*.c')
src     += Glob('wolfcrypt/src/*.c')
src     += Glob('wolfcrypt/benchmark/*.c')
src     += Glob('wolfcrypt/test/*.c')

CPPPATH = [cwd, cwd+'wolfssl']
LOCAL_CCFLAGS = ''
CPPDEFINES = ['WOLFSSL_USER_SETTINGS']

group = DefineGroup('wolfssl', src, depend = [''], CPPPATH = CPPPATH, LOCAL_CCFLAGS = LOCAL_CCFLAGS, CPPDEFINES = CPPDEFINES)

Return('group')
