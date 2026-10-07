
/* Function Stack Size: 0x18 bytes */

void BTL2CAPChannelDelegate::setCtx_(ID param_1,SEL param_2,void *param_3)

{
  *(void **)(param_1 + ctx) = param_3;
  return;
}

