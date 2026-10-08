
undefined8
FUN_100c37bc0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar3 = FUN_100c26610(param_2);
  if (((iVar3 < 3) || (*(int *)(param_2 + 1) < 1)) || ((*(byte *)*param_2 & 1) == 0)) {
    FUN_100c62ee0(0x10,0xa6,0x67,"ecp_smpl.c",0xba);
    return 0;
  }
  uVar7 = 0;
  lVar6 = 0;
  if ((param_5 == 0) && (lVar6 = FUN_100c27a20(), param_5 = lVar6, lVar6 == 0)) {
    return 0;
  }
  FUN_100c27c60(param_5);
  lVar4 = FUN_100c27e20(param_5);
  if (lVar4 != 0) {
    plVar1 = param_1 + 0xd;
    lVar5 = FUN_100c26b50(plVar1,param_2);
    if (lVar5 != 0) {
      uVar7 = 0;
      FUN_100c27430(plVar1,0);
      iVar3 = FUN_100c29ab0(lVar4,param_3,param_2,param_5);
      if (iVar3 != 0) {
        if (*(code **)(*param_1 + 0x118) == (code *)0x0) {
          lVar5 = FUN_100c26b50(param_1 + 0x13,lVar4);
          if (lVar5 == 0) goto LAB_100c37d6e;
        }
        else {
          iVar3 = (**(code **)(*param_1 + 0x118))(param_1,param_1 + 0x13,lVar4,param_5);
          if (iVar3 == 0) goto LAB_100c37d6e;
        }
        plVar2 = param_1 + 0x16;
        iVar3 = FUN_100c29ab0(plVar2,param_4,param_2,param_5);
        if (((iVar3 != 0) &&
            ((*(code **)(*param_1 + 0x118) == (code *)0x0 ||
             (iVar3 = (**(code **)(*param_1 + 0x118))(param_1,plVar2,plVar2,param_5), iVar3 != 0))))
           && (iVar3 = FUN_100c2b920(lVar4,3), iVar3 != 0)) {
          iVar3 = FUN_100c27160(lVar4,plVar1);
          *(uint *)(param_1 + 0x19) = (uint)(iVar3 == 0);
          uVar7 = 1;
        }
      }
    }
  }
LAB_100c37d6e:
  FUN_100c27d40(param_5);
  if (lVar6 != 0) {
    FUN_100c27ab0();
  }
  return uVar7;
}

