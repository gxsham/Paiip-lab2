#ifndef SERIAL_H_
#define SERIAL_H_

#include <stdint.h>
#include <stdio.h>
#include <avr/io.h>


void serial_init(uint16_t);
void serial_putchar(char);
char serial_getchar();


#endif /* SERIAL_H_ */