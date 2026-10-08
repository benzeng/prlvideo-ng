
undefined4 FUN_10024a1e0(long *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = 0;
  if ((param_1[3] != 0) && (lVar5 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar5 = param_1[4];
  }
  cVar1 = FUN_10018ecf0(lVar5);
  uVar4 = 0x80000009;
  if (cVar1 != '\0') {
    uVar4 = 0;
    iVar2 = (**(code **)(*param_1 + 0x118))(param_1);
    lVar5 = 0;
    if ((param_1[3] != 0) && (lVar5 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar5 = param_1[4];
    }
    iVar3 = FUN_10018a9d0(lVar5);
    if (iVar2 == iVar3) {
      return 0x80000009;
    }
  }
  return uVar4;
}

