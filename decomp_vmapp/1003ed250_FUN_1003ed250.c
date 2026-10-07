
undefined8 FUN_1003ed250(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*(long *)param_1[0x25] + 0x10))();
  if ((int)uVar1 == 0) {
    *(undefined4 *)((long)param_1 + 0x2c) = 1;
    lVar2 = (**(code **)(*param_1 + 0x70))(param_1);
    param_1[0x14] = lVar2;
    param_1[0x13] = lVar2 + 1;
    uVar1 = 0;
  }
  else {
    param_1[0x14] = 0;
    param_1[0x13] = 0;
  }
  *(undefined4 *)((long)param_1 + 0x7c) = 2;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  return uVar1;
}

