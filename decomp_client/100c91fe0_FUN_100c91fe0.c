
bool FUN_100c91fe0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_100c9b550();
    lVar3 = FUN_100c98fc0(param_1,uVar2);
    if (lVar3 == 0) {
      return false;
    }
    iVar1 = FUN_100c98c90(lVar3,1,param_2,1,0);
    if (iVar1 != 1) {
      return false;
    }
  }
  if (param_3 != 0) {
    uVar2 = FUN_100c9c190();
    lVar3 = FUN_100c98fc0(param_1,uVar2);
    if (lVar3 == 0) {
      return false;
    }
    iVar1 = FUN_100c98c90(lVar3,2,param_3,1,0);
    if (iVar1 != 1) {
      return false;
    }
  }
  return param_2 != 0 || param_3 != 0;
}

