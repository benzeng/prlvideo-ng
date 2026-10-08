
/* Function Stack Size: 0x14 bytes */

void PDFullScreenMouseHandler::setInShowMenuArea_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _inShowMenuArea) = param_3;
  return;
}

