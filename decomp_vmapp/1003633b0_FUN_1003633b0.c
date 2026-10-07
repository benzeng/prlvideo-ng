
undefined4 FUN_1003633b0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(DAT_1011c8478 + 0x10) != 0) {
    uVar1 = 0x500;
    if (param_2 - 0x10U < 4) {
      uVar1 = *(undefined4 *)(&DAT_100b3c960 + (long)(int)(param_2 - 0x10U) * 4);
    }
  }
  return uVar1;
}

