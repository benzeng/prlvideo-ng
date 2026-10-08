
undefined8 FUN_1002358e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10031c890(uVar1);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) {
    uVar1 = FUN_1001d50a0();
    FUN_1001d5100(uVar1,0);
  }
  return 0;
}

