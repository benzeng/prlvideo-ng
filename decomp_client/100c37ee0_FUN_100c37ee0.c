
undefined8 FUN_100c37ee0(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = 0;
  if ((param_2 == 0) && (param_2 = FUN_100c27a20(), lVar7 = param_2, param_2 == 0)) {
    FUN_100c62ee0(0x10,0xa5,0x41,"ecp_smpl.c",0x12a);
    return 0;
  }
  uVar8 = 0;
  FUN_100c27c60(param_2);
  lVar2 = FUN_100c27e20(param_2);
  lVar3 = FUN_100c27e20(param_2);
  uVar4 = FUN_100c27e20(param_2);
  uVar5 = FUN_100c27e20(param_2);
  lVar6 = FUN_100c27e20(param_2);
  if (lVar6 == 0) goto LAB_100c380c7;
  if (*(code **)(*param_1 + 0x120) == (code *)0x0) {
    lVar6 = FUN_100c26b50(lVar2,param_1 + 0x13);
    if ((lVar6 == 0) || (lVar6 = FUN_100c26b50(lVar3,param_1 + 0x16), lVar6 == 0))
    goto LAB_100c380c7;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x120))(param_1,lVar2,param_1 + 0x13,param_2);
    if ((iVar1 == 0) ||
       (iVar1 = (**(code **)(*param_1 + 0x120))(param_1,lVar3,param_1 + 0x16,param_2), iVar1 == 0))
    goto LAB_100c380c7;
  }
  iVar1 = *(int *)(lVar3 + 8);
  if (*(int *)(lVar2 + 8) == 0) {
joined_r0x000100c380bc:
    if (iVar1 == 0) goto LAB_100c380c7;
  }
  else if (iVar1 != 0) {
    param_1 = param_1 + 0xd;
    iVar1 = FUN_100c29da0(uVar4,lVar2,param_1,param_2);
    if ((((iVar1 == 0) || (iVar1 = FUN_100c29cc0(uVar5,uVar4,lVar2,param_1,param_2), iVar1 == 0)) ||
        (iVar1 = FUN_100c2b1d0(uVar4,uVar5,2), iVar1 == 0)) ||
       (((iVar1 = FUN_100c29da0(uVar5,lVar3,param_1,param_2), iVar1 == 0 ||
         (iVar1 = FUN_100c2bb00(uVar5,0x1b), iVar1 == 0)) ||
        (iVar1 = FUN_100c29b30(lVar2,uVar4,uVar5,param_1,param_2), iVar1 == 0))))
    goto LAB_100c380c7;
    iVar1 = *(int *)(lVar2 + 8);
    goto joined_r0x000100c380bc;
  }
  uVar8 = 1;
LAB_100c380c7:
  FUN_100c27d40(param_2);
  if (lVar7 != 0) {
    FUN_100c27ab0(lVar7);
  }
  return uVar8;
}

