
uint FUN_100c40c30(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  bool bVar9;
  
  iVar1 = FUN_100c377d0();
  iVar2 = FUN_100c377d0(param_1,param_3);
  if (iVar1 == 0) {
    uVar8 = 1;
    if (iVar2 == 0) {
      if ((*(int *)(param_2 + 0x50) == 0) || (*(int *)(param_3 + 0x50) == 0)) {
        lVar7 = 0;
        if ((param_4 == 0) && (param_4 = FUN_100c27a20(), lVar7 = param_4, param_4 == 0)) {
          return 0xffffffff;
        }
        FUN_100c27c60(param_4);
        uVar3 = FUN_100c27e20(param_4);
        uVar4 = FUN_100c27e20(param_4);
        uVar5 = FUN_100c27e20(param_4);
        lVar6 = FUN_100c27e20(param_4);
        uVar8 = 0xffffffff;
        if (((lVar6 != 0) &&
            (iVar1 = FUN_100c37630(param_1,param_2,uVar3,uVar4,param_4), iVar1 != 0)) &&
           (iVar1 = FUN_100c37630(param_1,param_3,uVar5,lVar6,param_4), iVar1 != 0)) {
          iVar1 = FUN_100c27160(uVar3,uVar5);
          if (iVar1 == 0) {
            iVar1 = FUN_100c27160(uVar4,lVar6);
            bVar9 = iVar1 == 0;
          }
          else {
            bVar9 = false;
          }
          uVar8 = bVar9 ^ 1;
        }
        FUN_100c27d40(param_4);
        if (lVar7 != 0) {
          FUN_100c27ab0();
        }
      }
      else {
        iVar1 = FUN_100c27160(param_2 + 8,param_3 + 8);
        if (iVar1 == 0) {
          iVar1 = FUN_100c27160(param_2 + 0x20,param_3 + 0x20);
          bVar9 = iVar1 == 0;
        }
        else {
          bVar9 = false;
        }
        uVar8 = bVar9 ^ 1;
      }
    }
  }
  else {
    uVar8 = (uint)(iVar2 == 0);
  }
  return uVar8;
}

