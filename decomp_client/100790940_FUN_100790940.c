
void FUN_100790940(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xb8))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 0x20) == 0) {
    if (cVar1 == '\0') {
      return;
    }
    uVar2 = uVar2 | 0x20;
  }
  else {
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = uVar2 & 0xffffffdf;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_100860610(param_1,cVar1);
  return;
}

