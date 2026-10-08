
void FUN_100790680(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x98))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 2) == 0) {
    if (cVar1 == '\0') {
      return;
    }
    uVar2 = uVar2 | 2;
  }
  else {
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = uVar2 & 0xfffffffd;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_1008604a0(param_1,cVar1);
  return;
}

