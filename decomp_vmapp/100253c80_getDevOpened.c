
/* Function Stack Size: 0x10 bytes */

ID BTController::getDevOpened(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = *(ID *)(param_1 + _dev_opened);
  *(undefined8 *)(param_1 + _dev_opened) = 0;
  return IVar1;
}

