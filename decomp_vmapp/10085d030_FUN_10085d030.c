
undefined8
FUN_10085d030(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  
  lVar6 = 0;
  if ((param_6 == 0) && (lVar6 = FUN_10084c820(), param_6 = lVar6, lVar6 == 0)) {
    return 0;
  }
  if (param_3 != 0) {
    lVar1 = param_2 + 8;
    iVar5 = FUN_10084e8b0(lVar1,param_3,param_1 + 0xd,param_6);
    uVar7 = 0;
    if ((iVar5 == 0) ||
       ((*(code **)(*param_1 + 0x118) != (code *)0x0 &&
        (iVar5 = (**(code **)(*param_1 + 0x118))(param_1,lVar1,lVar1,param_6), iVar5 == 0))))
    goto LAB_10085d1f9;
  }
  if (param_4 != 0) {
    lVar1 = param_2 + 0x20;
    iVar5 = FUN_10084e8b0(lVar1,param_4,param_1 + 0xd,param_6);
    uVar7 = 0;
    if ((iVar5 == 0) ||
       ((*(code **)(*param_1 + 0x118) != (code *)0x0 &&
        (iVar5 = (**(code **)(*param_1 + 0x118))(param_1,lVar1,lVar1,param_6), uVar7 = 0, iVar5 == 0
        )))) goto LAB_10085d1f9;
  }
  uVar7 = 1;
  if (param_5 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x38);
    iVar5 = FUN_10084e8b0(puVar2,param_5,param_1 + 0xd,param_6);
    uVar7 = 0;
    if (iVar5 != 0) {
      if (*(int *)(param_2 + 0x40) == 1) {
        if (*(long *)*puVar2 == 1) {
          bVar8 = *(int *)(param_2 + 0x48) == 0;
        }
        else {
          bVar8 = false;
        }
      }
      else {
        bVar8 = false;
      }
      pcVar3 = *(code **)(*param_1 + 0x118);
      if (pcVar3 != (code *)0x0) {
        if ((bVar8 == false) || (pcVar4 = *(code **)(*param_1 + 0x128), pcVar4 == (code *)0x0)) {
          iVar5 = (*pcVar3)(param_1,puVar2,puVar2);
        }
        else {
          iVar5 = (*pcVar4)(param_1,puVar2,param_6);
        }
        uVar7 = 0;
        if (iVar5 == 0) goto LAB_10085d1f9;
      }
      *(uint *)(param_2 + 0x50) = (uint)bVar8;
      uVar7 = 1;
    }
  }
LAB_10085d1f9:
  if (lVar6 != 0) {
    FUN_10084c8b0();
  }
  return uVar7;
}

