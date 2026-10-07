
/* Function Stack Size: 0x10 bytes */

long_long ShiftDetector::getShiftValueAndReset(ID param_1,SEL param_2)

{
  long_long lVar1;
  long local_20;
  
  local_20 = _mutex + param_1;
  FUN_1007eaef0();
  lVar1 = *(long_long *)(param_1 + _accumulatedShiftMS);
  *(undefined8 *)(param_1 + _accumulatedShiftMS) = 0;
  FUN_1007eaf10(&local_20);
  return lVar1;
}

