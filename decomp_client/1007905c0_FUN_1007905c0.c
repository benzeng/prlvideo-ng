
void FUN_1007905c0(long param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x40) == 0) {
    if (param_2 == '\0') {
      return;
    }
    uVar1 = uVar1 | 0x40;
  }
  else {
    if (param_2 != '\0') {
      return;
    }
    uVar1 = uVar1 & 0xffffffbf;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  FUN_100860670(param_1,param_2);
  return;
}

