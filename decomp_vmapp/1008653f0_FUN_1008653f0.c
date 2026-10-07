
bool FUN_1008653f0(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  
  iVar1 = FUN_10085c5d0(param_1,param_3);
  lVar11 = param_4;
  if ((iVar1 != 0) || (iVar1 = FUN_10085c5d0(param_1,param_4), lVar11 = param_3, iVar1 != 0)) {
    iVar1 = FUN_10085b7b0(param_2,lVar11);
    return iVar1 != 0;
  }
  lVar11 = 0;
  if ((param_5 == 0) && (lVar11 = FUN_10084c820(), param_5 = lVar11, lVar11 == 0)) {
    return false;
  }
  FUN_10084ca60(param_5);
  uVar2 = FUN_10084cc20(param_5);
  uVar3 = FUN_10084cc20(param_5);
  lVar4 = FUN_10084cc20(param_5);
  uVar5 = FUN_10084cc20(param_5);
  uVar6 = FUN_10084cc20(param_5);
  uVar7 = FUN_10084cc20(param_5);
  uVar8 = FUN_10084cc20(param_5);
  plVar9 = (long *)FUN_10084cc20(param_5);
  if (plVar9 == (long *)0x0) {
    bVar12 = false;
    goto LAB_1008657d4;
  }
  if (*(int *)(param_3 + 0x50) == 0) {
    iVar1 = FUN_10085c430(param_1,param_3,uVar2,uVar3,param_5);
    if (iVar1 == 0) {
      bVar12 = false;
      goto LAB_1008657d4;
    }
  }
  else {
    lVar10 = FUN_10084b950(uVar2,param_3 + 8);
    if (lVar10 == 0) {
      bVar12 = false;
      goto LAB_1008657d4;
    }
    lVar10 = FUN_10084b950(uVar3,param_3 + 0x20);
    if (lVar10 == 0) {
      bVar12 = false;
      goto LAB_1008657d4;
    }
  }
  if (*(int *)(param_4 + 0x50) == 0) {
    iVar1 = FUN_10085c430(param_1,param_4,lVar4,uVar5,param_5);
    if (iVar1 == 0) {
      bVar12 = false;
      goto LAB_1008657d4;
    }
  }
  else {
    lVar10 = FUN_10084b950(lVar4,param_4 + 8);
    if (lVar10 == 0) {
      bVar12 = false;
      goto LAB_1008657d4;
    }
    lVar10 = FUN_10084b950(uVar5,param_4 + 0x20);
    if (lVar10 == 0) {
      bVar12 = false;
      goto LAB_1008657d4;
    }
  }
  iVar1 = FUN_10084bf00(uVar2,lVar4);
  if (iVar1 == 0) {
    iVar1 = FUN_10084bf00(uVar3,uVar5);
    if ((iVar1 == 0) && (*(int *)(lVar4 + 8) != 0)) {
      iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar8,uVar5,lVar4,param_5);
      if (iVar1 == 0) {
        bVar12 = false;
        goto LAB_1008657d4;
      }
      iVar1 = FUN_100858bf0(uVar8,uVar8,lVar4);
      bVar12 = false;
      if (((iVar1 == 0) ||
          (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar6,uVar8,param_5), iVar1 == 0)) ||
         (iVar1 = FUN_100858bf0(uVar6,uVar6,uVar8), iVar1 == 0)) goto LAB_1008657d4;
      plVar9 = param_1 + 0x13;
      goto LAB_100865739;
    }
    iVar1 = FUN_10085c1f0(param_1,param_2);
  }
  else {
    iVar1 = FUN_100858bf0(plVar9,uVar2,lVar4);
    if (iVar1 == 0) {
      bVar12 = false;
      goto LAB_1008657d4;
    }
    iVar1 = FUN_100858bf0(uVar8,uVar3,uVar5);
    bVar12 = false;
    if (((iVar1 == 0) ||
        (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar8,uVar8,plVar9,param_5), iVar1 == 0))
       || ((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar6,uVar8,param_5), iVar1 == 0 ||
           ((iVar1 = FUN_100858bf0(uVar6,uVar6,param_1 + 0x13), iVar1 == 0 ||
            (iVar1 = FUN_100858bf0(uVar6,uVar6,uVar8), iVar1 == 0)))))) goto LAB_1008657d4;
LAB_100865739:
    bVar12 = false;
    iVar1 = FUN_100858bf0(uVar6,uVar6,plVar9);
    if ((iVar1 == 0) ||
       ((((iVar1 = FUN_100858bf0(uVar7,lVar4,uVar6), iVar1 == 0 ||
          (iVar1 = (**(code **)(*param_1 + 0x100))(param_1,uVar7,uVar7,uVar8,param_5), iVar1 == 0))
         || (iVar1 = FUN_100858bf0(uVar7,uVar7,uVar6), iVar1 == 0)) ||
        (iVar1 = FUN_100858bf0(uVar7,uVar7,uVar5), iVar1 == 0)))) goto LAB_1008657d4;
    iVar1 = FUN_10085c370(param_1,param_2,uVar6,uVar7,param_5);
  }
  bVar12 = iVar1 != 0;
LAB_1008657d4:
  FUN_10084cb40(param_5);
  if (lVar11 != 0) {
    FUN_10084c8b0();
  }
  return bVar12;
}

