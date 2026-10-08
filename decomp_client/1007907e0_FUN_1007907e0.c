
void FUN_1007907e0(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xa8))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 8) == 0) {
    if (cVar1 == '\0') {
      return;
    }
    uVar2 = uVar2 | 8;
  }
  else {
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = uVar2 & 0xfffffff7;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_100860550(param_1,cVar1);
  return;
}

