
void FUN_1007905f0(long param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x80) == 0) {
    if (param_2 == '\0') {
      return;
    }
    uVar1 = uVar1 | 0x80;
  }
  else {
    if (param_2 != '\0') {
      return;
    }
    uVar1 = uVar1 & 0xffffff7f;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  FUN_1008606d0(param_1,param_2);
  return;
}

