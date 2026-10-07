
uint FUN_10085e6e0(long *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  bool bVar13;
  
  iVar3 = FUN_10085c5d0();
  iVar4 = FUN_10085c5d0(param_1,param_3);
  if (iVar3 != 0) {
    return (uint)(iVar4 == 0);
  }
  if (iVar4 != 0) {
    return 1;
  }
  if ((*(int *)(param_2 + 0x50) != 0) && (*(int *)(param_3 + 0x50) != 0)) {
    iVar3 = FUN_10084bf60(param_2 + 8,param_3 + 8);
    if (iVar3 == 0) {
      iVar3 = FUN_10084bf60(param_2 + 0x20,param_3 + 0x20);
      bVar13 = iVar3 == 0;
    }
    else {
      bVar13 = false;
    }
    return bVar13 ^ 1;
  }
  pcVar1 = *(code **)(*param_1 + 0x100);
  pcVar2 = *(code **)(*param_1 + 0x108);
  lVar5 = 0;
  if ((param_4 == 0) && (lVar5 = FUN_10084c820(), param_4 = lVar5, lVar5 == 0)) {
    return 0xffffffff;
  }
  FUN_10084ca60(param_4);
  lVar6 = FUN_10084cc20(param_4);
  lVar7 = FUN_10084cc20(param_4);
  uVar8 = FUN_10084cc20(param_4);
  lVar9 = FUN_10084cc20(param_4);
  if (lVar9 == 0) {
LAB_10085e9a9:
    uVar12 = 0xffffffff;
  }
  else {
    if (*(int *)(param_3 + 0x50) == 0) {
      iVar3 = (*pcVar2)(param_1,lVar9,param_3 + 0x38,param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,lVar6,param_2 + 8,lVar9,param_4), lVar10 = lVar6, iVar3 == 0))
      goto LAB_10085e9a9;
    }
    else {
      lVar10 = param_2 + 8;
    }
    if (*(int *)(param_2 + 0x50) == 0) {
      iVar3 = (*pcVar2)(param_1,uVar8,param_2 + 0x38,param_4);
      if (iVar3 == 0) goto LAB_10085e9a9;
      iVar3 = (*pcVar1)(param_1,lVar7,param_3 + 8,uVar8,param_4);
      lVar11 = lVar7;
      if (iVar3 == 0) {
        uVar12 = 0xffffffff;
        goto LAB_10085e9b3;
      }
    }
    else {
      lVar11 = param_3 + 8;
    }
    iVar3 = FUN_10084bf60(lVar10,lVar11);
    uVar12 = 1;
    if (iVar3 != 0) goto LAB_10085e9b3;
    if (*(int *)(param_3 + 0x50) == 0) {
      iVar3 = (*pcVar1)(param_1,lVar9,lVar9,param_3 + 0x38,param_4);
      if (iVar3 == 0) {
        uVar12 = 0xffffffff;
        goto LAB_10085e9b3;
      }
      iVar3 = (*pcVar1)(param_1,lVar6,param_2 + 0x20,lVar9,param_4);
      if (iVar3 == 0) {
        uVar12 = 0xffffffff;
        goto LAB_10085e9b3;
      }
    }
    else {
      lVar10 = param_2 + 0x20;
    }
    if (*(int *)(param_2 + 0x50) == 0) {
      iVar3 = (*pcVar1)(param_1,uVar8,uVar8,param_2 + 0x38,param_4);
      if (iVar3 == 0) goto LAB_10085e9a9;
      iVar3 = (*pcVar1)(param_1,lVar7,param_3 + 0x20,uVar8,param_4);
      uVar12 = 0xffffffff;
      if (iVar3 == 0) goto LAB_10085e9b3;
    }
    else {
      lVar11 = param_3 + 0x20;
    }
    iVar3 = FUN_10084bf60(lVar10,lVar11);
    uVar12 = (uint)(iVar3 != 0);
  }
LAB_10085e9b3:
  FUN_10084cb40(param_4);
  if (lVar5 != 0) {
    FUN_10084c8b0();
  }
  return uVar12;
}

