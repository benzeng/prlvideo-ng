
undefined8 FUN_100346350(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 9;
  if (0xb < *(uint *)(param_2 + 4)) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x860) != *(int *)(param_2 + 8)) {
      *(int *)(param_1 + 0x860) = *(int *)(param_2 + 8);
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x10;
    }
  }
  return uVar1;
}

