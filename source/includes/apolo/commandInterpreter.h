/*
Copyright (c) 2015 Robert A. Vazeux Blanco

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef COMANDS_H
#define COMANDS_H

#include <stdarg.h>
#include "../hefesto/string.h"
#include "../atenea/mem.h"

#define MAX_COMMANDS			10
#define MAX_SIZE_COMMAND		16
#define MAX_SIZE_COMMAND_DESCRP 61
#define MAX_SIZE_COMMAND_USAGE	31
#define MAX_COMMAND_OUTPUT 	   500

typedef struct {

	char name[MAX_SIZE_COMMAND];				// Comando
	char descrp[MAX_SIZE_COMMAND_DESCRP];		// DEscripción
	char usage[MAX_SIZE_COMMAND_USAGE];			// Uso
	void (* function)(int argc, char * argv[]); // funcion que "ejecuta" el comando

} command_t;

typedef struct {

	command_t commands[MAX_COMMANDS];
	unsigned int nCommands;
	char * lastCommandOutPutBuffer;
	unsigned int lastCommandLen;


} commandInterpreter_t;

void init_commandInterpreter(commandInterpreter_t * commandInter, char * outBuffer);
char * executeCommand(char * name, ... ); // nombre de comando y argumentos


#endif /* SOURCE_INCLUDES_APOLO_COMANDS_H_ */