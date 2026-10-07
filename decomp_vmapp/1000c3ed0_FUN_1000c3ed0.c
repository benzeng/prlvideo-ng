
undefined8 FUN_1000c3ed0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (((*(short *)(param_1 + 8) != *(short *)(param_2 + 0xe)) ||
      (*(short *)(param_1 + 10) != *(short *)(param_2 + 4))) ||
     (uVar1 = 1, *(long *)(param_1 + 0x10) != param_3)) {
    uVar1 = 0;
  }
  return uVar1;
}

