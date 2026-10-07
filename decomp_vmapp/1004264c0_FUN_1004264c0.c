
int FUN_1004264c0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  lVar1 = *param_2;
  lVar2 = *param_1;
  uVar3 = *(ulong *)(lVar1 + 0x20);
  uVar4 = *(ulong *)(lVar2 + 0x20);
  lVar6 = *param_3;
  if (uVar3 < uVar4) {
    if (*(ulong *)(lVar6 + 0x20) < uVar3) {
      *param_1 = lVar6;
      *param_3 = lVar2;
      iVar5 = 1;
      lVar6 = lVar2;
    }
    else {
      *param_1 = lVar1;
      *param_2 = lVar2;
      lVar6 = *param_3;
      iVar5 = 1;
      if (*(ulong *)(lVar6 + 0x20) < uVar4) {
        *param_2 = lVar6;
        *param_3 = lVar2;
        iVar5 = 2;
        lVar6 = lVar2;
      }
    }
  }
  else if (*(ulong *)(lVar6 + 0x20) < uVar3) {
    *param_2 = lVar6;
    *param_3 = lVar1;
    lVar2 = *param_1;
    if (*(ulong *)(*param_2 + 0x20) < *(ulong *)(lVar2 + 0x20)) {
      *param_1 = *param_2;
      *param_2 = lVar2;
      iVar5 = 2;
      lVar6 = *param_3;
    }
    else {
      iVar5 = 1;
      lVar6 = lVar1;
    }
  }
  else {
    iVar5 = 0;
  }
  if (*(ulong *)(*param_4 + 0x20) < *(ulong *)(lVar6 + 0x20)) {
    *param_3 = *param_4;
    *param_4 = lVar6;
    lVar1 = *param_2;
    if (*(ulong *)(*param_3 + 0x20) < *(ulong *)(lVar1 + 0x20)) {
      *param_2 = *param_3;
      *param_3 = lVar1;
      lVar1 = *param_1;
      if (*(ulong *)(*param_2 + 0x20) < *(ulong *)(lVar1 + 0x20)) {
        *param_1 = *param_2;
        *param_2 = lVar1;
        iVar5 = iVar5 + 3;
      }
      else {
        iVar5 = iVar5 + 2;
      }
    }
    else {
      iVar5 = iVar5 + 1;
    }
  }
  return iVar5;
}

