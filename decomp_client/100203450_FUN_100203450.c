
undefined8 * FUN_100203450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 5) = 0x80000000;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else {
    piVar2 = (int *)*param_2;
    uVar1 = param_2[1];
    *param_1 = piVar2;
    param_1[1] = uVar1;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    QVariant::QVariant((QVariant *)(param_1 + 4),(QVariant *)(param_2 + 4));
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  return param_1;
}

