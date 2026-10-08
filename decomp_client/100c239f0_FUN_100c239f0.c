
undefined8
FUN_100c239f0(undefined8 param_1,ulong param_2,long param_3,undefined8 *param_4,undefined8 param_5,
             long param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long local_48;
  
  if ((*(byte *)(param_3 + 0x14) & 4) != 0) {
    FUN_100c62ee0(3,0x75,0x42,"bn_exp.c",0x3b3);
    return 0xffffffff;
  }
  if ((*(int *)(param_4 + 1) < 1) || ((*(ulong *)*param_4 & 1) == 0)) {
    FUN_100c62ee0(3,0x75,0x66,"bn_exp.c",0x3bb);
    return 0;
  }
  if (*(int *)(param_4 + 1) == 1) {
    param_2 = param_2 % *(ulong *)*param_4;
  }
  iVar2 = FUN_100c26610(param_3);
  if (iVar2 == 0) {
    if (((*(int *)(param_4 + 1) != 1) || (*(long *)*param_4 != 1)) || (*(int *)(param_4 + 2) != 0))
    {
      uVar9 = FUN_100c26db0(param_1,1);
      return uVar9;
    }
LAB_100c23d4e:
    FUN_100c26db0(param_1,0);
    return 1;
  }
  if (param_2 == 0) goto LAB_100c23d4e;
  FUN_100c27c60(param_5);
  lVar4 = FUN_100c27e20(param_5);
  lVar5 = FUN_100c27e20(param_5);
  local_48 = FUN_100c27e20(param_5);
  uVar9 = 0;
  if (((lVar4 == 0) || (lVar5 == 0)) || (local_48 == 0)) goto LAB_100c23e2b;
  lVar4 = param_6;
  if (param_6 == 0) {
    lVar4 = FUN_100c330d0();
    uVar9 = 0;
    if (lVar4 == 0) goto LAB_100c23e2b;
    iVar3 = FUN_100c331e0(lVar4,param_4,param_5);
    uVar9 = 0;
    if (iVar3 != 0) goto LAB_100c23b59;
    goto LAB_100c23e1a;
  }
LAB_100c23b59:
  iVar3 = 1;
  uVar6 = param_2;
  if (-1 < iVar2 + -2) {
    iVar2 = iVar2 + -1;
    uVar8 = 1;
    do {
      uVar10 = uVar6 * uVar6;
      if (uVar10 / uVar6 == uVar6) {
        bVar1 = true;
        lVar7 = lVar5;
        if ((int)uVar8 == 0) goto LAB_100c23c24;
      }
      else {
        if ((int)uVar8 == 0) {
          iVar3 = FUN_100c2bb00(lVar5,uVar6,uVar10 % uVar6);
          uVar9 = 0;
          if (iVar3 == 0) goto LAB_100c23e1a;
          iVar3 = FUN_100c23170(0,local_48,lVar5,param_4,param_5);
          lVar7 = lVar5;
          lVar5 = local_48;
        }
        else {
          iVar3 = FUN_100c26db0();
          uVar9 = 0;
          if (iVar3 == 0) goto LAB_100c23e1a;
          iVar3 = FUN_100c32ab0(lVar5,lVar5,lVar4 + 8,lVar4,param_5);
          lVar7 = local_48;
        }
        uVar9 = 0;
        uVar10 = 1;
        local_48 = lVar7;
        if (iVar3 == 0) goto LAB_100c23e1a;
LAB_100c23c24:
        iVar3 = FUN_100c32ab0(lVar5,lVar5,lVar5,lVar4,param_5);
        uVar8 = 0;
        bVar1 = false;
        uVar9 = uVar8;
        lVar7 = lVar5;
        if (iVar3 == 0) goto LAB_100c23e1a;
      }
      iVar2 = iVar2 + -1;
      iVar3 = FUN_100c27360(param_3,iVar2);
      lVar5 = lVar7;
      uVar6 = uVar10;
      if ((iVar3 != 0) && (uVar6 = uVar10 * param_2, uVar6 / param_2 != uVar10)) {
        if (bVar1) {
          iVar3 = FUN_100c26db0();
          uVar9 = 0;
          if (iVar3 == 0) goto LAB_100c23e1a;
          iVar3 = FUN_100c32ab0(lVar7,lVar7,lVar4 + 8,lVar4,param_5);
          uVar8 = 0;
          uVar9 = 0;
          uVar6 = param_2;
          if (iVar3 == 0) goto LAB_100c23e1a;
        }
        else {
          iVar3 = FUN_100c2bb00(lVar7,uVar10);
          if ((iVar3 == 0) ||
             (iVar3 = FUN_100c23170(0,local_48,lVar7,param_4,param_5), lVar5 = local_48,
             uVar6 = param_2, local_48 = lVar7, iVar3 == 0)) {
            uVar9 = 0;
            goto LAB_100c23e1a;
          }
        }
      }
      iVar3 = (int)uVar8;
    } while (0 < iVar2);
  }
  if (uVar6 == 1) {
    if (iVar3 == 0) {
LAB_100c23df1:
      iVar2 = FUN_100c33050(param_1,lVar5,lVar4,param_5);
    }
    else {
      iVar2 = FUN_100c26db0(param_1,1);
    }
    uVar9 = 0;
    if (iVar2 != 0) {
      uVar9 = 1;
    }
  }
  else if (iVar3 == 0) {
    iVar2 = FUN_100c2bb00(lVar5,uVar6);
    uVar9 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_100c23170(0,local_48,lVar5,param_4,param_5);
      lVar5 = local_48;
      goto LAB_100c23dea;
    }
  }
  else {
    iVar2 = FUN_100c26db0();
    uVar9 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_100c32ab0(lVar5,lVar5,lVar4 + 8,lVar4,param_5);
LAB_100c23dea:
      uVar9 = 0;
      if (iVar2 != 0) goto LAB_100c23df1;
    }
  }
LAB_100c23e1a:
  if ((param_6 == 0) && (lVar4 != 0)) {
    FUN_100c33190();
  }
LAB_100c23e2b:
  FUN_100c27d40(param_5);
  return uVar9;
}

