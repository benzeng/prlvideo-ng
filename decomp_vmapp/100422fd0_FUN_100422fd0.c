
undefined1 FUN_100422fd0(byte *param_1,byte *param_2)

{
  undefined1 uVar1;
  
  if (param_2 < param_1 + (long)(char)(&DAT_100b41fa0)[*param_1] + 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100423010(param_1,(long)(char)(&DAT_100b41fa0)[*param_1] + 1);
  }
  return uVar1;
}

