#ifndef PORTS_IO_H
#define PORTS_IO_H

uint8_t port_byte_in(uint16_t port);
void port_byte_out(uint16_t port, uint8_t data);
uint16_t port_word_in(uint16_t port);
void port_word_out(uint16_t port, uint8_t data);
void io_wait();

#endif
