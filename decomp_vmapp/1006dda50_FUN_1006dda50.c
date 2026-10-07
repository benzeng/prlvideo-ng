
undefined8 * FUN_1006dda50(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((param_2 == (long *)0x0) || (*(int *)(*param_2 + 4) == 0)) {
    uVar2 = QString::fromAscii_helper("",0);
    *param_1 = uVar2;
  }
  else {
    piVar1 = (int *)param_2[1];
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

