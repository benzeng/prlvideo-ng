
void FUN_100790730(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xa0))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 4) == 0) {
    if (cVar1 == '\0') {
      return;
    }
    uVar2 = uVar2 | 4;
  }
  else {
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = uVar2 & 0xfffffffb;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_1008604f0(param_1,cVar1);
  return;
}

