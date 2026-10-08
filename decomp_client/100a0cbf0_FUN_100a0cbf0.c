
undefined8 * FUN_100a0cbf0(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_2 + 0x18);
  if (piVar1[1] == 0) {
    uVar2 = QString::fromAscii_helper("parallels.com",0xd);
    *param_1 = uVar2;
  }
  else {
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

