
void FUN_100790530(long param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 8) == 0) {
    if (param_2 == '\0') {
      return;
    }
    uVar1 = uVar1 | 8;
  }
  else {
    if (param_2 != '\0') {
      return;
    }
    uVar1 = uVar1 & 0xfffffff7;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  FUN_100860550(param_1,param_2);
  return;
}

