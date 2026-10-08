
undefined8 FUN_100c36ed0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (*(int *)(*param_1 + 4) != *(int *)(*param_2 + 4)) {
    return 1;
  }
  if ((((int)param_1[8] != 0) && ((int)param_2[8] != 0)) && ((int)param_1[8] != (int)param_2[8])) {
    return 1;
  }
  lVar2 = 0;
  if ((param_3 == 0) && (lVar2 = FUN_100c27a20(), param_3 = lVar2, lVar2 == 0)) {
    return 0xffffffff;
  }
  FUN_100c27c60(param_3);
  lVar3 = FUN_100c27e20(param_3);
  uVar4 = FUN_100c27e20(param_3);
  uVar5 = FUN_100c27e20(param_3);
  lVar6 = FUN_100c27e20(param_3);
  uVar7 = FUN_100c27e20(param_3);
  lVar8 = FUN_100c27e20(param_3);
  if (lVar8 == 0) {
    FUN_100c27d40(param_3);
    uVar9 = 0xffffffff;
    goto joined_r0x000100c3700e;
  }
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,lVar3,uVar4,uVar5,param_3);
  uVar9 = 1;
  if (((iVar1 != 0) &&
      (iVar1 = (**(code **)(*param_2 + 0x30))(param_2,lVar6,uVar7,lVar8,param_3), iVar1 != 0)) &&
     ((iVar1 = FUN_100c27160(lVar3,lVar6), iVar1 == 0 &&
      ((iVar1 = FUN_100c27160(uVar4,uVar7), iVar1 == 0 &&
       (iVar1 = FUN_100c27160(uVar5,lVar8), iVar1 == 0)))))) {
    lVar8 = *param_1;
    if (*(code **)(lVar8 + 0xd0) == (code *)0x0) {
      FUN_100c62ee0(0x10,0x71,0x42,"ec_lib.c",0x3c2);
    }
    else {
      if ((lVar8 == *(long *)param_1[1]) && (lVar8 == *(long *)param_2[1])) {
        iVar1 = (**(code **)(lVar8 + 0xd0))(param_1,(long *)param_1[1],(long *)param_2[1],param_3);
        if (iVar1 != 0) goto LAB_100c370cd;
        lVar8 = FUN_100c26b50(lVar3,param_1 + 2);
        if (((((lVar8 == 0) || (*(int *)(lVar3 + 8) == 0)) ||
             (lVar8 = FUN_100c26b50(lVar6,param_2 + 2), lVar8 == 0)) ||
            ((*(int *)(lVar6 + 8) == 0 || (lVar8 = FUN_100c26b50(uVar4,param_1 + 5), lVar8 == 0))))
           || (((int)param_1[6] == 0 ||
               ((lVar8 = FUN_100c26b50(uVar7,param_2 + 5), lVar8 == 0 || ((int)param_2[6] == 0))))))
        {
          FUN_100c27d40(param_3);
          uVar9 = 0xffffffff;
          goto joined_r0x000100c3700e;
        }
        iVar1 = FUN_100c27160(lVar3,lVar6);
        if (iVar1 == 0) {
          iVar1 = FUN_100c27160(uVar4,uVar7);
          uVar9 = 0;
          if (iVar1 == 0) goto LAB_100c370cd;
        }
      }
      else {
        FUN_100c62ee0(0x10,0x71,0x65,"ec_lib.c",0x3c6);
      }
      uVar9 = 1;
    }
  }
LAB_100c370cd:
  FUN_100c27d40(param_3);
joined_r0x000100c3700e:
  if (lVar2 != 0) {
    FUN_100c27ab0(param_3);
  }
  return uVar9;
}

