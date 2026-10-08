
undefined8 FUN_100c989f0(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar1 = FUN_100c60800(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      uVar1 = (uint)(*(long *)(param_1 + 0x10) != 0);
    }
    uVar2 = 0;
    if (param_2 < (int)uVar1) {
      if (*(int *)(param_1 + 8) == 0) {
        uVar2 = FUN_100c60820(*(undefined8 *)(param_1 + 0x10),param_2);
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x10);
      }
    }
  }
  return uVar2;
}

