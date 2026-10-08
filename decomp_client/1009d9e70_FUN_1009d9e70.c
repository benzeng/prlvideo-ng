
undefined4 FUN_1009d9e70(long param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < *(int *)(param_1 + 0x18)) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c + (long)param_2 * 0xc);
  }
  return uVar1;
}

