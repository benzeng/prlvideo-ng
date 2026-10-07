
bool FUN_100865bd0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  bVar6 = true;
  if ((*(int *)(param_2 + 0x50) == 0) && (iVar1 = FUN_10085c5d0(param_1,param_2), iVar1 == 0)) {
    lVar2 = 0;
    if ((param_3 == 0) && (lVar2 = FUN_10084c820(), param_3 = lVar2, lVar2 == 0)) {
      return false;
    }
    FUN_10084ca60(param_3);
    uVar3 = FUN_10084cc20(param_3);
    lVar4 = FUN_10084cc20(param_3);
    if (((lVar4 == 0) || (iVar1 = FUN_10085c430(param_1,param_2,uVar3,lVar4,param_3), iVar1 == 0))
       || (lVar5 = FUN_10084b950(param_2 + 8,uVar3), lVar5 == 0)) {
      bVar6 = false;
    }
    else {
      lVar4 = FUN_10084b950(param_2 + 0x20,lVar4);
      bVar6 = false;
      if (lVar4 != 0) {
        iVar1 = FUN_10084bbb0(param_2 + 0x38,1);
        bVar6 = iVar1 != 0;
      }
    }
    FUN_10084cb40(param_3);
    if (lVar2 != 0) {
      FUN_10084c8b0(lVar2);
    }
  }
  return bVar6;
}

