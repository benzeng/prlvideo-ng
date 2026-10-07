
/* Function Stack Size: 0x18 bytes */

void BTL2CAPChannelDelegate::setL2cap_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + l2cap) = param_3;
  return;
}

