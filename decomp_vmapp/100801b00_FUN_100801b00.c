
undefined4 FUN_100801b00(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((0 < (int)param_1) && (param_1 < 0x1a)) {
    uVar1 = *(undefined4 *)(&DAT_100b4dc20 + (long)(int)(param_1 - 1) * 4);
  }
  return uVar1;
}

