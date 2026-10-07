
undefined8 * FUN_1003dfa40(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    uVar3 = QString::fromAscii_helper("SN-TEST",7);
    *param_1 = uVar3;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x20) + 0x18))();
    piVar1 = (int *)*puVar2;
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

