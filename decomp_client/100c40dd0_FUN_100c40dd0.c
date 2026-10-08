
bool FUN_100c40dd0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  bVar6 = true;
  if ((*(int *)(param_2 + 0x50) == 0) && (iVar1 = FUN_100c377d0(param_1,param_2), iVar1 == 0)) {
    lVar2 = 0;
    if ((param_3 == 0) && (lVar2 = FUN_100c27a20(), param_3 = lVar2, lVar2 == 0)) {
      return false;
    }
    FUN_100c27c60(param_3);
    uVar3 = FUN_100c27e20(param_3);
    lVar4 = FUN_100c27e20(param_3);
    if (((lVar4 == 0) || (iVar1 = FUN_100c37630(param_1,param_2,uVar3,lVar4,param_3), iVar1 == 0))
       || (lVar5 = FUN_100c26b50(param_2 + 8,uVar3), lVar5 == 0)) {
      bVar6 = false;
    }
    else {
      lVar4 = FUN_100c26b50(param_2 + 0x20,lVar4);
      bVar6 = false;
      if (lVar4 != 0) {
        iVar1 = FUN_100c26db0(param_2 + 0x38,1);
        bVar6 = iVar1 != 0;
      }
    }
    FUN_100c27d40(param_3);
    if (lVar2 != 0) {
      FUN_100c27ab0(lVar2);
    }
  }
  return bVar6;
}

