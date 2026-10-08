
/* Function Stack Size: 0x18 bytes */

void PDFullScreenMouseHandler::setShowMenuDelay_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + _showMenuDelay) = param_3;
  return;
}

