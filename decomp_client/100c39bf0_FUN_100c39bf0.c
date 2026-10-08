
undefined8 FUN_100c39bf0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x50) != 0) {
    return 1;
  }
  iVar1 = FUN_100c377d0(param_1,param_2);
  if (iVar1 == 0) {
    lVar2 = 0;
    if ((param_3 == 0) && (lVar2 = FUN_100c27a20(), param_3 = lVar2, lVar2 == 0)) {
      return 0;
    }
    FUN_100c27c60(param_3);
    uVar3 = FUN_100c27e20(param_3);
    lVar4 = FUN_100c27e20(param_3);
    if (((lVar4 == 0) || (iVar1 = FUN_100c375d0(param_1,param_2,uVar3,lVar4,param_3), iVar1 == 0))
       || (iVar1 = FUN_100c37510(param_1,param_2,uVar3,lVar4,param_3), iVar1 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      if (*(int *)(param_2 + 0x50) == 0) {
        FUN_100c62ee0(0x10,0x66,0x44,"ecp_smpl.c",0x4d4);
        uVar3 = 0;
      }
    }
    FUN_100c27d40(param_3);
    if (lVar2 != 0) {
      FUN_100c27ab0(lVar2);
    }
    return uVar3;
  }
  return 1;
}

