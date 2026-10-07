
undefined8 FUN_10085cce0(long *param_1,long param_2)

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
  if ((param_2 == 0) && (param_2 = FUN_10084c820(), lVar7 = param_2, param_2 == 0)) {
    FUN_100887ce0(0x10,0xa5,0x41,"ecp_smpl.c",0x12a);
    return 0;
  }
  uVar8 = 0;
  FUN_10084ca60(param_2);
  lVar2 = FUN_10084cc20(param_2);
  lVar3 = FUN_10084cc20(param_2);
  uVar4 = FUN_10084cc20(param_2);
  uVar5 = FUN_10084cc20(param_2);
  lVar6 = FUN_10084cc20(param_2);
  if (lVar6 == 0) goto LAB_10085cec7;
  if (*(code **)(*param_1 + 0x120) == (code *)0x0) {
    lVar6 = FUN_10084b950(lVar2,param_1 + 0x13);
    if ((lVar6 == 0) || (lVar6 = FUN_10084b950(lVar3,param_1 + 0x16), lVar6 == 0))
    goto LAB_10085cec7;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x120))(param_1,lVar2,param_1 + 0x13,param_2);
    if ((iVar1 == 0) ||
       (iVar1 = (**(code **)(*param_1 + 0x120))(param_1,lVar3,param_1 + 0x16,param_2), iVar1 == 0))
    goto LAB_10085cec7;
  }
  iVar1 = *(int *)(lVar3 + 8);
  if (*(int *)(lVar2 + 8) == 0) {
joined_r0x00010085cebc:
    if (iVar1 == 0) goto LAB_10085cec7;
  }
  else if (iVar1 != 0) {
    param_1 = param_1 + 0xd;
    iVar1 = FUN_10084eba0(uVar4,lVar2,param_1,param_2);
    if ((((iVar1 == 0) || (iVar1 = FUN_10084eac0(uVar5,uVar4,lVar2,param_1,param_2), iVar1 == 0)) ||
        (iVar1 = FUN_10084ffd0(uVar4,uVar5,2), iVar1 == 0)) ||
       (((iVar1 = FUN_10084eba0(uVar5,lVar3,param_1,param_2), iVar1 == 0 ||
         (iVar1 = FUN_100850900(uVar5,0x1b), iVar1 == 0)) ||
        (iVar1 = FUN_10084e930(lVar2,uVar4,uVar5,param_1,param_2), iVar1 == 0))))
    goto LAB_10085cec7;
    iVar1 = *(int *)(lVar2 + 8);
    goto joined_r0x00010085cebc;
  }
  uVar8 = 1;
LAB_10085cec7:
  FUN_10084cb40(param_2);
  if (lVar7 != 0) {
    FUN_10084c8b0(lVar7);
  }
  return uVar8;
}

