
undefined8 FUN_1008bcfd0(long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  
  if (param_1 != 0) {
    iVar7 = param_3 + 1;
    if (param_3 + 1 < 0) {
      iVar7 = 0;
    }
    iVar1 = FUN_100885600(param_1);
    for (; iVar7 < iVar1; iVar7 = iVar7 + 1) {
      puVar5 = (undefined8 *)FUN_100885620(param_1,iVar7);
      iVar2 = FUN_1008230a0(*puVar5,param_2);
      if (iVar2 == 0) {
        if (iVar7 == -1) {
          return 0;
        }
        if (-2 < param_3) goto LAB_1008bd09f;
        iVar1 = iVar7 + 1;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        iVar2 = FUN_100885600(param_1);
        goto LAB_1008bd073;
      }
    }
  }
  return 0;
LAB_1008bd073:
  if (iVar2 <= iVar1) {
LAB_1008bd09f:
    iVar1 = FUN_100885600(param_1);
    lVar6 = 0;
    if ((-1 < iVar7) && (iVar7 < iVar1)) {
      lVar6 = FUN_100885620(param_1,iVar7);
    }
    if (param_3 < -2) {
      if (*(int *)(lVar6 + 8) == 0) {
        uVar4 = FUN_100885600(*(long *)(lVar6 + 0x10));
      }
      else {
        uVar4 = (uint)(*(long *)(lVar6 + 0x10) != 0);
      }
      if (uVar4 != 1) {
        return 0;
      }
    }
    else if (lVar6 == 0) {
      return 0;
    }
    plVar8 = (long *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 8) == 0) {
      uVar4 = FUN_100885600(*plVar8);
    }
    else {
      uVar4 = (uint)(*plVar8 != 0);
    }
    if ((int)uVar4 < 1) {
      return 0;
    }
    if (*(int *)(lVar6 + 8) == 0) {
      lVar6 = FUN_100885620(*plVar8,0);
    }
    else {
      lVar6 = *plVar8;
    }
    if (lVar6 == 0) {
      return 0;
    }
    iVar7 = FUN_10089b8b0(lVar6);
    if (iVar7 == param_4) {
      return *(undefined8 *)(lVar6 + 8);
    }
    FUN_100887ce0(0xb,0x8b,0x7a,"x509_att.c",0x170);
    return 0;
  }
  puVar5 = (undefined8 *)FUN_100885620(param_1,iVar1);
  iVar3 = FUN_1008230a0(*puVar5,param_2);
  if (iVar3 == 0) {
    if (iVar1 != -1) {
      return 0;
    }
    goto LAB_1008bd09f;
  }
  iVar1 = iVar1 + 1;
  goto LAB_1008bd073;
}

