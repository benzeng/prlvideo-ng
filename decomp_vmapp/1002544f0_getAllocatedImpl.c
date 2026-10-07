
/* Function Stack Size: 0x10 bytes */

ID BTController::getAllocatedImpl(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = *(ID *)(param_1 + _impl_allocated);
  *(undefined8 *)(param_1 + _impl_allocated) = 0;
  return IVar1;
}

