
undefined8 FUN_1003f3830(long *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x50))();
  if ((long *)param_1[6] != (long *)0x0) {
    cVar1 = (**(code **)(*(long *)param_1[6] + 0x98))();
    if (cVar1 != '\0') {
      (**(code **)(*(long *)param_1[6] + 0x28))();
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
    }
  }
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 2;
  *(undefined4 *)((long)param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return 0;
}

