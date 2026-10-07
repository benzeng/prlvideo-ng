
int FUN_10070ba60(long *param_1,long param_2,long param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_2 + 0x54);
  iVar3 = param_4;
  if (uVar2 != 0) {
    lVar6 = (ulong)(uVar2 - 1) * 0x10;
    if ((ulong)*(uint *)(param_2 + 0x60 + lVar6) + *(long *)(param_2 + 0x58 + lVar6) == param_3) {
      piVar1 = (int *)(param_2 + 0x60 + lVar6);
      if (uVar2 == 0x80) {
        iVar3 = (**(code **)(*param_1 + 0x2e0))(param_1);
        uVar2 = *(uint *)(param_2 + 0x50);
        uVar4 = -iVar3 & uVar2 + param_4;
        iVar3 = uVar4 - uVar2;
        if (uVar4 < uVar2) {
          iVar3 = param_4;
        }
        if (uVar2 + param_4 == uVar4) {
          iVar3 = param_4;
        }
      }
      iVar3 = (**(code **)(*param_1 + 0x118))(param_1,param_2,iVar3);
      *piVar1 = *piVar1 + iVar3;
      *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + iVar3;
      return iVar3;
    }
    if (0x7f < uVar2) {
      return 0;
    }
    if (uVar2 == 0x7f) {
      iVar3 = (**(code **)(*param_1 + 0x2e0))(param_1);
      uVar2 = *(uint *)(param_2 + 0x50);
      uVar4 = -iVar3 & uVar2 + param_4;
      iVar3 = uVar4 - uVar2;
      if (uVar4 < uVar2) {
        iVar3 = param_4;
      }
      if (uVar2 + param_4 == uVar4) {
        iVar3 = param_4;
      }
    }
  }
  iVar5 = (**(code **)(*param_1 + 0x118))(param_1,param_2,iVar3);
  iVar3 = 0;
  if (iVar5 != 0) {
    uVar2 = *(uint *)(param_2 + 0x54);
    lVar6 = (ulong)uVar2 * 0x10;
    *(long *)(param_2 + 0x58 + lVar6) = param_3;
    *(int *)(param_2 + 0x60 + lVar6) = iVar5;
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + iVar5;
    *(uint *)(param_2 + 0x54) = uVar2 + 1;
    iVar3 = iVar5;
  }
  return iVar3;
}

