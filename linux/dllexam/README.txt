What you need is nm and its -D option:

nm -g  *.so
$ nm -D /usr/lib/libopenal.so.1
.
.
.
00012ea0 T alcSetThreadContext
000140f0 T alcSuspendContext
         U atanf
         U calloc
.
.
.

Exported sumbols are indicated by a T. Required symbols that must be loaded from other shared objects have a U. Note that the symbol table does not include just functions, but exported variables as well.

See the nm manual page for more information.

