
void FUN_1007909f0(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xc0))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 0x40) == 0) {
    if (cVar1 == '\0') {
      return;
    }
    uVar2 = uVar2 | 0x40;
  }
  else {
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = uVar2 & 0xffffffbf;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_100860670(param_1,cVar1);
  return;
}

