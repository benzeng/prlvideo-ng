
/* Function Stack Size: 0x14 bytes */

void BTL2CAPChannelDelegate::setPsm_(ID param_1,SEL param_2,unsigned_short param_3)

{
  *(unsigned_short *)(param_1 + psm) = param_3;
  return;
}

