
ulong FUN_100c39580(long *param_1,long param_2,long param_3)

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
  
  iVar5 = FUN_100c377d0();
  if (iVar5 != 0) {
    return 1;
  }
  pcVar3 = *(code **)(*param_1 + 0x100);
  pcVar4 = *(code **)(*param_1 + 0x108);
  lVar6 = 0;
  if ((param_3 == 0) && (lVar6 = FUN_100c27a20(), param_3 = lVar6, lVar6 == 0)) {
    return 0xffffffff;
  }
  FUN_100c27c60(param_3);
  uVar7 = FUN_100c27e20(param_3);
  uVar8 = FUN_100c27e20(param_3);
  uVar9 = FUN_100c27e20(param_3);
  lVar10 = FUN_100c27e20(param_3);
  uVar11 = 0xffffffff;
  if (lVar10 != 0) {
    lVar2 = param_2 + 8;
    iVar5 = (*pcVar4)(param_1,uVar7,lVar2,param_3);
    if (iVar5 != 0) {
      plVar1 = param_1 + 0xd;
      if (*(int *)(param_2 + 0x50) == 0) {
        iVar5 = (*pcVar4)(param_1,uVar8,param_2 + 0x38,param_3);
        if (((iVar5 == 0) || (iVar5 = (*pcVar4)(param_1,uVar9,uVar8,param_3), iVar5 == 0)) ||
           (iVar5 = (*pcVar3)(param_1,lVar10,uVar9,uVar8,param_3), iVar5 == 0)) goto LAB_100c398af;
        if ((int)param_1[0x19] == 0) {
          iVar5 = (*pcVar3)(param_1,uVar8,uVar9,param_1 + 0x13,param_3);
          if ((iVar5 == 0) || (iVar5 = FUN_100c29bb0(uVar7,uVar7,uVar8,plVar1), iVar5 == 0))
          goto LAB_100c398af;
          iVar5 = (*pcVar3)(param_1,uVar7,uVar7,lVar2,param_3);
        }
        else {
          iVar5 = FUN_100c29e70(uVar8,uVar9,plVar1);
          if (((iVar5 == 0) || (iVar5 = FUN_100c29bb0(uVar8,uVar8,uVar9,plVar1), iVar5 == 0)) ||
             (iVar5 = FUN_100c29c80(uVar7,uVar7,uVar8,plVar1), iVar5 == 0)) goto LAB_100c398af;
          iVar5 = (*pcVar3)(param_1,uVar7,uVar7,lVar2,param_3);
        }
        if ((iVar5 == 0) ||
           (iVar5 = (*pcVar3)(param_1,uVar8,param_1 + 0x16,lVar10,param_3), iVar5 == 0))
        goto LAB_100c398af;
        iVar5 = FUN_100c29bb0(uVar7,uVar7,uVar8,plVar1);
      }
      else {
        iVar5 = FUN_100c29bb0(uVar7,uVar7,param_1 + 0x13);
        if ((iVar5 == 0) || (iVar5 = (*pcVar3)(param_1,uVar7,uVar7,lVar2,param_3), iVar5 == 0))
        goto LAB_100c398af;
        iVar5 = FUN_100c29bb0(uVar7,uVar7,param_1 + 0x16,plVar1);
      }
      if ((iVar5 != 0) && (iVar5 = (*pcVar4)(param_1,uVar8,param_2 + 0x20,param_3), iVar5 != 0)) {
        iVar5 = FUN_100c27100(uVar8,uVar7);
        uVar11 = (ulong)(iVar5 == 0);
      }
    }
  }
LAB_100c398af:
  FUN_100c27d40(param_3);
  if (lVar6 != 0) {
    FUN_100c27ab0(lVar6);
  }
  return uVar11;
}

