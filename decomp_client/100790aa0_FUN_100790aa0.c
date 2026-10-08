
void FUN_100790aa0(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 200))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 0x80) == 0) {
    if (cVar1 == '\0') {
      return;
    }
    uVar2 = uVar2 | 0x80;
  }
  else {
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = uVar2 & 0xffffff7f;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_1008606d0(param_1,cVar1);
  return;
}

