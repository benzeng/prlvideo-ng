
/* Function Stack Size: 0x10 bytes */

unsigned_int Server::port(ID param_1,SEL param_2)

{
  return *(unsigned_int *)(param_1 + port);
}

