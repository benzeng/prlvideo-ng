
ulong FUN_10085e380(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  iVar5 = FUN_10085c5d0();
  if (iVar5 != 0) {
    return 1;
  }
  pcVar3 = *(code **)(*param_1 + 0x100);
  pcVar4 = *(code **)(*param_1 + 0x108);
  lVar6 = 0;
  if ((param_3 == 0) && (lVar6 = FUN_10084c820(), param_3 = lVar6, lVar6 == 0)) {
    return 0xffffffff;
  }
  FUN_10084ca60(param_3);
  uVar7 = FUN_10084cc20(param_3);
  uVar8 = FUN_10084cc20(param_3);
  uVar9 = FUN_10084cc20(param_3);
  lVar10 = FUN_10084cc20(param_3);
  uVar11 = 0xffffffff;
  if (lVar10 != 0) {
    lVar2 = param_2 + 8;
    iVar5 = (*pcVar4)(param_1,uVar7,lVar2,param_3);
    if (iVar5 != 0) {
      plVar1 = param_1 + 0xd;
      if (*(int *)(param_2 + 0x50) == 0) {
        iVar5 = (*pcVar4)(param_1,uVar8,param_2 + 0x38,param_3);
        if (((iVar5 == 0) || (iVar5 = (*pcVar4)(param_1,uVar9,uVar8,param_3), iVar5 == 0)) ||
           (iVar5 = (*pcVar3)(param_1,lVar10,uVar9,uVar8,param_3), iVar5 == 0)) goto LAB_10085e6af;
        if ((int)param_1[0x19] == 0) {
          iVar5 = (*pcVar3)(param_1,uVar8,uVar9,param_1 + 0x13,param_3);
          if ((iVar5 == 0) || (iVar5 = FUN_10084e9b0(uVar7,uVar7,uVar8,plVar1), iVar5 == 0))
          goto LAB_10085e6af;
          iVar5 = (*pcVar3)(param_1,uVar7,uVar7,lVar2,param_3);
        }
        else {
          iVar5 = FUN_10084ec70(uVar8,uVar9,plVar1);
          if (((iVar5 == 0) || (iVar5 = FUN_10084e9b0(uVar8,uVar8,uVar9,plVar1), iVar5 == 0)) ||
             (iVar5 = FUN_10084ea80(uVar7,uVar7,uVar8,plVar1), iVar5 == 0)) goto LAB_10085e6af;
          iVar5 = (*pcVar3)(param_1,uVar7,uVar7,lVar2,param_3);
        }
        if ((iVar5 == 0) ||
           (iVar5 = (*pcVar3)(param_1,uVar8,param_1 + 0x16,lVar10,param_3), iVar5 == 0))
        goto LAB_10085e6af;
        iVar5 = FUN_10084e9b0(uVar7,uVar7,uVar8,plVar1);
      }
      else {
        iVar5 = FUN_10084e9b0(uVar7,uVar7,param_1 + 0x13);
        if ((iVar5 == 0) || (iVar5 = (*pcVar3)(param_1,uVar7,uVar7,lVar2,param_3), iVar5 == 0))
        goto LAB_10085e6af;
        iVar5 = FUN_10084e9b0(uVar7,uVar7,param_1 + 0x16,plVar1);
      }
      if ((iVar5 != 0) && (iVar5 = (*pcVar4)(param_1,uVar8,param_2 + 0x20,param_3), iVar5 != 0)) {
        iVar5 = FUN_10084bf00(uVar8,uVar7);
        uVar11 = (ulong)(iVar5 == 0);
      }
    }
  }
LAB_10085e6af:
  FUN_10084cb40(param_3);
  if (lVar6 != 0) {
    FUN_10084c8b0(lVar6);
  }
  return uVar11;
}

