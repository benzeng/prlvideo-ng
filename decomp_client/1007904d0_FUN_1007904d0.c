
void FUN_1007904d0(long param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 2) == 0) {
    if (param_2 == '\0') {
      return;
    }
    uVar1 = uVar1 | 2;
  }
  else {
    if (param_2 != '\0') {
      return;
    }
    uVar1 = uVar1 & 0xfffffffd;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  FUN_1008604a0(param_1,param_2);
  return;
}

