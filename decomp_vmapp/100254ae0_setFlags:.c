
/* Function Stack Size: 0x14 bytes */

void BTL2CAPChannelDelegate::setFlags_(ID param_1,SEL param_2,unsigned_int param_3)

{
  *(unsigned_int *)(param_1 + flags) = param_3;
  return;
}

