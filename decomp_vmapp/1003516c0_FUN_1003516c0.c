
uint FUN_1003516c0(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  for (uVar1 = param_2 & 0xffff; uVar1 != 0; uVar1 = uVar1 >> 1) {
    iVar2 = iVar2 - (uVar1 & 1);
  }
  if ((param_2 & 0x10000) != 0) {
    if (iVar2 == 0) {
      param_2 = param_2 & 0xfffeffff;
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -1;
    }
  }
  if ((param_2 & 0x20000) != 0) {
    if (iVar2 == 0) {
      param_2 = param_2 & 0xfffdffff;
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -1;
    }
  }
  if ((param_2 & 0x40000) != 0) {
    if (iVar2 == 0) {
      param_2 = param_2 & 0xfffbffff;
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -1;
    }
  }
  uVar1 = param_2 & 0xfff7ffff;
  if (iVar2 != 0) {
    uVar1 = param_2;
  }
  if ((param_2 & 0x80000) == 0) {
    uVar1 = param_2;
  }
  return uVar1;
}

