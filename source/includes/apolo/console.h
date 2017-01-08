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

#ifndef CONSOLE_H
#define CONSOLE_H

#include <stdint.h>

#define MAX_COMMANDS		50
#define MAX_SIZE_COMMAND	16
#define MAX_SIZE_COMMAND_DESCRP 61
#define MAX_SIZE_COMMAND_USAGE	31

typedef struct {

	char name[MAX_SIZE_COMMAND];				// Comando
	char descrp[MAX_SIZE_COMMAND_DESCRP];			// DEscripción
	char usage[MAX_SIZE_COMMAND_USAGE];			// Uso

	} command_t;


typedef struct {

	uint32_t currentX;					// En pixeles
	uint32_t currentY;					// En pixeles
	uint32_t maxX;						// En función de la resolución de la pantalla. En pixeles
	uint32_t maxY;						// En función de la resolución de la pantalla. En pixeles
	uint32_t lineSpacing;					// En pixeles (Interlineado)
	
	command_t commands[MAX_COMMANDS]; 			// Comandos disponibles
	uint8_t commandsNum;					// Numero real de comandos 
	} console_t;

#endif