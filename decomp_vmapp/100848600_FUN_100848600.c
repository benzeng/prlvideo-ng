
undefined4
FUN_100848600(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  if ((*(byte *)((long)param_3 + 0x14) & 4) != 0) {
    FUN_100887ce0(3,0x7b,0x42,"bn_exp.c",0x8b);
    return 0xffffffff;
  }
  FUN_10084ca60(param_4);
  if ((param_1 == param_2) || (puVar4 = param_1, param_1 == param_3)) {
    puVar4 = (undefined8 *)FUN_10084cc20(param_4);
  }
  lVar5 = FUN_10084cc20(param_4);
  uVar7 = 0;
  if (((puVar4 != (undefined8 *)0x0) && (lVar5 != 0)) &&
     (lVar6 = FUN_10084b950(lVar5,param_2), lVar6 != 0)) {
    iVar1 = FUN_10084b410(param_3);
    if ((*(int *)(param_3 + 1) < 1) || ((*(byte *)*param_3 & 1) == 0)) {
      iVar2 = FUN_10084bbb0(puVar4,1);
      uVar7 = 0;
      if (iVar2 == 0) goto LAB_100848780;
    }
    else {
      lVar6 = FUN_10084b950(puVar4,param_2);
      if (lVar6 == 0) goto LAB_100848780;
    }
    if (1 < iVar1) {
      iVar2 = 1;
      do {
        iVar3 = FUN_100853520(lVar5,lVar5,param_4);
        if (iVar3 == 0) {
          uVar7 = 0;
          goto LAB_100848780;
        }
        iVar3 = FUN_10084c160(param_3,iVar2);
        if ((iVar3 != 0) && (iVar3 = FUN_10084e5a0(puVar4,puVar4,lVar5,param_4), iVar3 == 0)) {
          uVar7 = 0;
          goto LAB_100848780;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    uVar7 = 1;
    if (puVar4 != param_1) {
      FUN_10084b950(param_1,puVar4);
    }
  }
LAB_100848780:
  FUN_10084cb40(param_4);
  return uVar7;
}

